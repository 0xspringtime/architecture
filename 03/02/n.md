we write a C program as two files p1.c and p2.c. We can then compile this code using a Unix command line:

    gcc -Og -o p p1.c p2.c

command-line option –0g instructs the compiler to apply a level of optimization that yields machine code that follows the overall structure of the original C code

memory addresses used by a machine-level program are virtual addresses, providing a memory model that appears to be a very large byte array

Parts of the processor state visible in assembly that normally are hidden from the C programmer:

 - The program counter (commonly referred to as the PC, and called %rip in x86-64) indicates the address in memory of the next instruction to be executed.
 - The integer register file contains 16 named locations storing 64-bit values. These registers can hold addresses (corresponding to C pointers) or integer data. Some registers are used to keep track of critical parts of the program state, while others are used to hold temporary data, such as the arguments and local variables of a procedure, as well as the value to be returned by a function.
 - The condition code registers hold status information about the most recently executed arithmetic or logical instruction. These are used to implement conditional changes in the control or data flow, such as is required to implement if and while statements.
 - A set of vector registers can each hold one or more integer or floating-point values.


