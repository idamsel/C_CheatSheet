#include <stdio.h>
#include <string.h>
union employee
{
    int id;
    char name[50];
}e1;
int main()
{
    e1.id = 1001;
    strcpy(e1.name,"Contractor");
    printf("Employee 1 id : %d \n",e1.id);
    printf("Employee 1 name : %d \n",e1.name);
    return 0;
}
