#include <stdio.h>
int main()
{
    int a;
    printf("Enter integer a=");
    scanf("%d",&a);
    if(a<<1==2*a)
        printf("\nLeft shift effectively multiplied a with 2 and a<<1 = a*2 = %d",a<<1);
    else
    {
        printf("\nLeft shift does not multiply with 2");
    }
    if(a>>1==a/2)
        printf("\nRight shift effectively divided a with 2 and a>>1 = a/2 = %d",a>>1);
    else
    {
        printf("\nLeft shift does not divide by 2");
    }
    return 0;
       
}