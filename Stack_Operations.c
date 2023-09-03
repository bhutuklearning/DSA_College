#include<stdio.h>
#include<stdlib.h>

int top = -1;
#define Maxsize 5

//push
void push(int stack[]) {
    int item;
    if(top == (Maxsize-1)){
        printf("Stack Overflow.\n");
    }
    else{
        printf("Enter the element to be pushed.\n");
        scanf("%d",&item);
        top++;
        stack[top] = item;
    }
}

//peek or display
void display(int stack[]) {
    if(top == -1){
        printf("Stack is empty.\n");
    }
    else{
        printf("The elements of the stack are :\n");
        for(int i=0;i<=top;i++) {
            printf("%d ",stack[i]);
        }
    }
}

//pop
int pop(int stack[]) {
    int item;
    if(top == -1) {
        printf("Stack is empty or stack underflow.\n");
    }
    else{
        item = stack[top];
        top--;
    }
    return item;
}

int main() {
 int stack[Maxsize];
 int options;
 while(1){
    printf("\nEnter 1 for push, 2 for peek/display, 3 for pop and 0 for exit.\n");
    scanf("%d", &options);

    switch(options) {
        case 1: push(stack);
                display(stack);
                break;
        case 2 : display(stack);
                 break;
        case 3 : printf("The element which has been popped out is %d.\n", pop(stack));
                 display(stack);
                 break;
        case 0 : exit(0);
                 break;
        default: printf("Wrong Input.\n");
                 break;
    }
 }
    return 0;
}