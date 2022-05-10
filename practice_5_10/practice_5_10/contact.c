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
		printf("ͨѶ¼����\n");
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
	}
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
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�","�绰","��ַ");
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
	printf("������Ҫɾ��������:");
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
		printf("ɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = 0; j < ps->size; j++)
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
	printf("������Ҫ���ҵ�����:");
	scanf("%s", name);
	int ret = findname(ps, name);
	if (ret == -1)
	{
		printf("���ҵ��˲�����\n");
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
	int ret = findname(ps, name);
	if (ret == -1)
	{
		printf("�޸ĵ��˲�����\n");
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
		printf("ͨѶ¼û����ϵ��\n");
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
		printf("����ɹ�\n");
	}
}