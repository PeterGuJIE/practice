#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void Initcontact(struct contact*ps)
{
	//memset(ps->data, 0, sizeof(ps->data));
	//ps->size = 0;
	ps->data = malloc(3 * sizeof(struct people));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->max_size = default_s;
}
void Regulat(struct contact*ps)
{
	if (ps->max_size == ps->size)
	{
		struct people*str = realloc(ps->data, (ps->max_size + 2)*sizeof(struct people));
		if (str != NULL)
		{
			ps->data = str;
			ps->max_size += 2;
			printf("增容成功\n");
		}
		else
			printf("增容失败\n");
	}
}
void addcontact(struct contact*ps)
{
	Regulat(ps);
	printf("请输入的名字:");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入的年龄:");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入的性别:");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入的电话:");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入的地址:");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
	/*if (ps->data == NULL)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入的名字:");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入的年龄:");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入的性别:");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入的电话:");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入的地址:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}*/
}
void showcontact(const struct contact*ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\t\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}
	}
}
int find(struct contact*ps, char name[max_name])
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
	int ret = find(ps, name);
	/*int i = 0;*/
	/*for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			break;
		}
	}*/
	if (ret == -1)
	{
		printf("未找到要删除的名字\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)
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
	printf("请输入要寻找的名字:");
	scanf("%s", name);
	int ret = find(ps, name);
	if (ret == -1)
	{
		printf("要查找的名字不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\t\n", ps->data[ret].name, ps->data[ret].age, ps->data[ret].sex, ps->data[ret].tele, ps->data[ret].addr);
	}
}
void modifycontact(struct contact*ps)
{
	char name[max_name];
	printf("请输入要修改的名字:");
	scanf("%s", name);
	int ret = find(ps, name);
	if (ret == -1)
	{
		printf("要修改的名字不存在\n");
	}
	else
	{
		printf("请输入的名字:");
		scanf("%s", ps->data[ret].name);
		printf("请输入的年龄:");
		scanf("%d", &(ps->data[ret].age));
		printf("请输入的性别:");
		scanf("%s", ps->data[ret].sex);
		printf("请输入的电话:");
		scanf("%s", ps->data[ret].tele);
		printf("请输入的地址:");
		scanf("%s", ps->data[ret].addr);
		printf("修改成功\n");
	}
}
void sortcontact(struct contact*ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < ps->size-1; i++)
		{
			for (j = 0; j < ps->size - 1 - i; j++)
			{
				if (strcmp(ps->data[j].name, ps->data[j + 1].name)>0)
				{
					struct people tmp;
					tmp = ps->data[j];
					ps->data[j] = ps->data[j + 1];
					ps->data[j + 1] = tmp;
				}
			}
		}
		printf("排序成功\n");
	}
}
void freecontact(struct contact*ps)
{
	free(ps->data);
	ps->data = NULL;
}