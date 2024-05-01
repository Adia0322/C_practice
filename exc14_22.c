// exc14_21 
#include<stdio.h>
#include<stdlib.h>
#include "C:\Users\Andy\OneDrive\¤å¥ó\c»y¨¥\header\linked_list.h"

int main(void)
{
	NODE *fir;
	int arr1[] = {12,43,56,34,98};
	int arr2[] = {36,77,99};
	NODE *first1 = create_list(arr1,5);
	NODE *first2 = create_list(arr2,3);
	printf("first1:\n");
	print_list(first1);
	printf("first2:\n");
	print_list(first2);
	NODE *List12;
	combineList(first1,first2);
	printf("length of first1+2:\n");
	print_list(first1);
	return 0;
}

