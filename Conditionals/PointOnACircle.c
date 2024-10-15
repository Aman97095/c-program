#include <stdio.h>
int main() {
    int x;
    printf("Enter X Co-ordinate : ");
    scanf("%d", &x);
    int y;
    printf("Enter Y Co-ordinate : ");
    scanf("%d", &y);

    int r=5;

    //centre of the circle is (0,0)

    if(x*x + y*y == r*r) printf("Point is on the Circle");
    else if(x*x + y*y < r*r) printf("Point is inside the circle");
    else if("x*x + y*y > r*r") printf("Point is outside the circle");

    return 0;

}