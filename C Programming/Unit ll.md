## 2.1 CHARACTER SET

- Character denotes any alphabet, digit or special symbols used to represent information.
- Valid characters are 
- Alphabate - A,B,C ...... X,Y,Z  / a,b,c.......x,y,z.
- Digits - 1,2,3,4,5,6,7,8,9
- Special symbols - ~!@#$%^&*()_-+=|\{}[];:"'<>,.?/

## 2.2 TOKENS

- A C program consists of various tokens and token consists of keywords, constant, string literal, special symbols. 

## 2.3 IDENTIFIERS 

- Identifiers are user defined words used to name entities like variables, arrays, functions, structure, etc.
- Rules for naming identifiers:-
	1. The name should only consists of alphabet, digit and underscore sign.
	2. The name must not start with digit.
	3. Name should not be a keword.
	4. since C is a case sensitive, the upper case and lower case considered differently.

## 2.3 KEYWORDS

- There are certain words reserved for doing specific task, these words are known as reserved word or keywords.
- These words are predefined and always written in lower case or small letter.
- These keywords can’t be used as a variable name as it assigned with fixed meaning.

## 2.4 VARIABLES

- Variable is a data name which is used to store some data value or symbolic names for storing program computations and results.
- The value of the variable can be change during the execution.
- Before used in the program it must be declared.

Syntax:
`int a; char c; float f;`

**Variable initialization**

- When we assign any initial value to variable during the declaration, is called initialization of variables.
- When variable is declared but contain undefined value then it is called garbage value.

`Data type Variable name = Constant;`

## 2.4 Data Types 

- Data Types or Types are attributes that are predefined or can be created by the user so that the program can easily detect the different types of information.
- It specifies the type of data that the variable can store like integer, character, floating, double, etc
- Data Types tells the Memory Management Unit (MMU) how much memory is required to store the data before the program compiles.

| Data Type | Size   |
| --------- | ------ |
| Boolean   | 1 bit  |
| Char      | 16 bit |
| Int       | 32 bit |
| Float     | 32 bit |
| Double    | 64 bit | 

**Basic Data Types :**

1.  **Int** – includes all whole numbers (Eg. 1, 456, 8643)
2.  **Char** – includes all characters (Eg. Letter, Number, Space, Symbol)
3.  **String** – comprises of a set of characters (Eg. Hello Sumit, How are you)
4.  **Float** – contains decimal point numbers (Eg. 9.1, 2.655463. 3.1428571, 1.0)
5.  **Double** – stores fractional numbers (Eg. 2.34, -1.145)
6.  **Boolean** – contains one of 2 possible values only. (Eg. True or False)

**Built-in Type/Primitive Type**

Data Types that are pre-defined and provided by each Programming Language.

1.  Int
2.  Char
3.  Float
4.  Double
5.  Boolean

**User-Defined Type**

These Data Types are defined by the users in the program as per their needs.

1.  Structure
2.  Array
3.  Class
4.  Enumeration
5.  Union

**Composite/Derived Type**

These data types are formed by using basic data types i.e. using one or more built-in data types.

1.  Array
2.  Function
3.  Pointer
4.  Record
5.  Set

## 2.7 QUALIFIERS

There are two types of type qualifier in c: 
1. **Size qualifier**: short, long
2. **Sign qualifier**: signed, unsigned

1. **Size Qualifier in C**
	- Size Qualifiers are prefixed to the primary data types to increase or decrease the space allocated to the variable.
	- Data type which supports short / long qualifiers.
	- **int** = short / long 
	- double = long
	- float = -
	- char = -

2. **Sign Qualifiers in C**
	- Sign Qualifier is used to specify the signed nature of the integer.
	- Declaring an integer variable means it can store a positive number or a negative number.
	- On the other hand, we can use the unsigned qualifier to allow only positive numbers to be stored.

## 2.8 OPERATORS and EXPRESSIONS

**Expressions**
- Expressions perform specific actions, based on an operator, with one or two operands. 
- An operand can be a constant, a variable or a function result. 
- Operators are arithmetic, logical, and relational.

**Operators**

- An operator is a character that represents a specific mathematical or logical action or process.
- Depending on its type, an operator manipulates an arithmetic or logical value, or operand, in a specific way to generate a specific result.

**Types of operators**

