#pragma once

#ifndef __SORT_H__
#define __SORT_H__

#include <stdio.h>
#include <stdlib.h>
#include <F:\�����ļ�\��һ��\���ݽṹ���㷨\ʵ�鱨��\ʵ�鱨����\��������\��������\Sort.h>

#define Maxsize 11

typedef int KeyType;
typedef int InfoType;

typedef struct
{
	KeyType key;
	InfoType data;
}RecType;

void Readin(RecType a[], char *file);					//�ļ���������
void DataPrint(RecType a[]);							//�������ֵ
int partition(RecType R[], int s, int t);				//һ�α���
void QuickSort(RecType R[], int s, int t);				//��������
int BinSearch(RecType R[], int n, KeyType k);			//�۰����

#endif // !__SORT_H__
