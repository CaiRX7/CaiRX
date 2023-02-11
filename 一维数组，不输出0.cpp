#include <stdio.h>
int main()
{
	int a[5]={1,2,3,0,4};
	for(int i=0;i<=4;i++)
	{
		if(a[i]==0)
		{
			i++;
			printf("%d",a[i]);
		}
		else
		{
			printf("%d",a[i]); 
		 } 
	}
		return 0;
}

