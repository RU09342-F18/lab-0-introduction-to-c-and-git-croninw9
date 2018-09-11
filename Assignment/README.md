# Math Library - William Cronin
Performs a desired math operation using two integers (num1 and num2) and a character to represent the operation and returns an integer value. The libraries used were stdio and math.h. The code works by calling the math function with the three inputs and it returns a integer. For example, if in your main.c code entered in math(2,3,'+'), the math function would perform the addition operation between the integers 2 and 3 and return a 5. 

# Variables Used
* Integer - Num1 and Num2 represent the integers the user wishes to perform an operation on
* Character - Operator represents the desired operation to be performed on the inputted integers
 
# Operations available:
* '+' - Add (num1 + num2) 
* '-' - Subtract (num1 - num2) 
* '*' - Multiply (num1 * num2)
* '/' - Divide (num1 / num2) also returns a zero if num2 = 0
* '%' - Modulus (num1 % num2) also returns a zero if num2 = 0
* '<' - Leftshift (num1 << num2)
* '>' - Rightshift (num1 >> num2)
* '&' - And (num1 & num2)
* '|' - Or (num1 | num2)
* '^' - Xor (num1 ^ num2)
* '~' - Inverse (~num1)
