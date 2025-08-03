#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, c;
    printf("the number of terms: \n");
    scanf("%d", &n);

    if(n >= 1) printf("%lld ", a);
    if(n >= 2) printf("%lld ", b);

    for(i = 3; i <= n; i++) {
        c = a + b;
        printf("%lld ", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
