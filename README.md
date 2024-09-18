# B. Braun C++ training - day 1

## Table of contents
- C++ intorduction
- Development environment setup
- Primitive types & variables
- Operators
- Conditions
- Loops
- Functions

## How do you use this repository - Devlopment environment setup
Within the `.devcontainer` folder, you'll find a file that describes a C++ development environment. By utilizing this file in Visual Studio Code, you can establish a connection to a Linux-based development environment. The steps involved are as follows:
- Make sure you have **Docker Desktop** installed and running on your computer
- Install the **Remote Development** extension pack in Visual Studio Code
Once the installations are complete, follow these steps:
- Open the Command Palette (usually by pressing Ctrl+Shift+P) and search for `Dev Containers: Clone Repository in Container Volume`
- You may need to authorize the extension for GitHub authentication. You will be redirected to your web browser to complete this process
- A development container will be created and started in the background. You may see a terminal window open while the container is being created

## Assignments

### 1. Primitive types & variables
#### Task 1.1: ./primitive_types/primitive_types.cpp: fundamental types
In the code, you will find variable declarations that need to be completed with initialized declarations. Please select the appropriate value from the commented line above for each variable.

### 2. Operators
#### Task 2.1: ./operators/cast_operators.cpp: static_cast operator
Write the `toChar` function return value so that it converts the `asciiValue` variable, which is passed as a parameter, to a `char` type using `static_cast` operator
#### Task 2.2: ./operators/cast_operators.cpp: dynamic_cast operator
The if statement condition shall be true if the currently iterated `animal` instance is of type `Dog`
#### Task 2.3: ./operators/cast_operators.cpp: dynamic_cast operator
The if statement condition shall be true if the currently iterated `animal` instance is of type `Cat`
#### Task 2.4: ./operators/reinterpeter_cast.cpp: reinterpeter_cast
Convert the `SignedInt` structure to an `UnsignedInt` type using bitwise copying. Can you determine what the value of the `unsignedInt->value` member will be?
#### Task 2.5: ./operators/try_catch.cpp: scope resolution
Observe where and how the `result` variable is declared. Initialize it to 0.0 in the `main` function
#### Task 2.6: ./operators/try_catch.cpp: exception handling
Extend the `divide` function so that it throws an exception when attempting to divide by zero
#### Task 2.7: ./operators/try_catch.cpp: exception handling
Implement a `try-catch` block that calls the `divide` function and can catch any exceptions thrown by it

### 3. Conditions
#### Task 3.1 ./conditional/if_statement.cpp: if statement condition
Create a boolean variable that can be used as a condition in the if statement below to determine if a number is even or odd
#### Task 3.2 ./conditional/if_statement.cpp: if statement condition
Create an instance of the class above so that it can be used as a condition in the if statement below to determine if a number is even or odd. This demonstrates that the condition part of an if statement can be an object of a class that can be unambiguously converted to a boolean
#### Task 3.3 ./conditional/if_statement.cpp: fallthrough
Complete the implementation of the `selectMenu` function using a switch statement to print out the selected meals. Implement only one meal type per case. Tip: you can use the *fallthrough* effect here.
#### Task 3.4 ./conditional/if_statement.cpp switch selestatement condition
Implement a switch statement that can print the day of the week corresponding to a given number (e.g., 1 - Monday, ...). The day number should be the value returned by the `getRandomNumber` function. Tip: you can declare and initialize variable within the selection statement itself.
#### Task 3.5 ./conditional/constexpr.cpp
Implement a conditional statement that can determine whether a constant variable holds a positive or negative number

### 4. Loops
#### Task 4.1 ./loops/loops.cpp
In the `main` function, you will find an array containing `numbers`. Print the numbers in the array to the console using the following loop types:
- traditional for loop
- do-while loop
- while loop
- range-based for loop
#### Task 4.2 ./loops/cond-expr.cpp
In the `main` function, create an instance of the above class to drive a single iteration of the following while loop. The example aims to demonstrate that a loop's condition can be an instance of a class that can be unambiguously converted to a boolean type.
#### Task 4.3 EXTRA ./loops/user_defined_collection.cpp
The `SimpleArray` class implements a custom container with a fixed size, storing integer values. Implement a range-based for loop to print the elements of the created instance (`myArray`). The example illustrates that range-based for loops work with custom containers that define `begin()` and `end()` methods.

### 5. Functions
#### Task 5.1 ./functions/deafult_arguments.cpp: default arguments
Implement the `printMessage` function that takes a string variable as a parameter containing the `message` to be printed and an integer `times` indicating how many times the message should be printed. If no argument is provided for `times` when calling the function, it should print the message once.
#### Task 5.2 ./functions/multiple_value_return.cpp: return with struct
Implement the `calculatePoint` function that returns a `Point` structure with a new point that is shifted 1 unit in the positive direction relative to the input `x` and `y` values
#### Task 5.3 ./functions/multiple_value_return.cpp: return with tuple
Implement the `calculatePointAndDistance` function that returns a `tuple` containing two points derived from the input parameters, with coordinates (`x1`, `y1`) and (`x2`, `y2`), as well as the distance between the two points.
#### Task 5.4 ./functions/pass_by.cpp: pass by reference
Implerment the `swap` function that exchanges the values of two variables. The modification should be visible to the caller.
#### Task 5.5 ./functions/pass_by.cpp: pass by reference
Implement the `getLength` function that returns the length of the input string.
#### Task 5.6 ./functions/auto.cpp: auto keyword
Implement the `max` function that returns the greater of the input parameters `a` and `b`. The return type of the function should be deduced from the return expression.
#### Task 5.7 ./functions/inline.cpp: inline keyword
Implement the `isVowel` inline function that determines whether the input character is a vowel
#### Task 5.8 ./functions/constexpr.cpp: constexpr keyword
Implement the `factorial` function that calculates the factorial of the input variable `number`. The function can be called with a compile-time constant expression, and call it in the `main` function with value 5
#### Task 5.9 ./functions/noexcept.cpp: noexcpet keyword
Implement the `sumElements` function that sums the elements of the input vector. This function should not throw any exceptions
#### Task 5.10 ./functions/atexit.cpp: atexit keyword
The `cleanup` function checks whether the `numbers` pointer points to an allocated memory area and, if so, frees the allocated space. Register this function to run before the program terminates normally.