### 2.8.1 Arithmetic operators

- Arithmetic operators are used for mathematical calculations

| **Symbol** | **Operation**         | **Explanation**                                                                                 |   
| ---------- | --------------------- | ----------------------------------------------------------------------------------------------- | 
| +          | Addition (a+b)        | This operation adds both the operands on either side of the + operator.                         |     |
| -          | Subtraction (a-b)     | This operation subtracts the right-hand operand from the left.                                  |     |
| *          | Multiplication (a\*b) | This operation multiplies both the operands.                                                    |     |
| /          | Division (a/b)        | This operation divides the left-hand operand by the operand on the right.                       |     |
| %          | Modulus (a%b)         | This operation returns the remainder after dividing the left-hand operand by the right operand. |     |

### 2.8.2 Relational operators

- Relational operators are widely used for comparison.

| **Symbol** | **Operation**                | **Explanation**                                                                                                                                                         |
| ---------- | ---------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ==         | Equal (a\==b)                | This operator checks if the values of both operands are equal. If yes, the condition becomes TRUE.                                                                      | 
| !=         | Not equal (a!=b)             | This operator checks if the values of both operands are equal. If not, the condition becomes TRUE.                                                                      |
| >          | Greater than (a>b)           | This operator checks if the left operand value is greater than the right. If yes, the condition becomes TRUE.                                                           |
| <          | Less than (a<b)              | This operator checks if the left operand is less than the value of right. If yes, the condition becomes TRUE.                                                           |
| <=         | Less than or equal (a<=b)    | This operator checks if the left operand value is less than or equal to the value of the right. If either condition is satisfied, the operator returns a TRUE value.    |
| >=         | Greater than or equal (a>=b) | This operator checks if the left operand value is greater than or equal to the value of the right. If either condition is satisfied, the operator returns a TRUE value. |

### 2.8.3 Logical operators

- Logical operators play a key role in programming because they enable a system or program to take specific decisions depending on the specific underlying conditions.

| **Symbol** | **Operation**       | **Explanation**                                                                                                                                         |
| ---------- | ------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------- |
| &&         | Logical AND (a&&b)  | This operator returns TRUE only if both the operands are TRUE or if both the conditions are satisfied. It not, it returns FALSE.                        |
| \|\|       | Logical OR (a\|\|b) | This operator returns TRUE if either operand is TRUE. It also returns TRUE if both the operands are TRUE. If neither operand is true, it returns FALSE. | 
| !          | Logical NOT (!a)    | This unary operator returns TRUE if the operand is FALSE and vice versa. It is used to reverse the logical state of its (single) operand.               |

### 2.8.4 Bitwise operators

- Bitwise operators are used to manipulate bits and perform bit-level operations.
- These operators convert integers into binary before performing the required operation and then showing the decimal result.

| **Symbol** | **Operation**                      | **Explanation**                                                                                                                                                                                 |
| ---------- | ---------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| &          | Bitwise AND (a&b)                  | This operator copies a bit to the result if it exists in both operands. So, the result is 1 only if both bits are 1.                                                                            |
| \|         | Bitwise OR (a\|b)                  | This operator copies a bit to the result if it exists in either operand. So, the result is 1 if either bit is 1.                                                                                |
| ^          | Bitwise XOR (a^b)                  | This operator copies a bit to the result if it exists in either operand. So, even if one of the operands is TRUE, the result is TRUE. However, if neither operand is TRUE, the result is FALSE. |
| ~          | Bitwise NOT (~a)                   | This unary operator flips the bits (1 to 0 and 0 to 1).                                                                                                                                         |
| <<         | Binary Left Shift Operator (a<<b)  | The left operands value is moved left by the number of bits specified by the right operand.                                                                                                     |
| >>         | Binary Right Shift Operator (a>>b) | The left operands value is moved right by the number of bits specified by the right operand.                                                                                                    | 

### 2.8.5 Assignment operators

- Assignment operators are used to assign values to variables.

