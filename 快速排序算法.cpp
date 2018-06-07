#pragma warning(disable:4996);

#include <stdio.h>
#include <stdlib.h>
#include <F:\代码文件\大一下\数据结构与算法\实验报告\实验报告四\快速排序\快速排序\Sort.h>

void Readin(RecType a[], char *file)									//文件读入数据
{
	FILE *fp;
	int i = 0;
	if ((fp = fopen(file, "r")) == NULL)
		printf("打开文件失败。");
	while (!feof(fp))
	{
		fscanf(fp, "%d ", &a[i].data);
		a[i].key = a[i].data;
		i++;
	}
	fclose(fp);
}

void DataPrint(RecType a[])								//输出数组值
{
	int i = 0;
	while (i<Maxsize)
	{
		printf("%d ", a[i].data);
		i++;
	}
	printf("\n");
}

int partition(RecType R[], int s, int t)				//一次遍历
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

void QuickSort(RecType R[], int s, int t)				//快速排序
{
	int i;
	if (s < t)
	{
		i = partition(R, s, t);
		QuickSort(R, s, i - 1);
		QuickSort(R, i + 1, t);
	}
}


