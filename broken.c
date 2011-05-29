#include<stdio.h>

void qinsert(char* buff, char ch)
{
char *ptr = buff+1;
while(*ptr != '\0')
*buff++=*ptr++;
*buff = ch;
} 

int main()
{
char str[1000002], buf[129];
int last,m,flag,max,i,j,ch,count;


	while(1)
	{
	scanf("%d",&m);
	getchar();
	if(m==0) break;
	gets(str);

	last=0,flag = 0,max = -1,i=0,j=0,ch;
	count = m; // after init buf filling 

	if(strlen(str)<=m)
	{printf("%d\n",strlen(str));
	continue;}

	while(i<m)
	buf[i++]=str[i];
	buf[i]='\0';

	while(str[i]!='\0')
		{
		for(j=0;j<m;j++)
			if(buf[j]==str[i])
				{
				flag = 1;
				break;
				}
		if(flag==1)
		{
		count++;
		if(count>max) max = count;
		}
		else
			{
			if(count>max) max = count;
			count = m;
			last = last+1;
			qinsert(buf,str[i]);
//			printf("buf status:%s max:%d\n",buf,max);		
			}
		flag=0;
		i++;
		}
	printf("%d\n",max);

	}

}
