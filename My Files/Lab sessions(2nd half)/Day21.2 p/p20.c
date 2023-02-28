/*a program to know the occurances of an element in an array*/

#include <stdio.h>

int main()
{
	int s, i, num, occr = 0;

	printf("enter the size of the array = ");
	scanf("%d", &s);

	int arr[s];
	
	printf("Enter the elements in th array : ");
	for (i = 0; i < s; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Please Enter the Array Item to Know the occurance = ");
	scanf("%d", &num);

	for (i = 0; i < s; i++)
	{
		if (arr[i] == num)
		{
			occr++;
		}
	}

	printf("%d Occurred %d Times.\n", num, occr);
}