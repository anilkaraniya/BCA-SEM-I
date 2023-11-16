// What is C Programming ?
## Introduction To C

- The C Language is developed by Dennis Ritchie for creating system applications that directly interact with the hardware devices such as drivers, kernels, etc.
- Developed at AT & T’s Bell Laboratories of USA in 1972.
- Is considered as the base for other programming languages, that is why it is known as mother language.
- C is considered as a middle-level language because it supports the feature of both low-level and high-level languages

### Program

- computer program is just a collection of the instructions necessary to solve a specific problem. 
- The basic operations of a computer system form what is known as the computer’s instruction set. 
- And the approach or method that is used to solve the problem is known as an algorithm.

### Features of C Language

1. Simple
	- C is a simple language in the sense that it provides a **structured approach** (to break the problem into parts), **the rich set of library functions**, **data types**, etc.

2. Machine Independent or Portable
	- Unlike assembly language, c programs **can be executed on different machines** with some machine specific changes. 
	- Therefore, C is a machine independent language.

3. Mid-level programming language
	- It is used to develop system applications such as kernel, driver, etc. 
	- It **also supports the features of a high-level language**. 
	- That is why it is known as mid-level language.

4. Structured programming language
	- C is a structured programming language in the sense that **we can break the program into parts using functions**. 
	- So, it is easy to understand and modify. 
	- Functions also provide code reusability.

5. Rich Library
	- C **provides a lot of inbuilt functions** that make the development fast.

6. Memory Management
	- It supports the feature of **dynamic memory allocation**. 
	- In C language, we can free the allocated memory at any time by calling the **free()** function.

7. Speed
	- The compilation and execution time of C language is fast since there are lesser inbuilt functions and hence the lesser overhead.

8. Pointer
	- C provides the feature of pointers. 
	- We can directly interact with the memory by using the pointers.

9. Recursion
	- In C, we **can call the function within the function**. It provides code reusability for every function. Recursion enables us to use the approach of backtracking.

10. Extensible
	- C language is extensible because it **can easily adopt new features**.

### Integrated Development Environments (IDE)
- The process of editing, compiling, running, and debugging programs is often managed by a single integrated application known as an Integrated Development Environment, or IDE for short.
- On Mac OS X, CodeWarrior and Xcode are two IDEs.
- Under Windows, Microsoft Visual Studio.
- Kylix is a popular IDE for developing applications under Linux.


// Explain the programming structure of C program with suitable example.
## 1.1 PRORAMMING STRUCTURE

- Behind all of the software we use on a daily basis, there's a code being run with all sorts of terms and symbols. Surprisingly, it can often be broken down into three simple programming structures called **Sequence, Selection, Iteration and Modular**.
- These come together to form the most basic instructions and algorithms for all types of software.

### 1.1.1 Sequence
- A sequence is a series of actions that is completed in a specific order.
- Example 
	- A sequence we do every day is a morning routine. You might wake up, drink some water, take a shower, eat breakfast, and so on.
![[1.1_A_sequence_of_events.png]]

![1.1 A sequence of events](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/C%20Programming/C-Assets/1.1_A_sequence_of_events.png?raw=true)

### 1.1.2 SELECTION

- Instead of following a specific order of events, they ask a question in order to figure out which path to take next.
- answering a question based on what it finds.
- Example 
	- you go to brush your teeth, and you find that you're out of toothpaste. You'd then ask, "Do I have any more toothpaste?" If the answer is no, then you would add it to your shopping list. But if the answer is yes, you would just use the toothpaste.
![[1.2_Selection_between_tasks.png]]

![1.2 Selection between tasks](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/C%20Programming/C-Assets/1.2_Selection_between_tasks.png?raw=true)

### 1.1.3 ITERATION AND MODULAR

- Iteration is the process of repeating steps.
- Example
	- A very simple algorithm for eating breakfast cereal might consist of these steps: 
	- put cereal in bowl. 
	- add milk to cereal. 
	- spoon cereal and milk into mouth and repeat this until the bowl is empty.
- Modular programming is the process of subdividing a computer program into separate sub-programs.
- This modules can be reused in the code to save time.

![[1.3_Representation_of_Iteration_and_Modulation.png]]