| **Symbol** | **Operation**                       | **Explanation**                                                                                              |
| ---------- | ----------------------------------- | ------------------------------------------------------------------------------------------------------------ |
| =          | Assignment (a=b)                    | This operator assigns the value of the right operand to the left operand (variable).                         |
| +=         | Add and assign (a+=b)               | This operator adds the right operand and the left operand and assigns the result to the left operand.        |
| -=         | Subtract and assign (a-=b)          | This operator subtracts the right operand from the left operand and assigns the result to the left operand.  |
| \*=        | Multiply and assign (a*=b)          | This operator multiplies the right operand and the left operand and assigns the result to the left operand.  |
| /=         | Divide and assign (a/=b)            | This operator divides the left operand and the right operand and assigns the result to the left operand.     |
| %=         | Modulus and assign (a%=b)           | This operator performs the modulus operation on the two operands and assigns the result to the left operand. |
| <<=        | Left shift AND assignment           | C <<= 2 is same as C = C << 2                                                                                |
| >>=        | Right shift AND assignment          | C >>= 2 is same as C = C >> 2                                                                                |
| &=         | Bitwise AND assignment              | C &= 2 is same as C = C & 2                                                                                  |
| ^=         | bitwise exclusive OR and assignment | C ^= 2 is same as C = C ^ 2                                                                                  |
| \|=        | bitwise inclusive OR and assignment | C \|= 2 is same as C = C \| 2                                                                                                             |

### 2.8.6 Increment/decrement operators

- The increment/decrement operators are unary operators, meaning they require only one operand and perform an operation on that operand.

| **Symbol** | **Operation**        | **Explanation**                                                                |
| ---------- | -------------------- | ------------------------------------------------------------------------------ |
| ++         | Post-increment (a++) | This operator increments the value of the operand by 1 after using its value.  |
| --         | Post-decrement (a--) | This operator decrements the value of the operand by 1 after using its value.  |
| ++         | Pre-increment (++a)  | This operator increments the value of the operand by 1 before using its value. |
| --         | Pre-decrement (--a)  | This operator decrements the value of the operand by 1 before using its value. | 

### 2.8.7 CONDITIONAL OPERATORS

- It sometimes called as ternary operator. Since it required three expressions as operand and it is represented as (? , :).
`SYNTAX:    exp1 ? exp2 : exp3`
- Here exp1 is first evaluated. It is true then value return will be exp2 . If false then exp3.

### 2.8.8 SPECIAL OPERATORS

**Comma Operator**

- Comma operator is use to permit different expression to be appear in a situation where only one expression would be used.

**Sizeof Operator**

- Size of operator is a Unary operator, which gives size of operand in terms of byte that occupied in the memory.
- An operand may be variable, constant or data type qualifier.


## 2.9 TYPEDEF

- The C programming language provides a keyword called typedef, which you can use to give a type a new name.
- Example: 
 `typedef unsigned char BYTE;`
 `BYTE b1, b2`

## 2.10 TYPE CONVERSIONS

- A type cast is basically a conversion from one type to another. 
- There are two types of type conversion:
	1. Implicit Type Conversion
		- Also known as ‘automatic type conversion’.
		- Done by the compiler on its own, without any external trigger from the user.
		- Generally takes place when in an expression more than one data type is present. In such condition type conversion (type promotion) takes place to avoid loss of data.All the data types of the variables are upgraded to the data type of the variable with largest data type.
		- bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double
	
	1. Explicit Type Conversion
		- This process is also called type casting and it is user defined.
		- Here the user can type cast the result to make it of a particular data type.
		- Type indicated the data type to which the final result is converted.
		- SYNTAX
		`(type) expression` 
		`double x = 1.2; // Explicit conversion from double to int
		`int sum = (int)x + 1;`
- **Advantages of Type Conversion**
	- This is done to take advantage of certain features of type hierarchies or type representations.
	- It helps us to compute expressions containing variables of different data types.

## 2.11 CONSTANTS

- Constant is any value that cannot be changed during program execution.
- A constant is an entity that doesn’t change whereas a variable is an entity that may change.

**Constants can be divided into two major categories**:
1. Primary Constants
2. Secondary Constants

**These constants are further categorized as**
1. Numeric constant
2. Character constant
3. String constant

1. Numeric constant:
	- Numeric constant consists of digits.
	- It required minimum size of 2 bytes and max 4 bytes.
	- It may be positive or negative but by default sign is always positive.

2. Character constant
	- Character constant represented as a single character enclosed within a single quote.
	- These can be single digit, single special symbol or white spaces such as ‘9’,’c’,’$’, ‘ ’ etc.

3. String constant
	- Set of characters are called string and when sequence of characters are enclosed within a double quote (it may be combination of all kind of symbols) is a string constant.
	- String constant has zero, one or more than one character and at the end of the string null character(\\0) is automatically placed by compiler.

![[1.6_constant.png]]

![1.6 constant](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/C%20Programming/C-Assets/1.6_constant.png?raw=true)

## 2.12 DECLARING SYMBOLIC CONSTANTS

- Symbolic constant is a name that substitute for a sequence of characters and, characters may be numeric, character or string constant.
- These constant are generally defined at the beginning of the program as
- SYNTAX `#define name value` = `#define MAX 10` | `#define CH ‘b’`

