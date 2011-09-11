#include<stdio.h>
int main()
{
int n,i=0;
char insig[100][20], str[150];
while(1)
{
scanf("%d",&n);
if(n==0)
break;

for(i=0;i<n;i++)
gets(insig[i]);

while(1)
{
gets(str);
if(strcmp("LAST CASE",str)<0)
break;
}


}
}
