#include<stdio.h>
#include<math.h>
#define n 11
 
int v[n]={0}, w[n]={0}, d;

int arr[1000000][n];
 
inline int max(int a,int b,int c)
{
return(b>=a)?((b>=c)?b:c):((a>=c)?a:c);
}
 
int dp(int c,int i)
{
if(i>d)
{
if(arr[c][i]==-1)
arr[c][i] = 0;

return arr[c][i];
}
if(w[i]>c)
{
if(arr[c][i+1]==-1)
arr[c][i+1] = dp(c,i+1);

return arr[c][i+1];
}
else
{
if(arr[c][i+1]==-1)
arr[c][i+1] = dp(c,i+1);

if(arr[c-w[i]][i+1]==-1)
arr[c-w[i]][i+1] = dp(c-w[i],i+1);

if(arr[c-w[i]][i]==-1)
arr[c-w[i]][i] = dp(c-w[i],i);

 return max(arr[c][i+1],v[i]+arr[c-w[i]][i+1],v[i]+arr[c-w[i]][i]);
}
}
 
int main()
{
int sum,years,cases;
int p,q;
scanf("%d",&cases);

while(cases--)
{
for(p=0;p<1000000;p++)
for(q=0;q<10;q++)
arr[p][q]=-1;

scanf("%d %d",&sum,&years);
 sum/=10;

scanf("%d",&d);
int i;

for(i=1;i<=d;i++)
{scanf("%d %d",w+i,v+i);
w[i]/=10;
v[i]/=10;
}

while(years--) sum+=dp(sum,1);
printf("%d",sum*10);
}
return 0; 
}

