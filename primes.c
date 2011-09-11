#include<stdio.h>
int main()
{
const int N=100001;
printf("%d\n",100);
int arr[100001]={0};
int j,k;
for(j=2;j*j<=N;j++)
{
for(k=2*j;k<=N;k+=j)
arr[k]=1;
}

for(j=1;j<=N;j++)
printf("%d ",arr[j]);
printf("\n");
return 0;
}
