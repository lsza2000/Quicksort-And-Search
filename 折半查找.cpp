#include <stdio.h>
#include <stdlib.h>
#include <F:\�����ļ�\��һ��\���ݽṹ���㷨\ʵ�鱨��\ʵ�鱨����\��������\��������\sort.h>

int BinSearch(RecType R[], int n, KeyType k)		//�۰����
{
	int low = 0, high = n - 1, mid;
	int i = 0, j = 0;
	int temp = k;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (k == R[mid].key)
		{
			i = mid + 1;
			break;
		}
		if (k < R[mid].key)
			high = mid - 1;
		else
			low = mid + 1;
	}
	if (k != R[mid].key)
	{
		printf("���ҵ�ֵ�����ڡ�");
		return -1;
	}

	printf("Ԫ������λ��Ϊ��");
	while (k == R[mid - j].key)
		j++;
	j--;
	while (k == R[mid - j].key && k == R[mid - j + 1].key)
	{
		printf("%d,", i - j);
		j--;
	}
	printf("%d��\n", i - j);

	return 0;
}