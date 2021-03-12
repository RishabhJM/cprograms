#include <stdio.h>

int main(void)
{
    int a,b;

    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);
    if(b==0) {
        printf("Cannot divide by zero");
    }
    else{
        printf("Quotient is %d", a/b);
    }

    return 0;
}