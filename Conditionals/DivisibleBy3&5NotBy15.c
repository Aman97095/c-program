#include <stdio.h>
int main () {
    int x;
    printf("Enter a Number : ");
    scanf("%d", &x);
    if(x%15!=0 && (x%3==0 || x%5==0)){

    
   printf("Yes, It is Divisible By 3 OR 5 But Not By 15");
     } else{
   printf("NO");
    return 0;
}
}






//DOUBT