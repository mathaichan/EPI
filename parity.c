#include <stdio.h>

void main(){
    int x;
    unsigned char res=0,count=0;
    scanf("%d",&x);
        
    while (x)
    {
        res^=1;
        ++count;
        x&=x-1;
    }
    printf("parity %d count %d",res,count);

}