## 2.13 CHARACTER STRINGS

- The string in C programming language is actually a one-dimensional array of characters which isterminated by a null character '\0'.
- To holdthe null character at the end of the array, the size of the character array containing the string is one more than the number of characters in the word "Hello."

`char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};`

- If you follow the rule of array initialization then you can write the above statement as
follows:

`char greeting[] = "Hello";`

**Manipulating null-terminated strings:**

1. `strcpy (s1, s2);`
- Copies string s2 into string s1.

2. `strcat (s1, s2);`
- Concatenates string s2 onto the end of string s1.

3. `strlen(s1);`
- Returns the length of string s1.

4. `strcmp(s1, s2);`
- Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.

5. `strchr(s1, ch);`
- Returns a pointer to the first occurrence of character ch in string s1.

6. `strstr(s1, s2);`
- Returns a pointer to the first occurrence of string s2 in string s1.


## 2.14 ENUMERATED DATA TYPES

- Enumeration (or enum) is a user defined data type in C.
- SYNTAX `enum name{constant1, constant2, constant3, ......., constantN };`

**Interesting facts about initialization of enum.**

- Two enum names can have same value.
- If we do not explicitly assign values to enum names, the compiler by default assigns values starting from 0.
- We can assign values to some name in any order. 
- All unassigned names get value as value of previous name plus one.
- The value assigned to enum names must be some integral constant.
- All enum constants must be unique in their scope.

## 2.15 OPERATOR PRECEDENCE and ASSOCIATIVITY

- Operator precedence determines the grouping of terms in an expression. 
- This affects how an expression is evaluated. Certain operators have higher precedence than others.

![[1.7_OPERATOR_PRECEDENCE_and_ASSOCIATIVITY.png]]

![1.7 OPERATOR PRECEDENCE and ASSOCIATIVITY](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/C%20Programming/C-Assets/1.7_OPERATOR_PRECEDENCE_and_ASSOCIATIVITY.png?raw=true)

## 2.16 LIBRARY FUNCTIONS

- All the programming languages contain functions. Library functions in C are also inbuilt functions in C language.
- These inbuilt functions are located in some common location, and it is known as the library.
- All the functions are used to execute a particular operation
- The actions of these functions are present in their header files.

**Advantages of Using C library functions**

1. They work
	- One of the most important reasons you should use library functions is simply because they work. 
	- These functions have gone through multiple rigorous testing and are easy to use.

2. The functions are optimized for performance
	- Since, the functions are "standard library" functions, a dedicated group of developers constantly make them better.
	- In the process, they are able to create the most efficient code optimized for maximum performance.

3. It saves considerable development time
	- Since the general functions like printing to a screen, calculating the square root, and many more are already written. 
	- You shouldn't worry about creating them once again.

4. The functions are portable
	- With ever-changing real-world needs, your application is expected to work every time, everywhere.
	- And, these library functions help you in that they do the same thing on every computer.

| **Header file** | **Description**                                                                        |
| --------------- | -------------------------------------------------------------------------------------- |
| stdio.h         | This is standard input/output header file in which Input/Output functions are declared |
| conio.h         | This is console input/output header file                                               |
| string.h        | All string related functions are defined in this header file                           |
| stdlib.h        | This header file contains general functions used in C programs                         |
| math.h          | All maths related functions are defined in this header file                            |
| time.h          | This header file contains time and clock related functions                             |
| ctype.h         | All character handling functions are defined in this header file                       |
| stdarg.h        | Variable argument functions are declared in this header file                           |
| signal.h        | Signal handling functions are declared in this file                                    |
| setjmp.h        | It includes all jump functions                                                         |
| locale.h        | It includes locale functions                                                           |
| errno.h         | Error handling functions are given in this file                                        |
| assert.h        | It includes diagnostics functions                                                      | 

