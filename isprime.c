#include <stdio.h>
#include <stdbool.h> 

bool isPrime(int num) {
    if (num <= 1)
        return false; 

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false; 
    }
    return true; 
}
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is Not a Prime Number.\n", n);

    return 0;
}
