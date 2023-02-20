General stack frame structure:

![](a.png)

The general forms of the call and ret instructions are described as follows:

    Instruction Description

    call Label  Procedure call
    call *Operand   Procedure call
    ret          Return from call

The call instruction transfers control to the start of a function, while the ret instruction returns back to the instruction following the call:

![](b.png)

Detailed execution of program involving procedure calls and returns:
![](c.png)
