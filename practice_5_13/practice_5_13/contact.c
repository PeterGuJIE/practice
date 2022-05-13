#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void initcontact(struct contact*ps)
{
	//memset(ps->data, 0, sizeof(ps->data));
	//int sz = 0;
	ps->data = malloc(MAX * sizeof(struct people));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->max_time = MAX;
}
void regulat(struct contact*ps)
{
	if (ps->max_time == ps->size)
	{
		struct people*str = realloc(ps->data, (ps->max_time + 2)*sizeof(struct people));
		if (str != NULL)
		{
			ps->data = str;
			ps->max_time += 2;
			printf("���ݳɹ�\n");
		}
		else
			printf("ʧ�ܳɹ�\n");
	}
}
void addcontact(struct contact*ps)
{
	regulat(ps);
	printf("����������:");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");




	/*if (ps->size==1000)
	{
		printf("ͨѶ¼����\n");
		return;
	}
	else
	{
		printf("����������:");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}*/
}
void showcontact(struct contact*ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\t\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
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
	printf("������Ҫɾ��������:");
	scanf("%s", name);
	int ret = find(ps,name);
	if (ret == -1)
	{
		printf("δ�ҵ�Ҫɾ��������\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void searchcontact(struct contact*ps)
{
	char name[max_name];
	
	printf("������ҪѰ�ҵ�����:");
	scanf("%s", name);
	int ret = find(ps, name);
	if (ret == -1)
	{
		printf("δ�ҵ�ҪѰ�ҵ�����\n");
	}
	else
	{
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\t\n", ps->data[ret].name, ps->data[ret].age, ps->data[ret].sex, ps->data[ret].tele, ps->data[ret].addr);
	}
}
void modifycontact(struct contact*ps)
{
	char name[max_name];
	
	printf("������Ҫ�޸ĵ�����:");
	scanf("%s", name);
	int ret = find(ps, name);
	if (ret == -1)
	{
		printf("δ�ҵ�Ҫ�޸ĵ�����\n");
	}
	else
	{
		printf("����������:");
		scanf("%s", ps->data[ret].name);
		printf("����������:");
		scanf("%d", &(ps->data[ret].age));
		printf("�������Ա�:");
		scanf("%s", ps->data[ret].sex);
		printf("������绰:");
		scanf("%s", ps->data[ret].tele);
		printf("�������ַ:");
		scanf("%s", ps->data[ret].addr);
		printf("�޸ĳɹ�\n");
	}
}
void sortcontact(struct contact*ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < ps->size - 1; i++)
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
		printf("����ɹ�\n");
	}
}