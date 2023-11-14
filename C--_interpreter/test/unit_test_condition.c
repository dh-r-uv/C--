#include <stdio.h>
#include "../include/condition.h"

void main(){
    printf("Testing evaluate_condition:\n");
    printf("perform_arithmetic(15, \">\", 20) returns %d\n", evaluate_condition(15,">",20));
    printf("perform_arithmetic(15, \"<\", 20) returns %d\n", evaluate_condition(15,"<",20));
    printf("perform_arithmetic(15, \"==\", 20) returns %d\n", evaluate_condition(15,"==",20));
    printf("perform_arithmetic(15, \">=\", 20) returns %d\n", evaluate_condition(15,">=",20));
    printf("perform_arithmetic(15, \"<=\", 20) returns %d\n", evaluate_condition(15,"<=",20));
    printf("perform_arithmetic(15, \"!=\", 20) returns %d\n", evaluate_condition(15,"!=",20));
    printf("perform_arithmetic(15, \"==\", 15) returns %d\n", evaluate_condition(15,"==",15));
    printf("perform_arithmetic(15, \">=\", 15) returns %d\n", evaluate_condition(15,">=",15));
    printf("perform_arithmetic(15, \"<=\", 15) returns %d\n", evaluate_condition(15,"<=",15));
    printf("perform_arithmetic(15, \"!=\", 15) returns %d\n", evaluate_condition(15,"!=",15));
}