// exc14_20 
#include<stdio.h>
#include<stdlib.h>
#include "C:\Users\Andy\OneDrive\¤å¥ó\c»y¨¥\header\linked_list.h"

int main(void)
{
	NODE *fir;
	int arr[] = {12,43,56,34};
	fir = creat_list(arr,4);
	fir = insertFirstNode(fir,53);
	printf("fir:\n");
	print_list(fir);
	return 0;
}

