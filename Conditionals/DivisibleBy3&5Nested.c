#include <stdio.h>
int main () {
    int x;
    printf("Enter a Number : ");
    scanf("%d", &x);
   if(x%5==0){
    if(x%3==0) printf("Divisible By 5 & 3");
    else printf("Not Divisible By 5 & 3");
   }
   else printf("Not Divisible By 5 & 3");
    return 0;
}






//DOUBT