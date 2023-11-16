## 1.1 BASIC COMPONENTS OF DIGITAL COMPUTERS

- Computers are machines that can store and process information.
- It processes raw data to give information as output.
- The first electronic digital computer was developed in the late 1940s and was used primarily for numerical computations.
- A binary digit is called a bit.
- 4bit is a nibble. And 8bit is a bite.
- A computer system is subdivided into two functional entities: Hardware and Software

### 1.1.1 BLOCK DIAGRAM OF A COMPUTER

The basic components of any computer are the same, namely:

- Input Devices 
- Central Processing Unit (CPU)
- BUS
- Output Devices

![[1.1 The basic components of a computer.png]]

![1.1 The basic components of a computer](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/1.1%20The%20basic%20components%20of%20a%20computer.png?raw=true)

1.1 Block Diagram - The basic components of a computer

#### Input Devices 

- All data entering the computer passes through the input device.
- Input blocks are made up of different devices, such as Mouse and keyboards
- Computers accept raw data in binary format.

- The three main functions of the input block are:
1. Receive data for processing by the user.
2. Converts data into a machine-readable format.
3. It sends the data directly to the main memory for storage.

#### CPU - Central Processing Unit

- The central processing unit, or CPU, is the brain of a computer.
- The central processing unit also performs all arithmetic and logical operations on the computer.
- ALU and CU help in translating instructions and performing several operations.

**ALU** 
- ALU performs basic arithmetic operations such as addition, subtraction, multiplication and division.
- Block also perform logical operations such as AND, OR, equal to, less than, etc.

**CU**
- The CU is the controller of all tasks.
- The memory block sends a set of commands to the control unit.
- The control unit then translates these commands in turn.
- These commands are converted into control signals.
- These control signals help prioritize and plan tasks.

**Memory** 
- The Memory block stores all data that needs to be processed and the data resulting from these processes.
- The memory block acts as a hub for all data and workin in sync with CPU which helps to speed up data access and processing.
- There are two types of computer memory.
	1. *Primary Memory*
		- This type of memory cannot store large amounts of data.
		- Stored data is temporary. 
		- It can be erased after power off. 
		- Therefore, it is also called temporary memory or main memory. 
		- Eg: RAM
	2. *Secondary memory*
		- Secondary memory is used for persistent storage. 
		- It is also called permanent memory or auxiliary memory. 
		-  Even if there is a power outage, data is not easily erased.
		- Eg: Hard Drive 

##### Working of a CPU

- All CPUs performs instruction cycle that consists of three steps named Fetch, Decode and Execute.

	###### Fetch 
	- Programs or instructions are stored in the memory.
	- The CPU reads this instruction that is to be operated from a particular address in the memory this reading of instruction is called fetching of data.
	- The program counter of the CPU keeps the record of the address of the instructions.
	
	###### Decode
	- A circuitry called an instruction decoder decodes all the instructions fetched from the memory.
	- The instructions are decoded to various signals that control other areas of the CPU.
	
	###### Execute
	- In the last step, the CPU execute the intruction that are fetched from the memory and decoded.
	
	##### Clock Speed
	- The speed of the processor is measured by the number of clock cycles a CPU can perform in a second.
	- The more the number of clock cycles, the more instructions (calculations) it can carry out.
	- The CPU speed is measured in Hertz.
	- Modern Day processors have speed units of GHz. (1GHz=1 million thousand cycles per second).

#### Output Devices
- Any information sent to the computer after processing is recevied by the user via an output device.
- The output block presents data in an understandable format.
- The Output block receive the data in binary formate and convert it to human-readable formate.

#### Buses 
- A system bus is a facet of computer architecture that transmits and shares data throughout the computer and between devices.
- It's the primary way for a computer to process information because it connects the main processor to all other internal hardware components of a computer.
- a system bus is a pathway made up of electronic cables that carry the data back and forth from the computer's central processing unit (CPU) to other areas of the computer.
- The size and design for the system bus itself dictate the speed of data transfers and how much data the bus can transfer at one given time.


