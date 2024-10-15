// #include <stdio.h>
// int main() {
//     int x;
//     printf("Enter a Number: ");
//     scanf("%d", &x);
//     if(x>=0) printf("The Absolute Value is %d", x);
//     if(x<0) printf("The Absolute Value is %d", x*(-1));
//     return 0;
// }





#include <stdio.h>
int main() {
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);
    if(x<0) x=x*(-1);
    printf("The Absolute Value is: %d", x);
    return 0;
}