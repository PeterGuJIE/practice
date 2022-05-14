#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void initcontact(contact*ps)
{
	ps->data = malloc(MAX*sizeof(people));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->max_size = MAX;
	begcontact(ps);
}
void regular(contact*ps);
void begcontact(contact*ps)
{
	people tmp = { 0 };
	FILE*pfread = fopen("contact.dat", "rb");
	if (pfread == NULL)
	{
		printf("pfread:%s\n", strerror(errno));
		return;
	}
	while (fread(&tmp, sizeof(people), 1, pfread))
	{
		regular(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfread);
	pfread = NULL;
}
void regular(contact*ps)
{
	if (ps->max_size == ps->size)
	{
		people*str = realloc(ps->data, (ps->max_size + 2)*sizeof(people));
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
void addcontact(contact*ps)
{
	regular(ps);
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
void showcontact(contact*ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\t\n", "����","����","�Ա�","�绰","��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\t\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}
	}
}
int findcontact(contact*ps, char name[max_name])
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
void delcontact(contact*ps)
{
	char name[max_name] = { 0 };
	printf("������Ҫɾ��������:");
	scanf("%s", name);
	int ret = findcontact(ps,name);
	if (ret == -1)
	{
		printf("δ�ҵ�Ҫɾ��������\n");
	}
	else
	{
		int i = 0;
		for (i = ret; i < ps->size - 1; i++)
		{
			ps->data[i] = ps->data[i + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void searchcontact(contact*ps)
{
	char name[max_name] = { 0 };
	printf("������Ҫ���ҵ�����:");
	scanf("%s", name);
	int ret = findcontact(ps, name);
	if (ret == -1)
	{
		printf("δ�ҵ�Ҫ���ҵ�����\n");
	}
	else
	{
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\t\n", ps->data[ret].name, ps->data[ret].age, ps->data[ret].sex, ps->data[ret].tele, ps->data[ret].addr);
	}
}
void modifycontact(contact*ps)
{
	char name[max_name] = { 0 };
	printf("������Ҫ�޸ĵ�����:");
	scanf("%s", name);
	int ret = findcontact(ps, name);
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
	}
}
void sortcontact(contact*ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	int i = 0;
	for (i = 0; i < ps->size-1; i++)
	{
		int j = 0;
		for (j = 0; j < ps->size - 1 - i; j++)
		{
			if (strcmp(ps->data[j].name, ps->data[j + 1].name)>0)
			{
				people tmp;
				tmp = ps->data[j];
				ps->data[j] = ps->data[j+1];
				ps->data[j + 1] = tmp;
			}
		}
	}
	printf("����ɹ�\n");
}
void exitcontact(contact*ps)
{
	free(ps->data);
	ps->data = NULL;
}
void savecontact(contact*ps)
{
	FILE*pfwrite = fopen("contact.dat", "wb");
	if (pfwrite == NULL)
	{
		printf("pfwrite:%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(people), 1, pfwrite);
	}
	printf("����ɹ�\n");
	fclose(pfwrite);
	pfwrite = NULL;
}