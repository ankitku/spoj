#include<stdio.h>

long long int s = 0;
int st[26];

int recur(char* str, int state, int i)
{
int a  = state;
int b = (int)str[i+1] - 48;

if(str[i+1]=='\0')
{
return 1;
}

if(10*a+b<=26 )
{state = 10*a+b;
if(st[state]>0)
st[state]+=1;
else
st[state]=recur(str,state,i+1);
}
if(b!=0)
{state = b;
if(st[state]>0)
st[state]+=1;
else
st[state]+=recur(str,state,i+1);
}

}

int main()
{
int state=0,i=26;
char str[5000];
while(1)
{
gets(str);
if(str[0]=='0')
break;
while(i--) st[i] = 0;
i=26;
state=str[0]-48;
recur(str,state,0);
while(i--) s+=st[i];
printf("%d",s);
s=0;
i=26;
}
}
