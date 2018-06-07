#pragma warning(disable:4996);

#include <stdio.h>
#include <stdlib.h>
#include <F:\�����ļ�\��һ��\���ݽṹ���㷨\ʵ�鱨��\ʵ�鱨����\��������\��������\Sort.h>

void Readin(RecType a[], char *file)									//�ļ���������
{
	FILE *fp;
	int i = 0;
	if ((fp = fopen(file, "r")) == NULL)
		printf("���ļ�ʧ�ܡ�");
	while (!feof(fp))
	{
		fscanf(fp, "%d ", &a[i].data);
		a[i].key = a[i].data;
		i++;
	}
	fclose(fp);
}

void DataPrint(RecType a[])								//�������ֵ
{
	int i = 0;
	while (i<Maxsize)
	{
		printf("%d ", a[i].data);
		i++;
	}
	printf("\n");
}

int partition(RecType R[], int s, int t)				//һ�α���
{
	int i = s, j = t;
	RecType tmp = R[i];
	while (i < j)
	{
		while (j > i && R[j].key >= tmp.key)
			j--;
		R[i] = R[j];
		while (i < j && R[i].key <= tmp.key)
			i++;
		R[j] = R[i];
	}
	R[i] = tmp;
	return i;
}

void QuickSort(RecType R[], int s, int t)				//��������
{
	int i;
	if (s < t)
	{
		i = partition(R, s, t);
		QuickSort(R, s, i - 1);
		QuickSort(R, i + 1, t);
	}
}


