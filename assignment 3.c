#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int magic;
    int guess;

    magic = rand();

    printf("Guess the number: ");
    scanf("%d", &guess);

    if(guess == magic)
    {
        printf("correct");
        printf("%d is the magic number", magic);
    }
    else
        guess > magic ? printf("High") : printf("Low");
    
    return 0; 
}

