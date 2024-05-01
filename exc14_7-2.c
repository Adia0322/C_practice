/* prog14_4 */
#include<stdio.h>
#include<stdlib.h>
#define len 4
int insertElement(int *, int, int, int);

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

int main(void)
{
	int item,pos,length_af;
	int arr[len]={12,56,37,63};
	NODE *fir,*cur,*pre;
	
	length_af = insertElement(arr,10,2,4);
	printf("length_af=%d\n",length_af);
	
	system("pause");
	return 0;
}
/* function */
int insertElement(int *arr,int item, int pos, int length)
{
	int i,length_af;
	NODE *fir,*cur,*pre;
	for(i=0;i<length;i++)
	{
		cur = (NODE *) malloc(sizeof(NODE));
		if(i==0)
		{
			fir=cur;
			fir->next=cur; /*  ******  */
		}
		else
		{
			pre->next=cur;
			if(i==pos)
			{
				cur->data=item;
			}
			else
			{
				cur->data=*(arr+i);
			}
		}
		cur->next=NULL;
		pre=cur;
	}
	cur=fir;
	int count=0;
	while(cur!=NULL)
	{
		printf("%d\n",cur->data);
		cur = cur->next;
		count += 1;
	} 
	return count;
}

