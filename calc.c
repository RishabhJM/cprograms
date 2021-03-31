#include <stdio.h>
int main(){
    int  operation;
    float n1,n2;
    printf("Enter first number: ");
    scanf("%f",&n1);
    printf("Enter second number: ");
    scanf("%f",&n2);
    printf("Enter the operation symbol\n1= add\n2=sub\n3=multiply\n4=divsion\n: ");
    scanf("%d",&operation);

    switch (operation)
    {
    case 1:
        printf("%.2f ",n1+n2);
        break;
    case 2:
        printf("%.2f",n1-n2);
        break;
    case 3:
        printf("%.2f",n1*n2);
        break;
    case 4:
        printf("%.2f",n1/n2);
        break;
    
    }
    return 0;

}
