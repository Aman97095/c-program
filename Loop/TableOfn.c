#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Table of %d is \n", a);

    for(int i=a; i<=10*a; i=i+a) {
        printf("%d\n", i);
    }

} 