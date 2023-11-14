#include <string.h>
#include<stdio.h>
int evaluate_condition(int x, char *op, int y){ //evaluates condition
    if(!strcmp(op, ">")) return x>y;
    if(!strcmp(op, "<")) return x<y;
    if(!strcmp(op, ">=")) return x>=y;
    if(!strcmp(op, "<=")) return x<=y;
    if(!strcmp(op, "==")) return x==y;
    if(!strcmp(op, "!=")) return x!=y;
    return 0;
}