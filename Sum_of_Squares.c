#include <stdio.h>
int main() {
    int n, i;
    long sum = 0;
    printf("Enter value of n: \n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i * i;
    }
    printf("Sum of squares from 1 to %d is: %ld\n", n, sum); 
    return 0;
}
/*#include <stdio.h>
int main() {
    int n;
    long sum;
    printf("Enter value of n: ");
    scanf("%d", &n);
    sum = (n * (n + 1) * (2 * n + 1)) / 6;
    printf("Sum of squares from 1 to %d is: %ld\n", n, sum);
    return 0;
}*/ 