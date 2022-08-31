#include <stdio.h>

int main(){
    int a, b;
    printf("Enter a number: ");
    scanf("%i", &a);
    printf("Enter another number: ");
    scanf("%i", &b);

    int answer = a + b;
    printf("The sum of %i and %i is equal to %i.\n", a, b, answer);
    return 0;
}