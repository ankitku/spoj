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
int n,k,s,t;
scanf("%d %d %d",&n,&k,&s);
t = k*s;
int* boxes = (int *)malloc(n*(sizeof(int)));
for(k=0;k<n;k++)
scanf("%d",&boxes[k]);
int i;
sort(boxes,n);
s=0;
n=0;
for(k=0;!(s>=t);k++)
{
s+=boxes[k];
n++;
}
printf("%d\n",n);
return 0;
}
