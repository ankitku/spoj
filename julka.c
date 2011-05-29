#include<stdio.h>
#include<math.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
int i = 1,s=0,p;
while(p=n/pow(5,i))
	{
	s+=p;
	i++;
	}
printf("%d\n",s);	
}
return 0;
}
