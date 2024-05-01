/*prog14_2 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *num,*i;
	num = (int *) malloc(sizeof(int));
	i = (int *) malloc(sizeof(int));
	struct student
	{
		char name[10];
		int score;
	}*ptr; /* 宣告標變數ptr */
	 
	printf("How many student?\n");
	scanf("%d",num);
	
	ptr = (struct student *) malloc((*num)*sizeof(struct student));
	
	for((*i)=0;(*i)<(*num);(*i)++)
	{
		fflush(stdin);
		printf("student name:");
		gets((ptr+(*i))->name);
		printf("student score:");
		scanf("%d",&(ptr+(*i))->score);
	}
	
	int sum=0;
	
	for((*i)=0;(*i)<(*num);(*i)++)
	{
		printf("student:%s, score:%d\n",(ptr+(*i))->name,(ptr+(*i))->score);
		sum += ((ptr+(*i))->score);
	}
	
	printf("Averages:%d\n",sum/(*num));
	
	free(ptr);
	free(num);
	free(i);
	
	system("pause");
	return 0;
	
}
