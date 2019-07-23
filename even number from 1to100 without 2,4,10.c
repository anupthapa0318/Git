#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%3==0) 
		{
		
		if (i==2||i==4||i==10)
		{
			continue;
		}
		else
		{
			printf("%d\n",i);
		}
	}
}
}
