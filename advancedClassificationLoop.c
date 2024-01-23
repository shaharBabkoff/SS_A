#include "NumClass.h"


int power( int number,int power){
int ans=1;
if (power < 0) {
       ans = 1 / number;
        power = -power;
    }
    for (int i = 0; i <power; i++)
    {
    ans*=number;
    }
    return ans;
 }

int isPalindrome(int number){
    int originalNumber = number;
    int reversedNumber = 0;

    // Reverse the number
    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNumber == reversedNumber) {
        return 1;  // Palindrome
    } else {
        return 0;  // Not a palindrome
    }
}

 int isArmstrong(int number){
    int sum=0;
    int counter =0;
    int temp=number;
    while (temp>0)
    {
        counter++;
        temp/=10;
    }
    while (temp>0)
    {
        int digit=temp%10;
        sum+=power(digit,counter);
        temp/=10;
    }
    if ( number==sum){
        return 1;
    }
    return 0;
 }
 