## 1.2 CENTRAL PROCESSING UNIT (CPU)

- CPU is an electronic circuit made of different types of semiconductor devices.
- The main function of a CPU is to take input signals from the input devices and process them.
- The CPU is mainly responsible for storing and retrieving information on disks and other media.

### 1.2.1 PRIMARY MEMORY
- The data entered through the input device before processing and the data after processing for output devices are stored in the primary memory as it take care of all these needs.
- The memory unit that directly communicate with the CPU is called the primary storage or primary memory or main storage or main memory.
- It basically stores the necessary programs of system software, which are required to execute the user’s program.
- When we load software from floppy disk, pen drive, hard disk or CD-ROM, it is stored in the main memory.

### 1.2.2 ARITHMETIC AND LOGICAL UNIT (ALU)

![[1.2 The ALU in the CPU.png]]

![1.2 The ALU in the CPU](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/1.2%20The%20ALU%20in%20the%20CPU.png?raw=true)

 *"A" means the accumulator which hold the data for processing and the result for it.
 "B" are the other registers of the processors* 

- The arithmetic Logic unit (ALU) of a computer system is the place where the actual execution takes place.
- Performs all Arithmetic calculations.
- ALU describe comparison operations using relational operators.
- Carries out arithmetic operations on integer and real operands and simple logical test for integer operands only.
- Data or instructions stored in the primary memory before processing are transfered as and when needed by the ALU.
- No processing in primary memory is done.
- Intermediate results generated in the ALU are temporarily transferred to the main memory for later time.
- The accumulator is used to accumulate results. It is the place where the answers of many operations are stored temporarily before being sent to the computer's memory.
- Only the final result is transmitted to the memory unit for storage.


### 1.2.3 CONTROL UNIT (CU)
- When to store data, what to do with the data(ALU) and how the final result is sent to the output devices is controled by the control unit.
- Selecting, interpreting and seeing to the execution of the program instructions, the control unit is able to maintain order and direct the operation of the entire system.
- It manages and coordinates the entire computer system.
- The CU is responsible for carrying out program instructions and telling the rest of the computer system what to do.

![[1.3 Control Unit in the CPU.png]]

![1.3 Control Unit in the CPU](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/1.3%20Control%20Unit%20in%20the%20CPU.png?raw=true)

It obtains the instructions from the program stored in the main memory, interprets the
instructions and issues signals that cause other units of the system to execute them.

- The Instruction Register contains a current instruction. The control unit uses the instruction contained in the Instruction Register to decide which circuits need to be activated.Program counter contains the address of the next instruction to be fetched for execution.
- It communicates with both the arithmetic logic unit and main memory.
- The control unit co-ordinates the activities of the other two units as well as all peripheral and auxiliary storage devices linked to the computer.
- The CU instructs the arithmetic logic unit which arithmetic operations or logical operationis to be performed through control logic unit.

![[1.4 Flow of signals in a Control Unit.png]]

![1.4 Flow of signals in a Control Unit](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/1.4%20Flow%20of%20signals%20in%20a%20Control%20Unit.png?raw=true)

- The process of reading an instruction is often referred to as the fetch-execute process.

### 1.2.4 INSTRUCTION FORMAT

*basis of number of address instruction are classified as:*

 **Zero Address Instructions**
- A stack based computer do not use address field in instruction. To evaluate a expression first it is converted to revere Polish Notation i.e. Post fix Notation.

PUSH A    TOP = A
PUSH B    TOP = B
ADD          TOP = A+B

*TOP means top of the stack*

**One Address Instructions**
- This uses an implied ACCUMULATOR register for data manipulation. One operand is in accumulator and other is in register or memory location. Implied means that the CPU already knows that one operand is in accumulator so there is no need to specify it.

