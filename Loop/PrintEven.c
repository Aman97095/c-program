// #include <stdio.h>
// int main() {
//    int n;
//    printf("Enter a Number: ");
//    scanf("%d", &n);

//    for(int i=1;i<=n;i++){
//     if(i%2==0) 
//     printf("%d ", i);
//    }

//     return 0;
// }




// Method 2
// 2nd Method is Best


#include <stdio.h>
int main() {
   int n;
   printf("Enter a Number: ");
   scanf("%d", &n);

   for(int i=2;i<=n;i=i+2){
    printf("%d\n", i);
   }

    return 0;
}