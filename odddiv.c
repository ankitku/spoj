#include<stdio.h>

int nums,k;

const int N=100001;
int arr[100001]={0};

int divisors (int x) {
int primedivs = 1,c,i,p=x,num=x;
for(i=2;(i<=x);i++)
{
if((arr[i]==0)&&(x%i==0)&&(num!=0)){
//printf("~%d~ ",i);
c=0;
p=x;
while(p%i==0)
{
p=p/i;
num=num/i;
c++;
//printf("<%d %d> ",i,c);
}
primedivs*=(2*c+1);
}}
return primedivs;
}

int main()
{
int c,l,h,i,nums=0;
int j,k;
for(j=2;j*j<=N;j++)
{
for(k=2*j;k<=N;k+=j)
arr[k]=1;
}              //   generated primes

//int sqrts[100002];
//for(i=2;i<100002;i++)
//sqrts[i] = divisors(i);


scanf("%d",&c);
while(c--)
{
nums=0;
scanf("%d %d %d",&k,&l,&h);
for(i= (int) l/2;i*i>=l;i--);
if(i*i<l) i++;

for(;i*i<=h;i++) 
{
//printf("%d-> %d\n",i*i,divisors(i));
if(divisors(i)==k)
nums++;
}
printf("%d\n",nums);
}
return 0;
}