| opcode | Operand/Address | mode            |
| ------ | --------------- | --------------- |
| LOAD   | A               | AC = M\[A]      |
| ADD    | B               | AC = AC + M\[B] |
| STORE  | T               | M\[T] = AC      |
| LOAD   | C               | AC = M\[C]      | 

**Two Address Instructions**
- This is common in commercial computers. Here two addresses can be specified in the instruction. Unlike earlier in one address instruction the result was stored in accumulator here result can be stored at different location rather than just accumulator, but require more number of bit to represent address.

| opcode | Destination address | Source address | mode            |
| ------ | ------------------- | -------------- | --------------- |
| MOV    | R1                  | A              | R1 = M\[A]      |
| ADD    | R1                  | B              | R1 = R1 + M\[B] |
| MOV    | R2                  | C              | R2 = C          | 

**Three Address Instructions**
- This has three address field to specify a register or a memory location. Program created are much short in size but number of bits per instruction increase.

| opcode | Destination address | Source address | Source address | mode               |
| ------ | ------------------- | -------------- | -------------- | ------------------ |
| ADD    | R1                  | A              | B              | R1 = M\[A] + M\[B] |
| ADD    | R2                  | C              | D              | R2 = M\[C] + M\[D] |
| MUL    | X                   | R1             | R2             | M\[X] = R1 * R2    | 

## 1.3 BUS

A bus is a communication system in computer architecture that transfers data between
components inside a computer, or between computers.

- A bus is a group of lines/wires which carry computer signals.
- A bus is the means of shared transmission.
- Lines are assigned for providing descriptive names. — carries a single electrical signal.
- Data can be transferred from one computer system location to another.
- The bus is not only cable but also hardware, protocol, program, and bus controller.

**What are the different components of a bus?**

1. The address bus: 
	- A one-way pathway that allows information to pass in one direction only, carries information about where data is stored in memory.
2. The data bus 
	- It is a two-way pathway carrying the actual data (information) to and from the main memory.
3. The control bus
	- It holds the control and timing signals needed to coordinate all of the computer’s activities.

**The basic functions of a system bus:**

1. Internal function: 
	- Also known as a memory bus
	- An internal system bus connects the hardware that's inside the computer to local devices within the computer's system.
2. External function:
	- Also known as an expansion bus, 
	- An external system bus uses electronic pathways that connect primarily to external devices outside the computer's system. 
	- Eg: wireless printer or mouse 
3. Data sharing: 
	- The main function of a system bus is to transfer data from one place to another using a parallel structure.
	- Amount of data depends on the size of the bus.
4. Addressing:
	- It alerts the system where to take certain pieces of data.
5. Power:
	- This function supplies power to each of the various devices connected to the main computer system.

**Structure and Topologies of Computer buses**

- **Power line** provides electrical power to the components connected.
- **Data lines** carrying data or instructions between modules of the system.
- **Address lines** indicate the recipient of the bus data.
- **Control lines** control the synchronization and operation of the bus and the modules linked to the bus.

**Different types of computer buses**

1. System Bus
	- This is the bus that connects the CPU to the motherboard’s main memory.
	- Also known as a front-side bus, a memory bus, a local bus, or a host bus.
 2. I / O Buses,
	 - Connects various peripheral devices to the CPU.
	 - These devices connect to the system bus through a ‘bridge’ implemented on the chipset of the processors.

**Types of System Buses**

![[1.5 Address Data and Control Busses.png]]

![1.5 Address Data and Control Busses](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/1.5%20Address%20Data%20and%20Control%20Busses.png?raw=true)

- Data Bus: Carries the data that needs processing
- Address Bus: Determines where data should be sent
- Control Bus: Determines data processing

### 1.3.1 DATA BUS

