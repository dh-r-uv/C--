#include <stdio.h>
#include "../include/variable.h"

void main(){
    printf("Testing Variable functions:\n");
    printf("Testing create_variable by executing create_variable(\"number\").\n");
    create_variable("number", 0, 0);
    printf("Testing assign_variable by executing assign_variable(\"number\", 20).\n");
    assign_variable("number", 20);
    printf("Testing get_variable_value by executing printf(\"%%d\\n\",get_variable_value(\"number\")).\n");
    printf("Value returned = %d\n",get_variable_value("number"));
    printf("Testing get_variable_value by executing printf(\"%%d\\n\",get_variable_value(\"40\")).\n");
    printf("Value returned = %d\n",get_variable_value("40"));
}