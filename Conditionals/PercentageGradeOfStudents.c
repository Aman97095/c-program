#include <stdio.h>
int main() {
    int x;
    printf("Enter Percentage : ");
    scanf("%d", &x);

    if(x>=81) printf("Very Good");
    else if(x>=61) printf("Good");
    else if(x>=41) printf("Average");
    else printf("fail");
    return 0;

}