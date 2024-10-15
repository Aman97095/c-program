#include <stdio.h>
int main () {
    int cp;
    printf("Enter the Cost Price : ");
    scanf("%d", &cp);
    int sp;
    printf("Enter the Selling Price : ");
    scanf("%d", &sp);
    if(sp>cp) 
    printf("The Profit is : %d", sp-cp);
    if(cp>sp)
    printf("The Loss is : %d", cp-sp);
    if(cp==sp)
    printf("No Profit, No Loss");
    return 0;
}