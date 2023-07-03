#include "stack.h"
#include "queue.h"

Stack myStack; // Create an instance of the Stack class named myStack
Queue myQueue; // Create an instance of the Queue class named myQueue

void setup() {
  Serial.begin(9600); // Initialize the serial communication

  // Example of using the stack
  myStack.push(5); // Push the value 5 onto the stack
  myStack.push(10); // Push the value 10 onto the stack
  myStack.push(15); // Push the value 15 onto the stack
  int poppedItem = myStack.pop(); // Pop the top item from the stack and store it in poppedItem
  Serial.print("Popped item from stack: "); // Print a message
  Serial.println(poppedItem); // Print the popped item

  // Example of using the queue
  myQueue.enqueue(2); // Enqueue the value 2 into the queue
  myQueue.enqueue(4); // Enqueue the value 4 into the queue
  myQueue.enqueue(6); // Enqueue the value 6 into the queue
  int dequeuedItem = myQueue.dequeue(); // Dequeue the front item from the queue and store it in dequeuedItem
  Serial.print("Dequeued item from queue: "); // Print a message
  Serial.println(dequeuedItem); // Print the dequeued item
}

void loop() {
  // Your main code here
}
 