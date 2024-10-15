#include <stdio.h>
int main() {
    int l;
    printf("Length of Rectangle : ");
    scanf("%d", &l);
    int b;
    printf("Breadth of Reactangle : ");
    scanf("%d", &b);
    int a;
    a = l*b;
    int p;
    p = 2*(l+b);
    if(a>p) {
        printf("The Area is : %d\n", a);
        printf("The Perimeter is : %d\n", p);
        printf(" Area > Perimeter ");
         }
        else {
            printf("The Area is : %d\n", a);
        printf("The Perimeter is : %d\n", p);
        printf(" Area < Perimeter ");
        }
    return 0;
}