#include <stdio.h>
#include <math.h>
int main() {
    int number, originalNum, temp, digit;
    int count = 0, result = 0;
    scanf("%d", &number);
    originalNum = number;

    for (temp = number; temp != 0; temp /= 10) {
        count++;
    }

    for (temp = number; temp != 0; temp /= 10) {
        digit = temp % 10;
        result += pow(digit, count);
    }

    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }
    return 0;
}
