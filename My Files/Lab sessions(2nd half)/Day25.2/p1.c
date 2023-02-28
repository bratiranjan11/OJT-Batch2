/*Strings*/

#include<stdio.h>

int main()
{
    char s1[]="Beautiful big sky country";
    char s2[]="how now brown cow";
    printf("%d\n",strlen(s1));
    printf("%d\n",strlen(s1+8));
    printf("%d\n",strcmp(s1,s2));
    printf("%s\n",(s1+10));
    strcpy(s1+10,s2+8);
    strcat(s1,"s!");
    printf("%s\n",s1);
    return 0;

}