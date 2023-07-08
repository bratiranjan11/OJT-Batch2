#include <stdio.h>
int count();

int main()
{
   
    count();
    count();
    count();
    count();
    
}
int count()
{
   int c =0 ;
    c=c+1;
    printf("%d\t%d\n", c,  &c);


}
  
   