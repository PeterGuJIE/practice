#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#define max_name 20
#define max_sex  5
#define max_tele 12
#define max_addr 30
#define MAX 1000
struct peofor
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};
enum option
{
	EXIT,
	add,
	del,
	search,
	modify,
	show,
	sort
};
struct contact
{
	struct peofor data[MAX];
	int size;
};
void initcontact(struct contact*ps);
void addcontact(struct contact*ps);
void showcontact(struct contact*ps);
void delcontact(struct contact*ps);
void searchcontact(struct contact*ps);
void modifycontact(struct contact*ps);
void sortcontact(struct contact*ps);