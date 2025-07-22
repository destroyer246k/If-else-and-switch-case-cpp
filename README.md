# If-else-and-switch-case-cpp
Aim: To Study and Implement Decision Making statements in C++.                  
Tools: GNU g++ compiler (for local execution)Any code editor or an Online C++ Compiler          
# Program 1: Check Even or Odd
This program checks to see if the user-entered number is even or odd. 
The user is asked to enter an integer, the program takes the modulus of that number by 2 using the modulus operator %.  This means if there is no remainder (0), the number is considered to be even. This is done by using if else statements.  

If there is a remainder (1), the number is odd.
This is based upon the idea that even numbers can be evenly divided by 2 while odd will have a "left over" of one that cannot be divided by 2.     
This is commonly done with programming problems that have logic based on even or odd distinguishing a parity, such as alternating turns in some games or partitioning data.

Algorithm:
1. Start
2. Input an integer num
3. If num % 2 == 0, print "Even"
4. Else, print "Odd"
5. End

# Program 2: Check Vowel or Consonant
The user is prompted to enter a single character and the program checks, by matching against the character, for whether it is a vowel or not. It compares both uppercase and lowercase vowels ('A','E','I','O','U','a','e','i','o','u') using if and else statement as specified through the character input.

If the input value corresponds to a vowel, then it acknowledged as such, otherwise as a consonant.The check of vowels is performed in a fashion that does not discriminate the user's input character case, improving the usability of the program.     
It is a basic exercise in character checking, applicable in text processing and validation.

Algorithm:
1. Start
2. Input a character ch
3. If ch is a vowel (a, e, i, o, u or A, E, I, O, U), print "Vowel"
4. Else, print "Consonant"
5. End

# Program 3: Identify the Largest Number Among Three (Nested if)
This program will allow us to examine how to get the largest of three numbers provided by the user. It accepts the three numbers, then controls their evaluation using nested if conditions.            
The evaluation first determines if the first number is greater than the second and third, if the first number is not larger than the second and third, it next examines whether the second number is greater than the first and third. If this number is not larger than the first and third, it then checks whether the third number is larger than these two or not.

This process will provide the largest of the three variables evaluated.
The logical processes used are common and part of maximum value detection many address when sorting or operating under conditions in decision situations.

Algorithm:
1. Start
2. Input three numbers a, b, c
3. If a > b and a > c, print "a is largest"
4. Else if b > c, print "b is largest"
5. Else, print "c is largest"
6. End

# Program 4: Subject Selector using Switch Case
This program provides the user with a numbered menu of five options implying a subject name. The user is prompted to enter an option from 1 to 5, following these options:

- Mathematical Transformation Techniques
- Digital Circuit and Logic Design
- Electronic Devices and Circuits 
- Network Theory
- Signals and Systems
 
If the user inputs a number that is not in this range, the program produces "Invalid choice." This method allows users to be clearly directed to pre-defined options that they may select from. 
Menu-driven programs are great for designing interfaces for end users when options are given to users where each has diffrent logic behind each casee.

Algorithm:
1. Start
2. Display subject menu (1–5)
3. Input user choice
4. Use switch to print subject name based on choice
5. If choice not in 1–5, print "Invalid choice"
6. End


# Program 5: Basic Arithmetic Calculator using Switch case
This is a simple calculator program. It asks the user to enter two numbers, and provides a menu of arithmetic operations to choose from (addition, subtraction, multiplication, or division).       
Then it performs the arithmetic process based on the choice of the user. In the case of division, it checks to see if the second number is zero to avoid a division by zero error and ensure the program runs correctly.If the user picks an invalid choice, the program prompts the user to enter choice from given range.

This type of program demonstrates the behavior of a real-world calculator, and provides focus on program flow.

Algorithm:
1. Start
2. Input two numbers a, b
3. Display operation menu (+, -, *, /)
4. Input user choice
5. Use switch to perform selected operation
6. If division and b == 0, print "Cannot divide by zero"
7. If invalid choice, print "Invalid operation"
8. Print result
9. End

Conclusion:         
We learned that if-else is used to check complex conditions, ranges and multiple logical comparisons, thus making it useful in a variety of situations. On the other hand, switch-case is suitable for fixed or pre-defined options, thus providing a more pleasing structure in the case of menu-driven programs.          

Both control structures are important to decision making code, allowing us to create interactive and user-friendly programs that run effectively based on input and conditions.
