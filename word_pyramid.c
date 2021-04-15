#include<stdio.h>
#include<string.h>
void main()
{
    char n[100],x[100];
    int i=0,j=0;
    printf("Enter string:");
    scanf("%s",n);
    for(i=strlen(n)/2,j=0;i<strlen(n);i++,j++)
    {
        x[j]=n[i];
    }
    for(i=0;i<strlen(n)/2;i++,j++)
    {
        x[j]=n[i];
    }
    for(i=0;i<strlen(n);i++)
    {
        for(j=0;j<strlen(n);j++)
        {

        if(i+j<strlen(n)-1)
        {
             printf(" ");
        }
        else
        {
                printf("%c",x[j]);
        }
        }
        printf("\n");
}
}
