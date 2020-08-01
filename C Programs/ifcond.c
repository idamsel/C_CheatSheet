#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    if(number%2==0){
        printf("Your number is %d and it is even number",number);
    }
    return 0;
}
