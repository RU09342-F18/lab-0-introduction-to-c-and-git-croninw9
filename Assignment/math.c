/*
    Name: math.c
    Author: William Cronin
    Date created: 09/09/2018
    Date of last revision: 09/10/2018
    Description: Apply a math operation to num1 and num2

    List of Operations:
    + Add (num1 + num2)
    - Subtract (num1 - num2)
    * Multiply (num1 * num2)
    / Divide (num1 / num2) if num2 is equal to zero, the operation returns a zero
    % Modulus (num1 % num2) if num2 is equal to zero, the operation returns a zero
    < Left Shift (num1 << num2)
    > Right Shift (num1 >> num2)
    & Bitwise AND (num1 & num2)
    | Bitwise OR (num1 | num2)
    ^ Bitwise XOR (num1 ^ num2)
    ~ Bitwise Inverse (~num1)


*/
#include <stdio>
#include "math.h"

int math(int num1, int num2, char Operator)
{
    switch(Operator)
    // Addition
    case'+':
        return num1 + num2;
    //Subtraction
    case'-':
        return num1 - num2;
    //Multplication
    case'*':
        return num1 * num2;
    //Division (if num2 is equal to zero, the operation returns a zero)
    case'/':
    if(num2 != 0)
    {
        return num1 / num2;
    }
    else 
    {
        return 0;
    }
    //Modulus (if num2 is equal to zero, the operation returns a zero)
    case'%':
    if(num2 != 0)
    {
        return num1 % num2;
    }
    else 
    {
        return 0;
    }
    //Left Shift
    case'<':
        return num1 << num2;
    //Right Shift
    case'>':
        return num1 >> num2;
    //Bitwise And
    case'&':
        return num1 & num2;
    //Bitwise Or
    case'|':
        return num1 | num2;
    //Bitwise Xor
    case'^':
        return num1 ^ num2;
    //Bitwise Inverse
    case'~':
        return ~num1;
    default:
        printf("Please enter a valid operation");
        return 0;

}
