#include<stdio.h>

void sort(int* ptr, int n)
{int temp,i,j;
for(i=1; i<n; i++)
	for(j=i-1; j>=0; j--)
		if(ptr[j]<ptr[j+1])
			{
			temp = ptr[j];
			ptr[j] = ptr[j+1];
			ptr[j+1] = temp;
			}
	
}

int main()
{
int n,k,s,t,cases,f,c=1;
scanf("%d",&cases);
while(c<=cases)
{
scanf("%d %d",&k,&n);
t = k;
int* boxes = (int *)malloc(n*(sizeof(int)));
for(k=0;k<n;k++)
scanf("%d",&boxes[k]);
int i;
sort(boxes,n);

s=0;
f=0;
for(k=0;(!(s>=t))&&(k<n);k++)
{
s+=boxes[k];
f++;
}
printf("Scenario #%d:\n",c++);
if(s<t)
printf("impossible\n");
else
printf("%d\n",f);
}
return 0;
}
