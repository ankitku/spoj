#include<stdio.h>

long int pow6(int n)
{
long int s = 1;
while(n>=1)
{s*=6;n--;}
//printf("power is %d\n",s);
return s;

}

int main()
{
int t,k,n,i,j;
int dp[3][4000]={0,0},p,temp;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&n,&k);

//printf("n is %d\n",n);

for(j=1;j<=6;j++)
	dp[1][j] = 1;
for(j=7;j<=12;j++)		
	dp[1][j] = 0;
for(j=1;j<=6;j++)
	dp[2][j] = j;
for(j=7;j<=12;j++)
	dp[2][j] = (12-j);

if(n==1)
	{
	if(k>=1&&k<=6)
	p= (dp[1][k]*100)/6;
	else
	p=0;
	}
else if(n>1)
{i=1;
while(i<n)
	{
		dp[1][1] = 1;
		dp[2][1] = 1;
		temp = 1;
	for(j=2;j<=pow6(i+1);j++)
		{
		dp[1][j] = dp[2][j];
		dp[2][j] = temp+dp[2][j];
		dp[2][pow6(i+1)-j] = dp[2][j];
		temp = dp[2][j];
		printf("%d ",dp[1][j]);
		}
    printf("\n");
	i++;
	}
if((k>=n)&&(k<=(n+6*(i+1)-1)))
p = (dp[1][k-n+1]*100)/pow6(n);
else
p=0;
}
else p=0;
printf("%d\n",p);
}

}