- A data bus can transfer data to and from the memory of a computer, or into or out of the central processing unit (CPU).
- Newer, wider data buses can handle higher bitrates, and the amount of data they can transfer is known as bandwidth.
- The speed at which information is exchanged between components is regulated by a bus controller.
- Information coming from the CPU will always travel at a much higher speed than others.
- A data bus can operate as a parallel or serial bus depending on how the data is carried.
- A parallel bus is used in more complex connections that must carry more than one bit at a time.
- Data is carried on many wires simultaneously.
- Serial buses use a single wire to send and receive data between components, and usually consist of a relatively small amount of wires.

### 1.3.2 CONTROL BUS

- A control bus is a computer bus that is used by the CPU to communicate with devices that are contained within the computer.
- The CPU transmits a variety of control signals to components and devices to transmit control signals to the CPU using the control bus.
- One of the main objectives of a bus is to minimize the lines that are needed for communication.
- The control bus is bidirectional.
- It is comprised of interrupt lines, byte enable lines, read/write signals and status lines.
- distinctive set of control signals(common): 
	1. Interrupt Request (IRQ) Lines:
		- It allows the CPU to interrupt its current job to process the present request.
	2. System Clock Control Line:
		- Delivers the internal timing for various devices on the motherboard and CPU.


### 1.3.3 ADDRESS BUS

- The Address bus will carry the data that specifies the address of a memory location, to either write to that location, or to read from that location.
- There is a one-way connection from the processor to the address bus and one- way connection from the address bus to the main memory.
- The Address bus is a one direction bus.
- The Address bus has a role in the the retrieval of data from a memory location by the CPU.
- If the width of the address bus is 8 bits, then there are 2, to the power 8 or 256 numbers that can be used to address memory locations.
- As a rule, the width of the address bus determines the maximum number of addressable memory locations.


## 1.4 NUMBER SYSTEMS

![[1.6 Number System Table.png]]

![1.6 Number System Table](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/1.6%20Number%20System%20Table.png?raw=true)

### 1.4.1 BINARY SYSTEM
- The combination of 1 and 0 forms the binary numbers.
- A computer can understand only the “on” and “off” state of a switch.

For example, (101101)2 in decimal is
= 1 x 2 5 + 0 x 24 + 1 x 23 + 1 x 2 2 + 0 x 21 + 1 x 20
= 1 x 32 + 0 x 16 + 1 x 8 + 1 x 4 + 0 x 2 + 1 x 1
= 32 + 8 + 4 + 1
= (45)10

### 1.4.2 OCTAL SYSTEM
- In octal we write using the eight digits 0, 1, 2, 3, 4, 5, 6, 7.

For example, (24)8 in decimal is
= 2×81+4×80
= (20)10

### 1.4.3 HEXADECIMAL SYSTEM
- In this system, 16 digits used to represent a given number.

For example, (2B)16 in decimal is
= 2 × 16 1 + 11 × 16 0
= (43)10

### 1.4.4 DECIMAL SYSTEM
- Decimal is nothing but the number we use in our day to day life.
- Each digit has a value based on its position called place value.

For example, the value of (786)10 is
= 7 x 10 2 + 8 x 10 1 + 6 x 10 0
= 700 + 80 + 6

### 1.4.5 DATA CONVERSION

**Conversion from Decimal to Number System and Number System to Decimal**

- Form Decimal to number system we use log division method.
- we write the decimal value inside the brackets and divided it by the number system(base value we need).
- After the same is finished we take answer form the bottom to top.

- From Number System to Decimal we multiply the digit by the base number with the power of the index of the digit and add them all together.
- We take index form 0 and start at the LSB(Least significant Bite) / right to left.

### 1.4.6 BINARY ARITHMETIC

**Binary Addition**

| A   | B   | Carry Over | Result |
| --- | --- | ---------- | ------ |
| 0   | 0   | 0          | 1      |
| 0   | 1   | 0          | 1      |
| 1   | 0   | 0          | 1      |
| 1   | 1   | 1          | 0      | 

