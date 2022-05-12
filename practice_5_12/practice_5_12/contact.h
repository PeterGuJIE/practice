#define _CRT_SECURE_NO_WARNINGS 1
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

#define max_name 20
#define max_sex  5
#define max_tele 12
#define max_addr 30
#define default_s   3

struct people
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};

struct contact
{
	int size;
	struct people *data;
	int max_size;
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
void Initcontact(struct contact*ps);
void addcontact(struct contact*ps);
void showcontact(const struct contact*ps);
void delcontact(struct contact*ps);
void searchcontact(struct contact*ps);
void modifycontact(struct contact*ps);
void sortcontact(struct contact*ps);
void freecontact(struct contact*ps);

