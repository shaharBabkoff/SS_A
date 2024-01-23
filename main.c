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

        printf("\nthe Armstrong numbers are:");
    for (int i = first; i <= second; i++) {
        if (isArmstrong(i) == 1) {
            printf("%d ", i);
        }
    }

    printf("\nthe Prime numbers are:");
    for (int i = first; i <= second; i++) {
        if (isPrime(i) == 1) {
            printf("%d ", i);
        }
    }

    printf("\nthe Palindrome numbers are:");
    for (int i = first; i <= second; i++) {
        if (isPalindrome(i) == 1) {
            printf("%d ", i);
        }
    }



    printf("\nthe Strong numbers are:");
    for (int i = first; i <= second; i++) {
        if (isStrong(i) == 1) {
            printf("%d ", i);
        }
    }


    return 0;
}
