#include <stdio.h>
#include "../include/interpreter.h"


int main() {
    char code[] =
        "int x = 10;"
        "print x;"
          "int y = 6+3;"
          "print y;"
         "int z;"
         "print z;"
         "z = x + y;"
         "print z;"
        "if (z >= 10+5) {"
         "    int w = 20;"
        "    print w;" 
        "} "
        "print z+w;";
    execute_c_minus_minus(code);    //executes c-- code
    
    return 0;
}
