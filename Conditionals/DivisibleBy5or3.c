#include <stdio.h>
int main () {
    int x;
    printf("Enter a Number : ");
    scanf("%d", &x);
    // || stands for logical OR
    if(x%3==0 || x%5==0)
    printf("The Number is Divisible by 3 or 5");
    else printf("The Number is Not Divisible by 3 or 5");
    return 0;
}