#include <stdio.h>
int main() {
    int x = 5;
    //post increament (first print then increament)
    printf("%d\n", x++);
    printf("%d\n", x);
    //pre increament (first increament then print)
    printf("%d\n", ++x);
    printf("%d\n", x);
    // pre decrament (first decreament then print)
    printf("%d\n", --x);
    printf("%d\n", x);
    //post decreament (first print then decreament)
    printf("%d\n", x--);
    printf("%d\n", x);

    return 0;
}