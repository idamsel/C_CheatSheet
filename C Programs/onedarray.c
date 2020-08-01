#include <stdio.h>
int main()
{
    int i=0;
    int empID[3];
    empID[0] = 1;
    empID[1] = 2;
    empID[2] = 3;
    empID[3] = 4;
    for(i=0;i<4;i++)
    {
        printf("%d\n",empID[i]);
    }
    return 0;
}
