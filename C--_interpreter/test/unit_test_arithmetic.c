#include <stdio.h>
#include "../include/arithmetic.h"

void main(){
    int x = 10, y = 5;
    printf("Testing Perform arithmetic:\n");
    printf("Testing function with x = 10 and y = 5 for all operators:\n");
    printf("perform_arithmetic(x,'+',y) returns %d\n", perform_arithmetic(x,'+',y));
    printf("perform_arithmetic(x,'-',y) returns %d\n", perform_arithmetic(x,'-',y));
    printf("perform_arithmetic(x,'*',y) returns %d\n", perform_arithmetic(x,'*',y));
    printf("perform_arithmetic(x,'/',y) returns %d\n", perform_arithmetic(x,'/',y));
}