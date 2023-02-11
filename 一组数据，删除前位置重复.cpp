#include <stdio.h>
int main()
{
	int i,o;
	int p=0;
	scanf("%d",&i);
  	int a[i];
  	for(int j=0;j<=i-1;j++)
  	{
  		scanf("%d",&a[j]);
  		for(int k=0;k<j;k++)
  		{
  			if(a[k]==a[j])
  			{
  				p=p+1;
  				a[k]=-1;
			}
		   } 
	 }
  for(int m=0;m<=i-p;m++)
  {
  	
	
		if(a[m]==-1)
		{
			m++;
			printf("%d ",a[m]);
		}
		else
		{
			printf("%d ",a[m]); 
		 } 

  }
	return 0;
}
