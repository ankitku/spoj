#include<stdio.h>

int main()
{
int sgl[4],code[4]={0},checknum[7]={0};
int i=1,j;

printf("%d %d %d %d",1,2,3,4);
fflush(stdout);
printf("\n");
scanf("%d %d %d %d",sgl,sgl+1,sgl+2,sgl+3);
//getchar();
for(j=1;j<=4;j++)
{
if(sgl[j-1]==-1)
checknum[j]=-1;
if(sgl[j-1]==1)
code[j-1]=j;
}

printf("%d %d %d %d",1,2,5,6);
fflush(stdout);
printf("\n");
scanf("%d %d %d %d",sgl,sgl+1,sgl+2,sgl+3);
//getchar();
for(j=3;j<=4;j++)
{
if(sgl[j-1]==-1)
checknum[j+2]=-1;
if(sgl[j-1]==1)
code[j-1]=j+2;
}

for(;i<=6;i++)
{
if(code[0]*code[1]*code[2]*code[3]!=0)
break;
if(checknum[i]<0)
continue;
printf("%d %d %d %d",i,i,i,i);
fflush(stdout);
printf("\n");
scanf("%d %d %d %d",sgl,sgl+1,sgl+2,sgl+3);
//getchar();
for(j=0;j<4;j++)
{
if(sgl[j]==1)
code[j]=i;
}
}
printf("%d %d %d %d",code[0],code[1],code[2],code[3]);
fflush(stdout);

return 0;
}
