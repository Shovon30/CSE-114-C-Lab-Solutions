#include <stdio.h>
int main() {
    int nums[100];
    int size, index, isNotPalindrome = 0;
    scanf("%d", &size);
    printf("Enter %d values:\n", size);
    for (index = 0; index < size; index++) {
        scanf("%d", &nums[index]);
    }

    for (index = 0; index < size / 2; index++) {
        if (nums[index] != nums[size - index - 1]) {
            isNotPalindrome = 1;
            break;
        }
    }

    if (isNotPalindrome == 0) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}
