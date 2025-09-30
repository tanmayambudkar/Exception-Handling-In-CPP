# Aim: To study and implement Exception Handling
# Software Required:
Visual Studio
# Theory:
In programming, mistakes that cause unusual conditions (errors) are common. These errors generally fall into three categories:

+ Syntax Errors – Violations of language rules (caught during compilation).
+ Logical Errors – Code runs but produces incorrect results due to wrong logic.
+ Runtime Errors – Unexpected errors that occur during program execution (e.g., division by zero).
+ Exception handling in C++ is a mechanism to detect and manage runtime errors in a structured way. Examples of runtime errors are.
 Division by zero
 Accessing invalid memory
 File I/O failures

<ins>Exception Handling in C++</ins>:
Instead of terminating the program abruptly when an error occurs, C++ allows you to throw exceptions and catch them for graceful handling. To handle exceptions, C++ uses try and catch blocks, where try contains the code that may throw an exception, and catch contains the code to handle it.
+ Throwing an Exception : When an error or unexpected situation occurs, the program uses the throw keyword to signal an exception.
+ Catching an Exception : The program searches for a matching catch block to intercept and handle the thrown exception.
+ Handling the Exception : The catch block contains the logic to respond to the error, allowing the program to recover or terminate gracefully.

<ins>try-catch Block</ins>:
C++ provides an inbuilt feature for handling exceptions using try and catch block. It is an exception handling mechanism where the code that may cause an exception is placed inside the try block and the code that handles the exception is placed inside the catch block.

<ins>Throwing Exceptions</ins>:
Throwing exception means returning some kind of value that represent the exception from the try block. The matching catch block is found using the type of the thrown value. The throw keyword is used to throw the exception
# Implementaion:
The concept of Exception Handling in C++ is demonstrated by the following codes,
+ Division by 0 error
+ Age checker exception

# Algorithms:

Algorithm: Age Verification using Exception Handling

1. Start
2. Declare an integer variable `age`.
3. Prompt the user to *"Enter age"* and read input into `age`.
4. Begin a `try` block:
     If `age < 18`, throw the value of `age`.
     Else, print `"Age: <age> APPROVED"`.
5. Catch the exception of type `int`:
   Print `"ERROR: Underage! (<age>)"`.
6. End

Algorithm: Division with Exception Handling

1. Start
2. Declare float variables `a`, `b`, `result`.
3. Prompt the user to *"Enter values of the first and second number"* and read `a` and `b`.
4. Begin a `try` block:
   If `b == 0`, throw `b`.
     Else, calculate `result = a / b` and display `"Answer = <result>"`.
5. Catch the exception of type `float`:
   Print `"ERROR: Division by <b>"`.
6. End

# Conclusion:
The above codes demonstates the use of Exceptions in C++.