![1.3 Representation of Iteration and Modulation](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/C%20Programming/C-Assets/1.3_Representation_of_Iteration_and_Modulation.png?raw=true)

## 1.2 PROBLEM SOLVING TECHNIQUES

**Step 1: Understanding the Problem:**
- understand the problem to be solved in totally.
- One should be absolutely sure about the objectives of the given problem.

**Step 2: Analyzing the Problem:**
- we look at different ways of solving the problem and evaluate each of these methods.
- search for an appropriate solution to the problem under consideration.
- The end result of this stage is a broad overview of the sequence of operations that are to be carried out to solve the given problem.

**Step 3: Developing the solution:**
- Form a detailed step by step solution to the problem under consideration.

**Step 4: Coding and Implementation:**
- conversion of the detailed sequence of operations into a language that the computer can understand

## 1.3 DEVELOPMENT TOOLS

### 1.3.1 ALGORITHM

- Reason to study algorithms is the usefulness in developing analytical skills.
- Can be seen as special kinds of solutions for the problems.
- An algorithm is a sequence of unambiguous instructions for solving a problem that is asequence of computational steps that transform them input into the output.
- An algorithm has the following properties:
	1. **Input**: The algorithms get input.
	2. **Output**: The algorithms produce output.
	3. **Definiteness**: Each instruction to represent with clear & unambiguous.
	4. **Finiteness**: The algorithm terminates; that is it terminates after finite number of steps.
	5. **Correctness**: The produced output by the algorithm is correct.

**what is the need of the algorithms:**

1. Algorithms are necessary for solving complex problems efficiently and effectively.
2. They help to automate processes and make them more reliable, faster, and easier to perform. 
3. Algorithms also enable computers to perform tasks that would be difficult or impossible for humans to do manually. 
4. They are used in various fields such as mathematics, computer science, engineering, finance, and many others to optimize processes, analyze data, make predictions, and provide solutions to problems.

![[1.4_Characteristics_of_an_Algorithm.jpg]]

![1.4 Characteristics of an Algorithm](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/C%20Programming/C-Assets/1.4_Characteristics_of_an_Algorithm.jpg?raw=true)

**Advantages of Algorithms:**

- It is easy to understand.
- An algorithm is a step-wise representation of a solution to a given problem.
- In Algorithm the problem is broken down into smaller pieces or steps hence, it is easier  for the programmer to convert it into an actual program.

**Disadvantages of Algorithms:**

- Writing an algorithm takes a long time so it is time-consuming.
- Understanding complex logic through algorithms can be very difficult.
- Branching and Looping statements are difficult to show in Algorithms.

### 1.3.2 DEVELOPING ALGORITHM

- There are two methods used for designing an algorithm.
	1. Pseudocode
	2. Flowchart
- In design and analysis of algorithms, usually the second method is used to describe an algorithm.
- It makes it easy for the analyst to analyze the algorithm ignoring all unwanted definitions.
- We design an algorithm to get a solution of a given problem. A problem can be solved in more than one ways.
- Hence, many solution algorithms can be derived for a given problem

#### Algorithm Analysis

Efficiency of an algorithm can be analyzed at two different stages, before implementation and after implementation. They are the following −

-   **_A Priori_ Analysis** − This is a theoretical analysis of an algorithm. Efficiency of an algorithm is measured by assuming that all other factors, for example, processor speed, are constant and have no effect on the implementation.
-   **_A Posterior_ Analysis** − This is an empirical analysis of an algorithm. The selected algorithm is implemented using programming language. This is then executed on target computer machine. In this analysis, actual statistics like running time and space required, are collected.

We shall learn about _a priori_ algorithm analysis. Algorithm analysis deals with the execution or running time of various operations involved. The running time of an operation can be defined as the number of computer instructions executed per operation.

#### Algorithm Complexity

Suppose **X** is an algorithm and **n** is the size of input data, the time and space used by the algorithm X are the two main factors, which decide the efficiency of X.

-   **Time Factor** − Time is measured by counting the number of key operations such as comparisons in the sorting algorithm.
-   **Space Factor** − Space is measured by counting the maximum memory space required by the algorithm.