### 2.16.1 MATHS

- There is also a list of math functions available, that allows you to perform mathematical tasks on numbers.

**Square Root**
- To find the square root of a number, use the sqrt() function:
`printf("%f", sqrt(16));`

**Round a Number**
- The ceil() function rounds a number upwards to its nearest integer, and the floor() method rounds a number downwards to its nearest integer, and returns the result:
`printf("%f", ceil(1.4));`
`printf("%f", floor(1.4));`

**Power**
- The pow() function returns the value of x to the power of y (x,y):
`printf("%f", pow(4, 3));`

**Other Math Functions**

| Function | Discription                             |
| -------- | --------------------------------------- |
| abs(x)   | Returns the absolute value of x         |
| acos(x)  | Returns the arccosine of x              |
| asin(x)  | Returns the arcsine of x                |
| atan(x)  | Returns the arctangent of x             |
| cbrt(x)  | Returns the cube root of x              |
| cos(x)   | Returns the cosine of x                 |
| exp(x)   | Returns the value of Ex                 |
| sin(x)   | Returns the sine of x (x is in radians) |
| tan(x)   | Returns the tangent of an angle         | 

### 2.16.2 STRING HANDLING FUNCTIONS

- These string handling functions are defined in string.h header file.
- All these functions take either character pointer or character arrays as arguments.

**Length**
- strlen() is used to find the length of a string (integer).
`strLength = strlen(str);`

**Copy all**
- strcpy() function is used to copy one string to another.
`strcpy(Destination_String,Source_String);`

**Copy Left most n Characters**
- strncpy() is used to copy only the left-most n characters from source to destination.
`strncpy(Destination_String, Source_String,no_of_characters)`

**Concatenate all**
- strcat() is used to concatenate two strings.
`strcat(Destination_String, Source_String);`

**Concatenate only the leftmost n characters**
- strncat() is used to concatenate only the leftmost n characters from the source with the destination string.
`strncat(Destination_String, Source_String,no_of_characters);`

**Compare**
- strcmp() function is used two compare two strings. strcmp().
`int strcmp(string1, string2);`

**Compare only left most ‘n’ characters**
- strncmp() is used to compare only left most ‘n’ characters from the strings.
`int strncmp(string1, string2,no_of_chars);`

## 2.17 CONTROL STRUCTURE

- Generally C program statement is executed in a order in which they appear in the program.
- But sometimes we use decision making condition for execution only a part of program, that is called control statement.
- Control statement defined how the control is transferred from one part to the other part of the program.
- There are several control statement like if...else, switch, while, do…while, for loop, break, continue, goto etc.

### 2.17.1 COMPOUND STATEMENT

- A compound statement (also called a "block") typically appears as the body of another statement.
- Declarations and Types describes the form and meaning of the declarations that can appear at the head of a compound statement.
- `name{ declaration-listopt statement-listopt }`
- If there are declarations, they must come before any statements.
- The scope of each identifier declared at the beginning of a compound statement extends from its declaration point to the end of the block.
- Variables declared in a block with the auto or register keyword are reallocated and, if necessary, initialized each time the compound statement is entered.

### 2.17.2 SELECTION STATEMENT

- The selection statement means the statements are executed depends upon a condition.
- If a condition is true, a true block (a set of statements) is executed, otherwise a false block is executed.
- This statement is also called decision statement or selection statement because it helps in making decision about which set of statements are to be executed.

#### 2.17.2.1 IF STATEMENT

