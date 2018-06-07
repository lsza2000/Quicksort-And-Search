#pragma warning(disable:4996);

#include <stdio.h>
#include <stdlib.h>
#include <F:\代码文件\大一下\数据结构与算法\实验报告\实验报告四\快速排序\快速排序\Sort.h>

int main(void)
{
	RecType a[Maxsize];
	int n;
	while (1)
	{
		printf("\n请输入操作：\n读入文件：\t1\n快速排序:\t2\n折半查找:\t3\n退出:\t\t4\n\n");
		scanf("%d", &n);
		switch (n)
		{
			case 1: 
			{
				printf("请输入文件路径。");
				char text[20];
				char *fp = text;
				scanf("%s", fp);
				Readin(a, fp);
				DataPrint(a);
				break;
			}
			case 2:
			{
				QuickSort(a, 0, Maxsize - 1);
				DataPrint(a);
				break;
			}
			case 3:
			{
				printf("请输入要查找的元素：");
				KeyType data;
				scanf("%d", &data);
				BinSearch(a, Maxsize, data);
				break;
			}
			case 4:	return 0;
		}
	}
	system("pause");
	return 0;
}