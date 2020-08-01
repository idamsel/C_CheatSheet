#include <stdio.h>
int main()
{
    int v1,v2;
    printf("\n First variable is entered\n");
    scanf("%d",&v1);
    printf("\n Second variable is entered\n");
    scanf("%d",&v2);
    if(v1 != v2)
    {
        printf("\n First variable is not equal to Second variable\n");
        if(v1 < v2)
        {
            printf("First variable is less than to Second variable\n");
        }
        else
        {
             printf("First variable is greater than to Second variable\n");
        }
    }
    else
    {
         printf("First variable is equal to Second variable\n");
    }
}
