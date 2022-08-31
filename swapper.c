#include <stdio.h>

void swap(int *pa, int *pb){
    int t = *pa;
    *pa = *pb;
    *pb = t;
    return;
}

int main(void){
    int a, b;
    printf("Enter number A: ");
    scanf("%d", &a);
    printf("Enter number B: ");
    scanf("%d", &b);
    printf("The values before scanning are: %d %d\n", a, b);
    swap(&a, &b);
    printf("The values after scanning are: %d %d\n", a, b);
    return 0;
}