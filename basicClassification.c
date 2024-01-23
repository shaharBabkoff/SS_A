#include "NumClass.h"


int factorial (int x){
    int ans =1;
    for(int i=2;i<=x;i++){
        ans=ans*i;
    }
    return ans;
}


int isStrong(int number){
    int temp =number;
    int sum = 0;
    while (temp>0){
        int digit = temp%10;
        sum = sum +factorial(digit);
        temp=temp/10;
    }
    if(sum==number){
        return 1;
    }
    return 0;
} 

int isPrime(int number){
    for(int i =2; i<number;i++){
        if(number%i==0){
            return 0;
        }
    
    }
    return 1;
}