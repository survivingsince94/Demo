#include<stdio.h>
int main()
{
int a,b,n,i,j;
scanf("%d",&n);
while(n>0)
{
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=2;j<i;j++)
			if(j%i==0)
			{
				break;
			}
		if(j<i)
		{
			printf(i"\n");
		}
	}
	n--;
}
return 0;
}