For example 
  11
+\ 10
 \---
 101

**Binary Subtraction**

| A   | B   | Result | Borrow |
| --- | --- | ------ | ------ |
| 0   | 0   | 0      | 0      |
| 0   | 1   | 1      | 1      |
| 1   | 0   | 1      | 0      |
| 1   | 1   | 0      | 0      | 

For Example
111
– 101
\---
010

**Binary multiplication:**

| A   | B   | Result |
| --- | --- | ------ |
| 0   | 0   | 0      |
| 0   | 1   | 0      |
| 1   | 0   | 0      |
| 1   | 1   | 1      |

For Example
101
1 1 X 
\-----
 101
101
\----
1111

**Binary Division:**

100
\-----------
11 / 11 000
	  11
   \--------
      00
         00
    \--------
         00
           00
    \--------
		   00

## 1.5 ASCII, BCD, EBCDIC

### 1.5.1 BINARY CODED DECIMAL (BCD)

- The advantage that Binary Coded Decimal (BCD) has over Binary is that there is no limit to number size.
- For every decimal number added, you add 4-bits or one nibble.
- It is a fast and efficient system that converts the decimal numbers into binary numbers.
- These are generally used in digital displays where is the manipulation of data is quite a task.
- manipulation is done treating each digit as a separate single sub-circuit.

- The BCD equivalent of a decimal number is written by replacing each decimal digit in the integer and fractional parts with its four bit binary equivalent.
- The BCD code is more precisely known as 8421 BCD code.
- disadvantage is that BCD code is wasteful as the states between 1010 (decimal 10), and 1111 (decimal 15) are not used.

### 1.5.2 AMERICAN STANDARD CODE FOR INFORMATION INTERCHANGE (ASCII)

- The ASCII code was established by the American National Standards Institute (ANSI) 1960.
- Eight-bit group is called a byte.
- ASCII is commonly embedded in an eight-bit field.
- which consists of the seven information bits and a parity bit for error checking and representing special symbols.
- ASCII can represent to 256 characters.
- To represent text digitally, each character needs to have its own unique bit-pattern.
- Bit-patterns are combinations of 1s and 0s used to represent data inside of a computer.

- Extended ASCII, as the eight-bit code is known, was introduced by IBM in 1981.
- 32 code combinations are used for machine and control commands.
- As the ASCII do not have eniough code combination to represent all the characters in other languages this limitation gave rise to new encoding standards—Unicode and UCS (Universal Coded Character Set)—that can support all principal written languages.

### 1.5.3 EXTENDED BINARY CODED DECIMAL INTERCHANGE CODE (EBCDIC)

- Represented by eight bit.
- Mainly used on IBM mainframe and IBM mid-range computer operating systems.
- Each byte consists of two nibbles, each four bits wide.
- The first four bits define the class of character, while the second nibble defines the specific character inside that class.
- The EBCDIC code allows for 256 different characters.


## 1.6 LANGUAGE EVOLUTION

### 1.6.1 GENERATION OF LANGUAGES

*five generations of Programming languages:*

1. First Generation Languages: 
	- These are low-level languages like machine language.
	- 
2. Second Generation Languages: 
	- These are low-level assembly languages used in kernels and hardware drives.
3. Third Generation Languages: 
	- These are high-level languages like C, C++, Java, Visual Basic, and JavaScript.
4. Fourth Generation Languages :
	- These are languages that consist of statements that are similar to statements in the human language. mainly used in database programming and scripting. (, Python, Ruby, SQL,  atLab\[MatrixLaboratory]).
5. Fifth Generation Languages: 
	- These are the programming languages that have visual tools to develop a program. (Mercury, OPS5, and Prolog).

**The first two generations are called low-level languages. The next three generations are called high-level languages.**

#### 1.6.1.1 Machine Language

