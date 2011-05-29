#include<stdio.h>

void qinsert(char* buff, char ch)
{
char *ptr = buff+1;
while(*ptr != '\0')
*buff++=*ptr++;
*ptr = ch;
} 

int main()
{
char str[10], buf[128];
int last=0,m,flag = 0,max = -1,i=0,j=0,ch;

	while(1)
	{
	scanf("%d",&m);
	getchar();
	gets(str);
	printf("%s",str);

	i=0;
	int count = m; // after init buf filling 
	while(i<m)
	buf[i++]=str[i];

	last=0,flag = 0,max = -1;

	while(str[i]!='\0')
		{
		for(j=0;j<m;j++)
			if(buf[j]==str[i])
				{
				flag = 1;
				break;
				}
		if(flag==1)
		count++;
		else
			{
			if(count>max) max = count;
			count = 0;
			last = last+1;
			qinsert(buf,str[i]);			
			}
		flag=0;
		}
	printf("%d\nreading buf",max);
	scanf("%d",&m);
	printf("string:");
	gets(str);	
	}

}
