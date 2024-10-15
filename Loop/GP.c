// Given GP:- 3, 12, 48, .....

#include <stdio.h>
int main() {
    int n ;
    printf("Enter the Number of Terms: ");
    scanf("%d", &n);

    int a=3;
    for(int i=1; i<=n; i++) {
        printf("%d ", a);
        a = a * 4;
    }
}