#include<stdio.h>
int main()
{
int t=10;
while(t--)
{
int n,m;
scanf("%d\n%d",&n,&m);
int l = (n+m)/2;
int s = (n-m)/2;
printf("%d\n%d\n",l>s?s,l:l,s);	
}
return 0;
}
