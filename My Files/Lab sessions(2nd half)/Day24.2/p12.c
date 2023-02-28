#include<stdio.h>

int main()
{
    struct play
    {
        char name[10];
        int playnum;

    };
    struct play p1={"Virat",18};
    struct play p2 = p1;
    if(p1==p2)
    {
        printf("Two structure members are equal");
    }
}


///Compilation Erroir