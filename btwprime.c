#include <stdio.h>



// user-defined function to check prime number
int checkPrimeNumber(int n) {
    int j, f = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            f = 0;
            break;
        }
    }
    return f;
}
int main() {
    int n1, n2, i, f;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1 + 1; i < n2; ++i) {

        
        f = checkPrimeNumber(i);

        if (f == 1)
            printf("%d ", i);
    }
    return 0;
}
