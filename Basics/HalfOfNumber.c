#include <stdio.h>
int main() {
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);
    // typecasting (to make integer input to float)
    float y = (float)x;
    printf("Half of the Number is: %f", y/2);
    return 0;
}