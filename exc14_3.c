/* ex14.3 */ 
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	double *ptr,sum=0;
	ptr = (double *) malloc(3*sizeof(double));
	
	for(i=0;i<3;i++)
	{
		printf("number%d:",i+1);
		scanf("%lf",(ptr+i)); /*c輸入double只能用%lf */ 
		fflush(stdin);
	}
	
	for(i=0;i<3;i++)
	{
		printf("*(ptr+%d)=%f\n",i,*(ptr+i));
		sum += *(ptr+i);
	}
	printf("Sum:%.1f\n", sum);
	printf("Average:%.4f\n", sum/3);
	
	system("pause");
	return 0;
}

