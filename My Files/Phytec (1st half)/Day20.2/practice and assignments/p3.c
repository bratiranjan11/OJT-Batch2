/*max range of data type+1 */

#include <stdio.h>


int main()
{
    long long int s, a[19];
    printf("Enter thge max range of charavter data type:");
    scanf("%llu", &s);
    a[s] = a[s + 1];
    printf("%d", a[s]);
   
}