#include <stdio.h>
int main () {
    int a;
    printf("Enter First Number : ");
    scanf("%d",&a);
    int b;
    printf("Enter Second Number : ");
    scanf("%d",&b);
    int c;
    printf("Enter Third Number : ");
    scanf("%d",&c);

    if(a>b && a>c)
    printf("%d is greatest", a);

    if(b>c && b>a)
    printf("%d is greatest", b);

    if(c>b && c>a)
    printf("%d is greatest", c);

    return 0;
}