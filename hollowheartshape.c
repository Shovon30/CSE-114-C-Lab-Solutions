#include <stdio.h>

int main() {
    int i, j, n=5;
    
    for (i = n/2; i <= n; i += 2) {
        for (j = 1; j < n-i; j += 2) printf(" ");
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i) printf("*");
            else printf(" ");
        }
        for (j = 1; j <= n-i; j++) printf(" ");
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
  
    for (i = n; i >= 1; i--) {
        for (j = i; j < n; j++) printf(" ");
        for (j = 1; j <= (i*2)-1; j++) {
            if (j == 1 || j == (i*2)-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
