#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../include/arithmetic.h"
#include "../include/condition.h"
#include "../include/print.h"
#include "../include/variable.h"

char temp[10];
int s=0;
int evalu(char *p){     // evaluates expression
    char op[10], var[10][10];   //stores operators and varibles/number in the expression
    int n_op=0, n_var=0, n_var2=0;
    char temp[10];
    for(int i=0; i<strlen(p); i++){ //finds the arithmetic equivalent
        if(p[i]=='+' || p[i]=='-' || p[i]=='*' || p[i]=='/'){
            op[n_op] = p[i];
            n_op++;
            temp[n_var2] = '\0';
            n_var2=0;

            strcpy(var[n_var++], temp);
        }
        else{
            temp[n_var2++] = p[i];
        }
    }
    temp[n_var2] = '\0';
    strcpy(var[n_var], temp);
    int s = get_variable_value(var[0]);
    for(int i=0; i<n_op; i++){
        int n = get_variable_value(var[i+1]);
        s = perform_arithmetic(s, op[i], n);
    }
    return s;
}

char* trim(char* p){   //trims all the spaces 
    int i=0;
    for(int c=0; c<strlen(p); c++){
        if(p[c]!=' ') temp[i++] = p[c];
    }
    temp[i] = '\0';
    return temp;
}

void execute_c_minus_minus(char *code){
    char *token = strtok(code, ";{"); //token are made if ; or { is found
    int to_run = 1; //if condition ke liye
    while(token!=NULL){
        char *pflower = strstr(token, "}"); //checks for } token
        if(pflower){
            to_run=1; //if found then if is closed
            if(token+1) token = token+1;
        }   //OUT of if
        if(!to_run) {   //if the if is not satisfied then to_
            token = strtok(NULL, ";{");
            continue;
        }    
        char *p1 = strstr(token, "int ");   //finds int
        char *p3 = strstr(token, "print");  //finds print
        char *trimmed = trim(token);    //trims spaces in token
        char *p4 = strstr(trimmed, "if(");
        char *p5 = strstr(trimmed, "=");
        
        if(p1){  //executes int command
            char *t = trim(p1);
            char *p2 = strstr(t, "=");
            if(p2==NULL){
               create_variable(t+3, 0, 0);//creates variable
            }
            else{
                int j=0, i=3;
                char var_name[10];
                for(; i<strlen(t); i++){
                    if(t[i]=='=') break;
                    var_name[j++] = t[i];
                }
                var_name[j] = '\0';
                int s=evalu(t+i+1); //evaluates expression
                create_variable(var_name, 1, s);
            }
        }
        
        else if(!p4 && p5){//assignment is handled here like x=2+3
            char name[10];
            int i=0;
            for(; i<strlen(trimmed); i++){
                if(trimmed[i]=='=') break;
                name[i]=trimmed[i];
            }
            name[i]='\0';
            int val = evalu(p5+1);
            assign_variable(name, val);
        } 
        else if(p4){    //if block is manageg
            p4 = p4+3;
            char var1[10], var2[10], op[5];
            char temp[] = "><=!";
            char *pt1, *pt2;
            int m=0, j=0, k=0;
            pt1 = strpbrk(p4, temp);    //searches for any above occurrence of operators
            while(p4[m]!=pt1[0]){
                 var1[m] = p4[m];
                 m++;
            }  
            var1[m++] = '\0';      
            op[j++] = *pt1;
            pt2 = strchr(p4, '=');
            if(pt2){//if satisfied then operator has two characters
                op[j++] = '=';
                m++; //incrementing the pointer i
            }
            op[j++]='\0'; // operator
            while(p4[m]!=')') var2[k++]=p4[m++];
            var2[k] = '\0'; 
            int a = evalu(var1); //getting values
            int b = evalu(var2);
            int cond = evaluate_condition(a, op, b);
            if(!cond) to_run=0;
        }
        if(p3){
            char *t = trim(p3);     
            int num = evalu(t+5);      
            print_variable(num);//calling the print function to print the value of the expression
        }
        token = strtok(NULL, ";{");
    }
}
