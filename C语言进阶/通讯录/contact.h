#pragma once
#include <string.h>
#include<stdio.h>
#include<assert.h>

//���͵�����

#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

//ͨѶ¼��ʼ״̬��������С
#define DEAFUALT_SZ 3
enum Option
{
	EXIT,//0
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;
//��̬�İ汾
typedef struct Contact
{
	PeoInfo data[MAX];//���Դ��1000���˵���Ϣ
	int sz;//��¼ͨѶ���Ѿ��������Ϣ����
}Contact;

//����������

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//������ϵ����Ϣ
void AddContact(Contact* pc);

//��ӡ��ϵ����Ϣ
void PrintContact(const Contact* pc);

//ɾ��ָ����ϵ��
void DelContact(Contact* pc);

//����ָ����ϵ��
void SearchContact(const Contact* pc);