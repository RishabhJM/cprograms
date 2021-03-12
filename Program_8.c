#include <stdio.h>
void revstr();
int main(){
    printf("Enter the string: ");
    revstr();
    return 0;
}

void revstr(){
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        revstr();
        printf("%c", c);
    }
}
