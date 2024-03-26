#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

// Define the stack structure
typedef struct {
    double data[MAX_STACK_SIZE];
    int top;
} Stack;

// Initialize the stack
void init_stack(Stack *stack) {
    stack->top = -1;
}

// Check if the stack is empty
int is_empty(Stack *stack) {
    return stack->top == -1;
}

// Check if the stack is full
int is_full(Stack *stack) {
    return stack->top == MAX_STACK_SIZE - 1;
}

// Push a value onto the stack
void push(Stack *stack, double value) {
    if (is_full(stack)) {
        fprintf(stderr, "Error: stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->data[++stack->top] = value;
}

// Pop a value from the stack
double pop(Stack *stack) {
    if (is_empty(stack)) {
        fprintf(stderr, "Error: stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->data[stack->top--];
}

// Evaluate an arithmetic expression
double eval_expr(const char *expr) {
    Stack stack;
    init_stack(&stack);
    double num;
    char op;
    int i;

    // Loop through each character in the expression
    for (i = 0; expr[i] != '\0'; i++) {
        // Check if the character is a digit
        if (isdigit(expr[i])) {
            // Convert the digit to a number and push it onto the stack
            sscanf(expr + i, "%lf", &num);
            push(&stack, num);
            i += (int)(log10(num)) + 1; // Skip the remaining digits
        } else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
            // Pop the top two values from the stack
            double b = pop(&stack);
            double a = pop(&stack);

            // Perform the arithmetic operation and push the result onto the stack
            switch (expr[i]) {
                case '+':
                    push(&stack, a + b);
                    break;
                case '-':
                    push(&stack, a - b);
                    break;
                case '*':
                    push(&stack, a * b);
                    break;
                case '/':
                    push(&stack, a / b);
                    break;
            }
        }
    }

    // The final result should be the only value left on the stack
    if (stack.top != 0) {
        fprintf(stderr, "Error: invalid expression\n");
        exit(EXIT_FAILURE);
    }

    return pop(&stack);
}

// Main function
int main() {
    const char *expr = "3.14 * 2 + 1.618";
    printf("Evaluating %s: %.4f\n", expr, eval_expr(expr));
    return 0;
}