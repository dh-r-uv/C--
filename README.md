# C--
This project is an interpreter that handles **if** conditional statement, **print** statements, variable declaration and/or initialization ie..**int a**, **int a=10** and **a=10**.

## INSTRUCTIONS TO RUN THIS INTERPRETER FOR YOUR CODE

1)Pull the project repository.The project folder contain src files, test files , object files, header files, Makefile and the readme.

2)Open your parent diretory of project on the terminal and run the `make` command to remake these files on your terminal.

3)Run the executable command `./c_minus_minus`, this gives you the result of the code in the 'main.c'

4)To individually test each test file, run the command `make unit_test_<file_name>` in the terminal. This creates executable file `test_unit_<file_name>.o`. You can then run command `test_unit_<file_name>` to execute each test file.

5)To clear all made object files, run `make clean`.

## Folders

### include
Contains all the header files of the source files, `<srcfile_name.h>`.

### src
Contains all the important source files `<srcfile_name.h.c>` that includes the `main.c`, `interpreter.c` etc.

### test
Contains all the test files, that contains basic testcases to check if the functions work properly.

### obj 
Contains all `.o` files required for final compilation.


## Working

#### `main.c`: Contains the code that needs to be interpreted and calls interpreter function to execute code  

#### `interpreter.c`: Reads each line of code and runs it according to the statements.

#### `arithmetic.c`: Performs basic arithmetic operations

#### `print.c`: Prints values of variables and expressions

#### `variable.c`: Maintains variable name and values, and also contains a function to get variable value

#### `condition.c`: Performs basic conditional operations that need to be run within `if(<operation>)`

#### `NOTE`: Each `.c` file contains comments to further explain the working of the codes.

## Future updates coming up
#### adding loops & nested loops