1. First Generation Language :
	- also called machine languages/ 1G language.
	- is machine-dependent.
	- statements are written in binary code
	- Advantages :
		1. Fast & efficient as statements are directly written in binary language.
		2. No translator is required.
	- Disadvantages :
		1. Difficult to learn binary codes.
		2. Difficult to understand – both programs & where the error occurred.


#### 1.6.1.2 Assembly Language

2. Second Generation Language :
	- also called assembler languages/ 2G languages.
	- contains human-readable notations that can be further converted to machine language using an assembler.
	- Assembler – converts assembly level instructions to machine level instructions.
	- Programmers can write the code using symbolic instruction codes that are meaningful abbreviations of mnemonics. It is also known as low-level language.
	- Advantages :
		1. It is easier to understand if compared to machine language.
		2. Modifications are easy.
		3. Correction & location of errors are easy.
	- Disadvantages :
		1. Assembler is required.
		2. This language is architecture /machine-dependent, with a different instruction set for different 	machines.

#### 1.6.1.3 High Level Language

3. Third Generation Language :
	- also called procedural language /3 GL.
	- consists of the use of a series of English-like words.
	- Its also called High-Level Programming Language.
	- Code translation to machine code using Compiler/ Interpreter.
	- C, PASCAL, FORTRAN, COBOL, etc.
	- Advantages :
		1. Use of English-like words makes it a human-understandable language.
		2. Lesser number of lines of code as compared to above 2 languages.
		3. Same code can be copied to another machine & executed on that machine by using compiler-specific to that machine.
	- Disadvantages :
		1. Compiler/ interpreter is needed.
		2. Different compilers are needed for different machines.

4. Fourth Generation Language
	- also called a non – procedural language/ 4GL.
	- enables users to access the database.
	- SQL, Foxpro, Focus, etc.
	- Advantages :
		1. Easy to understand & learn.
		2. Less time required for application creation.
		3. It is less prone to errors.
	- Disadvantages :
		1. Memory consumption is high.
		2. Has poor control over Hardware.
		3. Less flexible.

5. Fifth Generation Language :
	- also called 5GL.
	- based on the concept of artificial intelligence.
	- uses the concept that application can be built to solve it based on some constraint.
	- we make computers learn to solve any problem.
	- Parallel Processing & superconductors are used for this type of language to make real artificial intelligence.
	- PROLOG, LISP, etc.
	- Advantages :
		1. Machines can make decisions.
		2. Programmer effort reduces to solve a problem.
		3. Easier than 3GL or 4GL to learn and use.
	- Disadvantages :
		1. Complex and long code.
		2. More resources are required & they are expensive too.

## 1.7 CHARACTERISTICS OF GOOD LANGUAGE TRANSLATORS

**Language Processors –**

- Compilers, interpreters, translate programs written in high-level languages into machine code that a computer understands.
- assemblers translate programs written in low-level or assembly language.
- The programs are written mostly in high-level languages are called source code.
- special translator system software is used to translate the program written in a high-level language into machine code is called Language Processor.

### 1.7.1 COMPILER

- The language processor that reads the complete source program written in high-level language as a whole in one go and translates it into an equivalent program in machine language is called a Compiler.
- C, C++, C#, Java.
- the source code is translated to object code successfully if it is free of errors.
- specifies the errors at the end of the compilation with line numbers(if any error).
- errors must be removed for recompilation.

![[1.7.1 COMPILER.png]]

![1.7.1 COMPILER](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/1.7.1%20COMPILER.png?raw=true)

### 1.7.2 INTERPRETER

- The translation of a single statement of the source program into machine code and executes immediately before moving on to the next line is called an interpreter.
- If there an error the interpreter terminates its translating process at that statement and displays an error message.
- Next line only after the removal of the error.
- Executes instructions without previously converting them to an object code or machine code.

![[1.7.2 INTERPRETER.png]]

![1.7.2 INTERPRETER](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/1.7.2%20INTERPRETER.png?raw=true)

