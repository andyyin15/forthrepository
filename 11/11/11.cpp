// 11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<stdio.h>  
#include"iostream"
int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int *ptr = (int *)(a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	system("pause");
	return 0;
	
}