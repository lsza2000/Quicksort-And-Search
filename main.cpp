#pragma warning(disable:4996);

#include <stdio.h>
#include <stdlib.h>
#include <F:\�����ļ�\��һ��\���ݽṹ���㷨\ʵ�鱨��\ʵ�鱨����\��������\��������\Sort.h>

int main(void)
{
	RecType a[Maxsize];
	int n;
	while (1)
	{
		printf("\n�����������\n�����ļ���\t1\n��������:\t2\n�۰����:\t3\n�˳�:\t\t4\n\n");
		scanf("%d", &n);
		switch (n)
		{
			case 1: 
			{
				printf("�������ļ�·����");
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
				printf("������Ҫ���ҵ�Ԫ�أ�");
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