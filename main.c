#include <stdio.h>
#include "NumClass.h"
//#include "basicClassification.c"
//#include "advancedClassificationLoop.c"
//#include "advancedClassificationRecursion.c"

int main() {
    int first;
    int second;

    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);

    printf("the prime numbers are:");
    for (int i = first; i <= second; i++) {
        if (isPrime(i) == 1) {
            printf("%d ", i);
        }
    }

    printf("\nthe armstrong numbers are:");
    for (int i = first; i <= second; i++) {
        if (isArmstrong(i) == 1) {
            printf("%d ", i);
        }
    }

    printf("\nthe strong numbers are:");
    for (int i = first; i <= second; i++) {
        if (isStrong(i) == 1) {
            printf("%d ", i);
        }
    }

    printf("\nthe palindrome numbers are:");
    for (int i = first; i <= second; i++) {
        if (isPalindrome(i) == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
