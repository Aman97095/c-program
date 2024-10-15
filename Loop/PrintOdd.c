// #include <stdio.h>
// int main() {
// int a;
// printf("Enter a Number: ");
// scanf("%d", &a);

// for(int i=1; i<=a; i++) {
//     if(i%2!=0) printf("%d\n", i);
// }
// }



// Method 2
// 2nd Method is Best


#include <stdio.h>
int main() {
int a;
printf("Enter a Number: ");
scanf("%d", &a);

for(int i=1; i<=a; i=i+2) {
     printf("%d\n", i);
}
}