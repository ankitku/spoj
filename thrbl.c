#include<stdio.h>
int main()
{
int i=1,n,m,s=0,j=0,flag=0,a,b;
scanf("%d %d",&n,&m);
int* hills = (int*) malloc(n*sizeof(int)+1);
int* graph = (int*) malloc(n*sizeof(int)+1);
hills[0] = 0;
while(i<=n)
{
scanf("%d",&hills[i]);
getchar();
i++;
}

i=1;
graph[0]=0;
while(i<=n)
{
if(hills[i]>hills[i-1])
graph[i]=graph[i-1]-1;
else
graph[i]=graph[i-1]+1;
i++;

}


//for(i=0;i<=n;i++) printf("%d ",graph[i]);
i=0;
while(i<m)
{
scanf("%d %d",&a,&b);
if(b>a)
{if((graph[b-1]-graph[a])==(b-a-1)) s++;}
else
if(a>b)
{if((graph[a]-graph[b+1])==(a-b-1)) s++;}
i++;
}
printf("%d",s);
return 0;
}


