#include<stdio.h>

int main()
{
	int i,j;
	unsigned int num,mask=1;
	printf("enter a number\n");
	scanf("%d",&num);
	//printf("%d\n",num);
	for(i=0,j=1;j<9,i<8;i+=2,j+=2)
	{
		num= num&(~((1<<i)|(1<<j))) | ((num&(1<<j))>>(j-i)) | ((num&(1<<i))<<(j-i));
	}
	printf("%d\n",num);
}
