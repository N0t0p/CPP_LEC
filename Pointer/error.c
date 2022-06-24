#include <stdio.h>
int main()
{   
    int *p ,a;
    a = 5;
    p = a;
    *p = &a;
     printf(" %d\n",p);
    printf("%d",*p);
    return 0;

}