The complexity of an algorithm **f(n)** gives the running time and/or the storage space required by the algorithm in terms of **n** as the size of input data.

#### Space Complexity

Space complexity of an algorithm represents the amount of memory space required by the algorithm in its life cycle. The space required by an algorithm is equal to the sum of the following two components −

-   A fixed part that is a space required to store certain data and variables, that are independent of the size of the problem. For example, simple variables and constants used, program size, etc.
-   A variable part is a space required by variables, whose size depends on the size of the problem. For example, dynamic memory allocation, recursion stack space, etc.

Space complexity S(P) of any algorithm P is S(P) = C + SP(I), where C is the fixed part and S(I) is the variable part of the algorithm, which depends on instance characteristic I. Following is a simple example that tries to explain the concept −

Algorithm: SUM(A, B)

Step 1 – START

Step 2 – C ← A + B + 10

Step 3 – Stop

Here we have three variables A, B, and C and one constant. Hence S(P) = 1 + 3. Now, space depends on data types of given variables and constant types and it will be multiplied accordingly.

#### Time Complexity

Time complexity of an algorithm represents the amount of time required by the algorithm to run to completion. Time requirements can be defined as a numerical function T(n), where T(n) can be measured as the number of steps, provided each step consumes constant time.

For example, addition of two n-bit integers takes **n** steps. Consequently, the total computational time is T(n) = c ∗ n, where c is the time taken for the addition of two bits. Here, we observe that T(n) grows linearly as the input size increases.

### 1.3.3 FLOWCHARTS

- Flowchart is a graphical representation of an algorithm
- Programmers often use it as a program-planning tool to solve a problem.
- It makes use of symbols which are connected among them to indicate the flow of information and processing.
- The process of drawing a flowchart for an algorithm is known as “flowcharting”.

**Advantages of Flowchart:**

-   Flowcharts are a better way of communicating the logic of the system.
-   Flowcharts act as a guide for blueprint during program designed.
-   Flowcharts help in debugging process.
-   With the help of flowcharts programs can be easily analyzed.
-   It provides better documentation.
-   Flowcharts serve as a good proper documentation.
-   Easy to trace errors in the software.
-   Easy to understand.
-   The flowchart can be reused for inconvenience in the future.
-   It helps to provide correct logic. 

**Disadvantages of Flowchart:**

-   It is difficult to draw flowcharts for large and complex programs.
-   There is no standard to determine the amount of detail.
-   Difficult to reproduce the flowcharts.
-   It is very difficult to modify the Flowchart.
-   Making a flowchart is costly.
-   Some developer thinks that it is waste of time.
-   It makes software processes low.
-   If changes are done in software, then the flowchart must be redrawn

### 1.3.4 DRAWING FLOWCHARTS

![[1.5_Working_of_FlowChart.png]]

![1.5 Working of FlowChart](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/C%20Programming/C-Assets/1.5_Working_of_FlowChart.png?raw=true)

### 1.3.5 PSEUDOCODES

#### 1.3.5.1 Definition

- It’s simply an implementation of an algorithm in the form of annotations and informative text written in plain English. 
- It has no syntax like any of the programming language and thus can’t be compiled or interpreted by the computer.

**Rules for writing Pseudocode**

1. Write one statement per line
2. Capitalize initial keywords (READ, WRITE, IF, WHILE, UNTIL).
3. Indent to show hierarchy.
4. End multiline structure.
5. Keep statements language.

**Advantages of Pseudocode**

- Improves the readability of any approach. 
- Acts as a bridge between the program and the algorithm or flowchart. Also works as a rough documentation, so the program of one developer can be understood easily when a pseudo code is written out. 
- The main goal of a pseudo code is to explain what exactly each line of a program should do, hence making the code construction phase easier for the programmer.

**Disadvantage of Pseudocode**

• It is not visual.
• We do not get a picture of the design.
• There is no standardized style or format.
• For a beginner, it is more difficult to follow the logic or write pseudocode as compared to flowchart.

#### 1.3.5.2 Characteristics

- Pseudocode is an informal way of expressing ideas and algorithms during the development process.
- Pseudocode uses simple and concise words and symbols to represent the different operations of the code.
- Pseudocode can be used to express both complex and simple processes
