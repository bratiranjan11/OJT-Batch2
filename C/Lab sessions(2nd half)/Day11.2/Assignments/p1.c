/*Write a program to enter a 4 digit number from keyboard. Add 8 to the number
 and then divide it by 3. Now, the modulus of that number is taken with 5 and
 then multiply the resultant value by 5. Display the final result.*/


#include<stdio.h>

int main()
{
int n;
printf("Enter a 4 digit number\n");    
scanf("%d", &n); 
if (n>=1000 && n<=9999) {
float i;  
i = (((n + 8)/3)%5)*5;  
printf("%f\n", i);
}
else{
printf("This is not an 4 digit number");
}
}