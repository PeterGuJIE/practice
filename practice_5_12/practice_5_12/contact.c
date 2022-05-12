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
			printf("���ݳɹ�\n");
		}
		else
			printf("����ʧ��\n");
	}
}
void addcontact(struct contact*ps)
{
	Regulat(ps);
	printf("�����������:");
	scanf("%s", ps->data[ps->size].name);
	printf("�����������:");
	scanf("%d", &(ps->data[ps->size].age));
	printf("��������Ա�:");
	scanf("%s", ps->data[ps->size].sex);
	printf("������ĵ绰:");
	scanf("%s", ps->data[ps->size].tele);
	printf("������ĵ�ַ:");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
	/*if (ps->data == NULL)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("�����������:");
		scanf("%s", ps->data[ps->size].name);
		printf("�����������:");
		scanf("%d", &(ps->data[ps->size].age));
		printf("��������Ա�:");
		scanf("%s", ps->data[ps->size].sex);
		printf("������ĵ绰:");
		scanf("%s", ps->data[ps->size].tele);
		printf("������ĵ�ַ:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}*/
}
void showcontact(const struct contact*ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ��������:");
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
		printf("Ҫ���ҵ����ֲ�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\t\n", ps->data[ret].name, ps->data[ret].age, ps->data[ret].sex, ps->data[ret].tele, ps->data[ret].addr);
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
		printf("Ҫ�޸ĵ����ֲ�����\n");
	}
	else
	{
		printf("�����������:");
		scanf("%s", ps->data[ret].name);
		printf("�����������:");
		scanf("%d", &(ps->data[ret].age));
		printf("��������Ա�:");
		scanf("%s", ps->data[ret].sex);
		printf("������ĵ绰:");
		scanf("%s", ps->data[ret].tele);
		printf("������ĵ�ַ:");
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
		printf("����ɹ�\n");
	}
}
void freecontact(struct contact*ps)
{
	free(ps->data);
	ps->data = NULL;
}