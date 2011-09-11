#include<stdio.h>

int contains(char* s,char ch)
{
if(ch=='_')
{
	while(s!='\0')
	{if(*(s++)=='_')
	return 1;
	}
}
else
if(ch=='A')
{
	while(s!='\0')
	{if(*s<=90&&*s>=65)
	return 1;
	}
}
return 0;
}

char* convertc(char* s)
{char str[200];
char* ptr = str;
	while(s!='\0')
	{
	if(*s<=90&&*s>=65)
	{
	*ptr++ = '_';
	*ptr = *s++ + 32;
	}
	else
	*ptr++ = *s++;
	}
}


char* convertj(char* s)
{char str[200];
char* ptr = str;
	while(s!='\0')
	{
	if(*s=='_')
	{
	s++;
	*ptr++ = *s++ - 32;
	}
	else
	*ptr++ = *s++;
	}
}

int main()
{
char str[102];
int i=10;
while(i--)
{
gets(str);
if(*str=='\0') break;
int c = contains(str,'_');
int j = contains(str,'A');
if(c&j||(*str<=90&&*str>=65))
{
printf("Error!\n");
continue;
}
else
if(c)
{
printf("%s\n",convertj(str));
continue;
}
else
if(j)
{
printf("%s\n",convertc(str));
}

}

}
