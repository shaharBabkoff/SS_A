#include "NumClass.h"

int power1(int base, int exponent) {
    // Base case: Any number to the power of 0 is 1
    if (exponent == 0) {
        return 1;
    }

    // Recursive case: base^exponent = base * base^(exponent-1)
    return base * power1(base, exponent - 1);
}
int rev(int n, int temp){
    // base case
    if (n == 0)
        return temp;
 
    // stores the reverse of a number
    temp = (temp * 10) + (n % 10);
 
    return rev(n / 10, temp);
}

    // Function to calculate the number of digits in a given number
int countDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return 1 + countDigits(num / 10);
}


// Recursive function to check if a number is an Armstrong number
int calculateArmstrong(int num, int power) {
    if (num == 0) {
        return 0;
    }
    
    int digit = num % 10;
    int powerResult = power1(digit,power);
    
    return powerResult + calculateArmstrong(num / 10, power);
}

// Function to check if a number is an Armstrong number
int isArmstrong(int number) {
    int numDigits = countDigits(number);
    int result = calculateArmstrong(number, numDigits);
    
    if(result==number){
        return 1;
    }
    return 0;
}

// Recursive function to check if a number is a palindrome
int isPalindrome(int num) {
int temp = rev(num,0);
if(num==temp){
    return 1;
}
return 0;
}

