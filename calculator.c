// program to make a normal calculator

#include <stdio.h>
#include <stdlib.h>

int main()

{

     int a,b,c;
     int d;

    printf("enter any  no. u want\n");
    scanf("%d",&a);
    printf("enter the other no.\n");
    scanf("%d",&b);
    printf(" What u want to do ");
    scanf("%d",&d);


   if (d='+')
    {//to add two no....

    c=a+b;
    printf("the sum of given no. are %d",c);
    }

    //to subtract two no.
     else if (d='-')


        {

         c=a-b;
         printf("the answer is= %d",c);

        }

        // to multiply

    else if (d='*')


{            c=a*b;
            printf("the answer is= %d",c);
}
        //to divide

    else if (d='/')

         {

            c=a/b;
            printf("the answer is= %d",c);
         }
         else
            printf("the entered operation is wrong");
    return 0;
}
