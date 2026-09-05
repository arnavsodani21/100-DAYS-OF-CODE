// Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include <stdio.h>
int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Swapping without using a third variable
    num1 = num1 + num2; // Step 1: Add both numbers and store in num1
    num2 = num1 - num2; // Step 2: Subtract new num1 with num2 to get original num1
    num1 = num1 - num2; // Step 3: Subtract new num2 from new num1 to get original num2
    
    printf("After swap: %d %d\n", num1, num2);
    
    return 0;
}   