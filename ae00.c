#include<stdio.h>
int main()
{
int n,s,i=2,p=1;
scanf("%d",&n);
s = n;
while(p<=n)
{
while(i*i<=p)
{
if(p%i==0)
s++;
i++;
}
i=2;
p++;
}
printf("%d",s);
return 0;
}
