#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void initcontact(struct contact*ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void addcontact(struct contact*ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入名字:");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}
void showcontact(struct contact*ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\t\n", "姓名", "年龄", "性别","电话","地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\t\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}
	}
}
int findname(struct contact*ps, char name[max_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void delcontact(struct contact*ps)
{
	char name[max_name];
	printf("请输入要删除的名字:");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			break;
		}

	}
	if (i == ps->size)
	{
		printf("删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = 0; j < ps->size; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
void searchcontact(struct contact*ps)
{
	char name[max_name];
	printf("请输入要查找的名字:");
	scanf("%s", name);
	int ret = findname(ps, name);
	if (ret == -1)
	{
		printf("查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\t\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\t\n", ps->data[ret].name, ps->data[ret].age, ps->data[ret].sex, ps->data[ret].tele, ps->data[ret].addr);
	}
}
void modifycontact(struct contact*ps)
{
	char name[max_name];
	printf("请输入要修改的名字:");
	scanf("%s", name);
	int ret = findname(ps, name);
	if (ret == -1)
	{
		printf("修改的人不存在\n");
	}
	else
	{
		printf("请输入名字:");
		scanf("%s", ps->data[ret].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->data[ret].age));
		printf("请输入性别:");
		scanf("%s", ps->data[ret].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[ret].tele);
		printf("请输入地址:");
		scanf("%s", ps->data[ret].addr);
		printf("修改成功\n");
	}
}
void sortcontact(struct contact*ps)
{
	if (ps->size == 0)
	{
		printf("通讯录没有联系人\n");
	}
	else
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < ps->size; i++)
		{
			for (j = 0; j < ps->size - 1; j++)
			{
				if (strcmp(ps->data[j].name, ps->data[j + 1].name)>0)
				{
					struct peofor tmp = ps->data[j];
					ps->data[j] = ps->data[j + 1];
					ps->data[j + 1] = tmp;
				}
			}
		}
		printf("排序成功\n");
	}
}