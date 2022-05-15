#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<errno.h>
#define max_name 20
#define max_sex 5
#define max_tele 12
#define max_addr 30
#define MAX 3
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

typedef struct people
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
}people;

typedef struct contact
{
	people* data;
	int size;
	int max_size;
}contact;


void initcontact(contact*ps);
void addcontact(contact*ps);
void showcontact(contact*ps);
void delcontact(contact*ps);
void searchcontact(contact*ps);
void modiftcontact(contact*ps);
void sortcontact(contact*ps);
void exitcontact(contact*ps);
void savecontact(contact*ps);
void readcontact(contact*ps);