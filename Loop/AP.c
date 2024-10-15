#include <stdio.h>
int main() {
    int n;
    printf("Enter the Number Of Terms: ");
    scanf("%d", &n);

// Method 1 (Mathematically)

    // for(int i=1; i<=2*n-1; i=i+2) {
    //     printf("%d ", i);
    // }

// method 2 (Logical)

int a=1;
for(int i=1; i<=n; i++) {
    printf("%d\n ", a);
    a = a + 2;
}
}