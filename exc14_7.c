/* prog14_4 */
#include<stdio.h>
#include<stdlib.h>
#define LEN 4

int insertElement(int *, int, int, int);

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

int main(void)
{
	int i,len,item=10,pos=2;
	int arr[10]={12,56,37,63};
	len = insertElement(arr, item, pos, LEN);
	printf("len:%d\n",len);
	printf("arr={");
	for(i=0;i<len;i++)
	printf("%d, ",arr[i]);
	printf("}\n");
	return 0;
}

/* function */
int insertElement(int *arr,int item, int pos, int length)
{
	int i;
	for(i=length-1;i>=pos;i--)
	arr[i+1]=arr[i];
	arr[pos]=item;
	return length+1;
}

