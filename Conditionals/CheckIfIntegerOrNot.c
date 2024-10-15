#include <stdio.h>
int main() {
    float x;   //3.14
    printf("Enter a Real Number : ");
    scanf("%f", &x);
    int y = (int)x;    //3
    float a = (float)y;   //3.00S
    if(x - a == 0)
    printf("The Number is Integer");
    if(x - a > 0) 
    printf("The Number is Not Integer");
    return 0;

}