#include<stdio.h>
#include<assert.h>


int max1(int a[],int n)
{   int max,sum;
    max=sum=0;

	for(int i = 0; i < n;i++)
	{
		if(sum <= 0)
		{
			sum = a[i];
		}
		else 
		{
			sum += a[i];
		};

		if(sum > max)
		{
			max = sum;
		};
	};
	return max;
}

int main()
{   int n,i;
    int a[10];
	int max;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);


	max = max1(a,n);
	printf("%d\n",max);

	return 0;
}
