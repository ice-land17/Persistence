#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>



//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�����
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fseek(pf, 5, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���д
//	fputc('a', pf);
//	fputc('a', pf);
//	fputc('c', pf);
//	fputc('d', pf);
//
//	fseek(pf, -3, SEEK_CUR);
//	fputc('w', pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���д
//	fputc('a', pf);
//	fputc('a', pf);
//	fputc('c', pf);
//	fputc('d', pf);
//
//	fseek(pf, -3, SEEK_CUR);
//	fputc('w', pf);
//
//	long pos = ftell(pf);
//
//	printf("%ld\n", pos);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}





//VS2013 WIN10��������

int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������

	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(20000);//˯��10��

	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(20000);

	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}