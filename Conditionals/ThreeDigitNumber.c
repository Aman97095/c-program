#include <stdio.h>
int main() {
    int x;
    printf(" Enter a Number : ");
    scanf("%d", &x);
    // && stands for logical and
    if(x>99 && x<1000)
    printf("Three Digit Number");
    else
    printf("Not a Three digit Number");
    return 0;
}