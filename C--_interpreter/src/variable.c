#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
struct var{ //making my own struct to make a map between name and value
    char name[10];
    int val;
};
struct var var_set[10];
int cnt=0;

void assign_variable(char *var_name, int val){  //assigns the value to the variable
    for(int i=0; i<=cnt; i++){
        if(!strcmp(var_name, var_set[i].name)){
            var_set[i].val = val;
            return;
        }
    }
}

void create_variable(char *name, int flag, int val){ //creates variable with the name and particular value, flag maintains if variable is initialised or not
    strcpy(var_set[cnt].name, name);
    if(flag) assign_variable(var_set[cnt].name, val);
    cnt++;
}

int get_variable_value(char *var_name){ //gets variable value
    int f=1;
    for(int i=0; i<strlen(var_name); i++){  //if its a number than returns the number as integer type
        if(!isdigit(var_name[i])) f=0;
    }
    if(f){
        return atoi(var_name);
    }
    for(int i=0; i<=cnt; i++){
        if(!strcmp(var_name, var_set[i].name)){ //finds variable and extracts its value
            return var_set[i].val;
        }
    }
    return 0;
}

