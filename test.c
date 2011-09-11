#include<stdio.h>
int main()
{
char str[30];
int n,i=5;
while(i--)
{
printf("number:");
scanf("%d",&n);
getchar();
printf("string:");
gets(str);
printf("%s le lauda",str);
}
}
