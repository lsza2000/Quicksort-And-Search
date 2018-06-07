#include <stdio.h>
#include <stdlib.h>
#include <F:\代码文件\大一下\数据结构与算法\实验报告\实验报告四\快速排序\快速排序\sort.h>

int BinSearch(RecType R[], int n, KeyType k)		//折半查找
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
		printf("查找的值不存在。");
		return -1;
	}

	printf("元素所处位置为：");
	while (k == R[mid - j].key)
		j++;
	j--;
	while (k == R[mid - j].key && k == R[mid - j + 1].key)
	{
		printf("%d,", i - j);
		j--;
	}
	printf("%d。\n", i - j);

	return 0;
}