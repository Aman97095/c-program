#include <stdio.h>
int main() {
    int x;
    printf("Enter X Co-ordinate : ");
    scanf("%d", &x);
    
    int y;
    printf("Enter Y Co-ordinate : ");
    scanf("%d", &y);

        if(x>0 && y>0) printf("1st Quadrant");
        else if(x<0 && y>0) printf("2nd Quadrant");
        else if(x<0 && y<0) printf("3rd Quadrant");
        else if(x>0 && y<0) printf("4th Quadrant");
        else if(x==0 && y==0) printf("Origin");
        else if(y==0 && (x>0 || x<0)) printf("X-axis");
        else if(x==0 && (y>0 || y<0)) printf("Y-axis");
    
    return 0;
}