#include <stdio.h>

void main()
{
    int x,y=0,count=0;
    printf("enter integer\n");
    scanf("%d",&x);
    printf("x= %d\n",x);
    /*
    while(x)
    {
        if(x&1)
            ++count;
        x>>=1;
    } */

    /*
    while(x)
    {
        count+=x&1;
        x>>=1;
    } */

    /*
    while(x)
    {
        y=x & ~(x-1);
        if(y)
           ++count;
        x=x^y;

    } */

    while(x)
    {
        ++count;
        x&=x-1;
    }
   printf("count=%d",count); 
}