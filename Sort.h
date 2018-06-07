#pragma once

#ifndef __SORT_H__
#define __SORT_H__

#include <stdio.h>
#include <stdlib.h>
#include <F:\代码文件\大一下\数据结构与算法\实验报告\实验报告四\快速排序\快速排序\Sort.h>

#define Maxsize 11

typedef int KeyType;
typedef int InfoType;

typedef struct
{
	KeyType key;
	InfoType data;
}RecType;

void Readin(RecType a[], char *file);					//文件读入数据
void DataPrint(RecType a[]);							//输出数组值
int partition(RecType R[], int s, int t);				//一次遍历
void QuickSort(RecType R[], int s, int t);				//快速排序
int BinSearch(RecType R[], int n, KeyType k);			//折半查找

#endif // !__SORT_H__
