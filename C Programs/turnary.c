#include <stdio.h>
int main()
{
    int a,b,max;
    printf("Enter any two numbers \n");
    scanf("%d%d",&a,&b);
    max = (a>b)?a:b;
    printf("%d\n",max);
    printf("is the largest number of given numbers");
    return 0;
}
