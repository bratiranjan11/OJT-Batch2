#include<stdio.h>
#include<stdlib.h>

int main()

{
    char name[20],ch;
    FILE *fp;
    printf("Enter the file name");

    scanf("%[^\n]",name);
    fp=fopen(name,"r");
    if(fp==NULL)
    {
        printf("Fail to create file");
        exit(1);
    }
 
    fseek(fp,0,SEEK_SET);
  
    while((ch= getc(fp))!=EOF)
    	putchar(ch);

    fclose(fp);

}
