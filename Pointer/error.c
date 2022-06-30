#include <stdio.h>
int main()
{   
    int *p ,a;
    p = a;
    *p = &a;
    p = &a;
    *p = a;
     printf(" %d\n",p);
    printf("%d",*p);
    return 0;

}