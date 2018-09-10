/*
 * math.h
 *
 *  Created on: Aug 22, 2017
 * 	Last Edited: Sept 10, 2018
 *      Author: Will Cronin
 */

/* Your assignment is to take the math function and implement at least the following functions:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2) (if num2 is equal to zero, the operation returns a zero)
 * % Modulus (num1 % num2) (if num2 is equal to zero, the operation returns a zero)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/

#ifndef MATH_H_
#define MATH_H_

//Part of your documentation should be listing the valid inputs and outputs for the functions you create.
int math(int num1, int num2, char Operator);

#endif /* MATH_H_ */
0
