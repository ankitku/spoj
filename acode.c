#include<stdio.h>

long long int s = 0;
void recur(char* str, int state, int i)
{
int a  = state;
int b = (int)str[i+1] - 48;

if(str[i+1]=='\0')
{
s++;
return;
}

if(10*a+b<=26 )
{state = 10*a+b;
recur(str,state,i+1);
}
if(b!=0)
{state = b;
recur(str,state,i+1);
}

}

int main()
{
int state=0;
char str[5000];
while(1)
{
gets(str);
if(str[0]=='0')
break;
state=str[0]-48;
recur(str,state,0);
printf("%d",s);
s=0;
}
}
