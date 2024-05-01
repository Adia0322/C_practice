// exc14_21 
#include<stdio.h>
#include<stdlib.h>
#include "C:\Users\Andy\OneDrive\¤å¥ó\c»y¨¥\header\linked_list.h"

int main(void)
{
	NODE *fir;
	int arr[] = {12,43,56,34,98};
	int len;
	fir = creat_list(arr,4);
	len = listLength(fir);
	printf("length of fir:%d\n",len);
	return 0;
}

