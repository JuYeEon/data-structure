#include <stdio.h>

#define MAX_SIZE 100

typedef struct{
    int arr[MAX_SIZE];
    int top;
}Stack;

void intStack(Stack* s){
    s->top = -1;
}

int isEmpty(Stack* s){
    return (s->top == -1);
}

int isFull(Stack* s){
    return (s->top == MAX_SIZE - 1);
}

int push(Stack* s, int data){
    if(isFull(s)){
        printf("Stack Overflow!");
        return -1;
    }
    s->arr[++(s->top)] = data;
}

int pop(Stack* s){
    if(isEmpty(s)){
        printf("Stack Underrflow!");
        return -1;
    }
    return s->arr[(s->top)--];
}

int main(){
    Stack s;
    intStack(&s);
    
    for(int i = 0; i < 101; i++){
        push(&s, 1);
    }
}
