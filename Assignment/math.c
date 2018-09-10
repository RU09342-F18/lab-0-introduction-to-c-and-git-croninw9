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
    / Divide (num1 / num2)
    % Modulus (num1 % num2)
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
    case'+':
        return num1 + num2;
    case'-':
        return num1 - num2;
    case'*':
        return num1 * num2;
    case'/':
        return num1 / num2;
    case'%':
        return num1 % num2;
    case'<':
        return num1 << num2;
    case'>':
        return num1 >> num2;
    case'&':
        return num1 & num2;
    case'|':
        return num1 | num2;
    case'^':
        return num1 ^ num2;
    case'~':
        return ~num1;
    default:
        printf("Please enter a valid operation");
        return 0;

}
