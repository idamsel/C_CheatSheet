#include <stdio.h>
int main()
{
    int number = 0;
    printf("Enter a number");
    scanf("%d",&number);
    if(number == 10)
    {
        printf("Your inputted number is equal to 10");
    }
    else if(number == 50)
    {
        printf("Your inputted number is equal to 50");
    }
    else
    {
        printf("Your inputted number is not equal to 10 or 50");
    }
    return 0;
}
