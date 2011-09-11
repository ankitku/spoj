#include<stdio.h>
int main(int a,int b)	
{
	while(1)
	{
	scanf("%d %d",&a,&b);
	if((a==-1)&&(b==-1))
	break;
	if(a==1||b==1)
	printf("%d+%d=%d\n",a,b,(a+b));
	else
	printf("%d+%d!=%d\n",a,b,(a+b));
	}
	return 0;
}

