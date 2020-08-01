#include <stdio.h>
void main()
{
    char name[2][10],dummy;
    int roll_numbers[2],i;
    for(i=0;i<3;i++)
    {
       printf("Enter the name and roll number %d",i+1);
       scanf("%s,%d",&name[i],&roll_numbers[i]);
       scanf("%c",&dummy);
    }
    printf("Printing the Student details \n");
    for(i=0;i<3;i++)
    {
         printf("%s,%d",&name[i],&roll_numbers[i]);
    }
}
