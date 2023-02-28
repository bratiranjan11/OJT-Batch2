#include<stdio.h>
int main(int argc,char *argv[])
{
    int sum=0,n,mul=1,div,mod;
    char str[5];
    sscanf(argv[1],"%[^\n]%*c",str);

    if(argv[1]=="-s")
    {
        for(int i=2;i<argc;i++)
        {
            sscanf(argv[i],"%d",&n);
            sum=sum+n;
        }
    }
}