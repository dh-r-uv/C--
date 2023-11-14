

int perform_arithmetic(int x, char op, int y){  //performs arithmetic operation
    switch(op){
        case '+':
            return x+y;
        case '-':
            return x-y;   
        case '*':
            return x*y;
        case '/':
            return x/y;     
        default:
            return 0;
            break;                   
    }
}