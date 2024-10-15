// #include <stdio.h>
// int main() {
//     for(int i=1; i<=190; i++) {
//         if(i%19==0) printf("%d\n", i);
//     }
// }



// 2nd Method
// 2nd Method is Best



#include <stdio.h>
int main() {
    for(int i=19; i<=190; i=i+19) {
        printf("%d\n", i);
    }
}