### 1.7.3 ASSEMBLER

- used to translate the program written in Assembly language.
- The source program is an input of an assembler that contains assembly language instructions.
- 1st interface that is able to communicate humans with the machine.
- code written in assembly language is some sort of mnemonics(instructions) like ADD, MUL, and so on.
- mnemonics also depend upon the architecture of the machine.

![[1.7.3 ASSEMBLER.png]]

![1.7.3 ASSEMBLER](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/1.7.3%20ASSEMBLER.png?raw=true)

***Difference between Compiler and Interpreter***

| Compiler                                                                                                                                            | Interpreter                                                                                 |
| --------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------- |
| converts the entire source code into executable machine code for a CPU.                                                                             | runs it line by line, translating each line as it comes to it                               |
| runs it line by line, translating each line as it comes to it but the overall execution time comparatively faster.                                  | takes less amount of time to analyze the source code but the overall execution time slower. |
| generates the error message only after scanning the whole program, so debugging is comparatively hard because error can be any where in the program | Debugging is easier as it continues translating the program until the error is met.         |
| requires a lot of memory for generating object codes.                                                                                               | requires less memory than a compiler because no object code is generated.                   |
| Generates intermediate object code.                                                                                                                 | No intermediate object code is generated.                                                   |
| For Security purpose compiler is more useful.                                                                                                       | The interpreter is a little vulnerable in case of security.                                 |
| C, C++, Java                                                                                                                                        | Python, Perl, JavaScript, Ruby                                                              | 


## 1.8 SOURCE AND OBJECT PROGRAM

### 1.8.1 SOURCE CODE
- Source code refers to high level code or assembly code which is generated by human/programmer.
- easy to read and modify.
- written by programmer by using any High Level Language or Intermediate language.
- contains comments that programmer puts for better understanding.
- It is provided to language translator which converts it into machine understandable code which is called machine code or object code.
- It is considered as fundamental component of computer.
- statements written in any programming language is termed as source code.

![[1.9 Source code and Object code.png]]

![1.9 Source code and Object code](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/1.9%20Source%20code%20and%20Object%20code.png?raw=true)


### 1.8.2 OBJECT CODE
- Object code refers to low level code which is understandable by machine.
- generated from source code after going through compiler or other translator.
- It is in executable machine code format.
- contains a sequence of machine understandable instructions.
- Object file contains object code.
- considered as one more of machine code.
- examples are common object file format (COFF), COM files and “.exe” files.

**Difference between Source Code and Object Code :**

| SOURCE CODE                                                          | OBJECT CODE                                                                    |
| -------------------------------------------------------------------- | ------------------------------------------------------------------------------ |
| generated by human or programmer.                                    | generated by compiler or other translator.                                     |
| is high level code.                                                  | is low level code.                                                             |
| written in plain text by using some high level programming language. | translated code of source code. It is in binary format.                        |
| is human understandable.                                             | not human understandable.                                                      |
| not directly understandable by machine.                              | is machine understandable and executable.                                      |
| written in a high-level language or assembly language.               | written in machine language through compiler or assembler or other translator. |
| easily modified.                                                     | cannot be modified.                                                            |
| contains comments for better understanding by Programmer.            | does not contain comments for understanding by machine.                        |
| contains less number of statements                                   | contains more number of statements                                             |
| less close. towards machine.                                         | more close towards machine.                                                    |
| Performance of source code is less.                                  | Performance of object code is more                                             |
| is input to compiler or any other translator.                        | is output of compiler or any other translator.                                 |
| not system specific.                                                 | is system specific.                                                            |
| can be changed over time.                                            | Translation is needed to get modified object code.                             |


### [[Subjects/Computer Fundamentals/Unit ll]] 
### [[Subjects/Computer Fundamentals/Unit lll]] 
### [[Subjects/Computer Fundamentals/Unit lV]] 
