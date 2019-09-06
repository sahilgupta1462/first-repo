#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,v;
    printf("enter a no.");
    scanf("%d",&a);
    v=a&1;
    if(v==0)
    {
        printf("the no. is even");}
        else
            printf("the no. is odd");


    return 0;
}
