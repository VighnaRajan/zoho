#include<stdio.h>
#include<string.h>
void main()
{
    char n[100];
    int i,j,t,flag;
    printf("Enter string:");
    scanf("%s",&n);
    flag=strlen(n)/2;
    for(i=strlen(n)/2,j=1;i<strlen(n),j<=strlen(n)/2+1;i++,j++)
    {
        if(flag>=strlen(n)/2)
        {
            for(t=strlen(n);t>=flag;t--)
                {
                    printf(" ");
                }
            for(t=i;t<strlen(n);t++)
            {

                printf("%c",n[t]);
                ++flag;
            }
        }
        printf("\n");
    }
}
