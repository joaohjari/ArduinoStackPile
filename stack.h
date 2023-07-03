#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 10

class Stack {
private:
  int stackArray[MAX_SIZE]; // Array to store stack elements
  int top; // Index of the top element in the stack

public:
  Stack(); // Constructor
  void push(int data); // Pushes an element onto the stack
  int pop(); // Pops the top element from the stack
  bool isEmpty(); // Checks if the stack is empty
  bool isFull(); // Checks if the stack is full
};

Stack::Stack() {
  top = -1; // Initializing the top index to -1, indicating an empty stack
}

void Stack::push(int data) {
  if (!isFull()) {
    stackArray[++top] = data; // Increment top and add the element to the stack
  }
}

int Stack::pop() {
  if (!isEmpty()) {
    return stackArray[top--]; // Return the top element and decrement top
  }
  return -1; // Return -1 if stack is empty
}

bool Stack::isEmpty() {
  return top == -1; // Check if top is -1, indicating an empty stack
}

bool Stack::isFull() {
  return top == MAX_SIZE - 1; // Check if top is at the maximum index, indicating a full stack
}
#endif