#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//��̬�İ汾
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

//��̬�İ汾
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->sz = 0;
//	pc->capacity = DEAFUALT_SZ;
//	pc->data = (PeoInfo*)malloc(pc->capacity * sizeof(PeoInfo));
//	if (pc->data == NULL)
//	{
//		perror("InitContact::malloc");
//		return;
//	}
//	memset(pc->data, 0, pc->capacity * sizeof(PeoInfo));
//}

void CheckCapacity(Contact* pc)
{
	//���ݵĴ���
	if (pc->sz == pc->capacity)
	{
		PeoInfo* tmp = realloc(pc->data, (pc->capacity + 2) * sizeof(PeoInfo));
		if (tmp != NULL)
		{
			pc->data = tmp;
		}
		else
		{
			perror("CheckCapacity::realloc");
		}
		pc->capacity += 2;
		printf("���ݳɹ�\n");
	}
}

void LoadContact(Contact* pc)
{
	//���ļ�
	FILE* pf = fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}
	//���ļ�
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}
//��ʼ��ͨѶ¼-�ļ��汾
void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	pc->capacity = DEAFUALT_SZ;
	pc->data = (PeoInfo*)malloc(pc->capacity * sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact::malloc");
		return;
	}
	memset(pc->data, 0, pc->capacity * sizeof(PeoInfo));
	//�����ļ���Ϣ��ͨѶ¼��
	LoadContact(pc);
}

void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
	printf("\n���ٳɹ�\n\n");
}


void AddContact(Contact* pc)
{
	assert(pc);

	//��̬�İ汾
	//if (pc->sz == MAX)
	//{
	//	printf("ͨѶ¼�������޷����\n");
	//	return;
	//}
	
	//��̬�İ汾
	CheckCapacity(pc);
	//¼����Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("��ӳɹ�\n");
}

void PrintContact(const Contact* pc)
{
	assert(pc);

	int i = 0;
	printf("%-20s %-5s %-5s %-12s %-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");

	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s %-5d %-5s %-12s %-30s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}

int FindByName(const Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}

	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);

	if (pc->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
		return;
	}
	//ɾ��
	//1. �ҵ�
	char name[NAME_MAX] = { 0 };
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	} 
	//2. ɾ��
	int j = 0;
	for (j = pos; j < pc->sz - 1; j++)
	{
		pc->data[j] = pc->data[j + 1];
	}

	pc->sz--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(const Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	printf("%-20s %-5s %-5s %-12s %-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s %-5d %-5s %-12s %-30s\n", pc->data[pos].name, pc->data[pos].age, pc->data[pos].sex,
		pc->data[pos].tele, pc->data[pos].addr);
}


//void SaveContact(const Contact* pc)
//{
//	FILE* pf=fopen("contact.dat", "Wb");
//	if (pf = NULL)
//	{
//		perror("SaveContact::fopen");
//		return;
//	}
//	//д�ļ�
//	int i = 0;
//	for (i = 0; i < pc->sz; i++)
//	{
//		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//}
void SaveContact(const Contact* pc)
{
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		perror("SaveContact::fopen");
		return;
	}
	//д�ļ�
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}