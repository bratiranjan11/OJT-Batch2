#include <stdio.h>
#include <math.h>

int series(int,int);
int main()
{
	int x,n;
	
	printf("Enter total number of terms: ");
	scanf("%d",&n);
	
	printf("Enter the value of x: ");
	scanf("%d",&x);	

    series(n,x);
	
}

int series(int n, int x)
{
    float sum=0;
    for( int i=1; i<=n; i++)
    {
		sum = sum+1+(1/pow(x,i));
	}
    printf("Sum of the series: %f\n",sum);


}