- Statement execute set of command like when condition is true.
- SYNTAX
	`if (condition) {
		`Statement;`
	`}`

#### 2.17.2.2 IF – ELSE STATEMENT

- It is bidirectional conditional control statement that contains one condition & two possible action.
- If the condition is true inside the IF block then the statements in IF block executes, but if false it drectly exectes the Else block. 
- It means there must be a if statement with in an else statement.
- SYNTAX
	`if (condition) {
		`Statement1;`
	`} else {
		`Statement2;`
	`}`

#### 2.17.2.3 NESTED IF

- When there are another if else statement in if-block or else-block, then it is called nesting of if-else statement.
- Syntax is :-
`if (condition) {
	`if (condition)
		`Statement1;
	`else
		`statement2;
` } else {`
	`Statement3;`
`}`

#### If….else LADDER

- If there is more than one condition to be checked with different block of code for each condition in this situation we use else if with if-else condition.
- SYNTAX
`if (condition) {
	`Statement1;`
`} else if {`
	`statement2`
`} else if {`
	`statement3
`} else if {`
	`statement4``
`} else {
	`Statement5;`
`}`

- This process continue until there is no if statement in the last block.

#### 2.17.2.4 SWITCH

- A switch statement allows a variable to be tested for equality against a list of values.
- Each value is called a case, and the variable being switched on is checked for each switch case.

**The following rules apply to a switch statement:**

- The expression used in a switch statement must have an integral or enumerated type, or be of a class type in which the class has a single conversion function to an integral or enumerated type.
- any number of case statements within a switch.
- constant-expression for a case must be the same data type as the variable in the switch.
- When the variable being switched on is equal to a case, the statements following that case will execute until a break statement is reached.
- When a break statement is reached, the switch terminates.
- Not every case needs to contain a break.
- A switch statement can have an optional default case.
- The default case can be used for performing a task when none of the cases is true.

- SYNTAX
`switch(expression){`
`case constatnt-expression1 :`
	`statement;`
	`break; /* Optional */`
`case constatnt-expression2 :`
	`statement;`
	`break; /* Optional */`	
`default : `
	`statement;`

## 2.18 ITERATION STATEMENT

- Repeating particular portion of the program either a specified number of time or until a particular no of condition is being satisfied is called Iteration / Iteration Statement.

### 2.18.1 FOR LOOP

- for loop is generally used when number of iteration are known in advance.
- SYNTAX
`for(Initialiaztion ; Conditon; Increment/decrement) {`
	`Statement;
`}`

### 2.18.2 WHILE LOOP

- .when we want to do something a fixed no of times but not known about the number of iteration, in a program then while loop is used.
- Here first condition is checked if, it is true body of the loop is executed else, If condition is false control will be come out of loop.
- SYNTAX
`while(condition) {
	`Statement 1;
	`increment/decrement;`
`}

### 2.18.3 DO WHILE LOOP

- SYNTX
`do {
	`Statement`
	`Increment/Decrement`
``}
`while(Condition);

- Here firstly statement inside body is executed then condition is checked.
- If the condition is true again body of loop is executed and this process continue until the condition becomes false.
- do while loop test condition after having executed the statement at least one within the loop.
- If initial condition is false while loop would not executed it’s statement on other hand do while loop executed it’s statement at least once even If condition fails for first time.

### 2.18.4 NESTED LOOPS

- When a loop is written inside the body of another loop then, it is known as nesting of loop.
- Any type of loop can be nested in any type such as while, do while.
- Example
`while(condition) {
	`do {
		`Statement`
		`Increment/Decrement`
	``}
	`while(Condition);
`}

### 2.18.5 JUMP STATEMENTS

- Jump Statements interrupt the normal flow of the program while execution and jump when it gets satisfied given specific conditions.
- The main uses of jump statements are to exit the loops like for, while, do-while also switch case and executes the given or next block of the code, skip the iterations of the loop, change the control flow to specific location, etc.

#### 2.18.5.1 BREAK

- Sometimes it becomes necessary to come out of the loop even before loop condition becomes false then break statement is used.
- Break statement is used inside loop and switch statements.
- It cause immediate exit from that loop in which it appears and it is generally written with condition.
- It is written with the keyword as break.
- When break statement is encountered loop is terminated and control is transferred to the statement, immediately after loop or situation where we want to jump out of the loop instantly without waiting to get back to conditional state.

#### 2.18.5.2 CONTINUE

- Continue statement is used for continuing next iteration of loop after skipping statement of loop after the continue statement.
- When it encountered control automatically passes through the beginning of the loop.
- It is useful when we want to continue the program without executing any part of the program.

#### 2.18.5.3 GOTO

- The goto statement allows us to transfer control of the program to the specified label.
- SYNTAX

`goto label;
`label:`
	`statement;`

- The label is an identifier.
- When the goto statement is encountered, the control of the program jumps to label: and starts executing the code.
