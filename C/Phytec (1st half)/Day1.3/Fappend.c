#include<stdio.h>
#include<stdlib.h>

int main()

{
    char name[20],ch;
    FILE *fp;
    printf("Enter the file name you want to append");
    scanf("%[^\n]",name);
    fp=fopen(name,"a");
    if(fp==NULL)
    {
        printf("Fail to locate file");
        exit(1);
    }
    printf("Ready to append\n");
    printf("Enter data into the file $ press \"ctrl+d\" to end\n");
    while((ch= getchar())!=EOF)
    fputc(ch,fp);

    fclose(fp);

}
