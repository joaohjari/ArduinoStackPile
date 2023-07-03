#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 10

class Queue {
private:
  int queueArray[MAX_SIZE]; // Array to store queue elements
  int front; // Index of the front element in the queue
  int rear; // Index of the rear element in the queue
  int itemCount; // Number of elements in the queue

public:
  Queue(); // Constructor
  void enqueue(int data); // Adds an element to the queue
  int dequeue(); // Removes and returns the front element from the queue
  bool isEmpty(); // Checks if the queue is empty
  bool isFull(); // Checks if the queue is full
};

Queue::Queue() {
    //define our privates variables    
    front = 0;
    rear = -1;
    itemCount = 0;
}


Queue::Queue() {
  front = 0; // Initializing front to 0
  rear = -1; // Initializing rear to -1, indicating an empty queue
  itemCount = 0; // Initializing the number of elements to 0
}

void Queue::enqueue(int data) {
  if (!isFull()) {
    if (rear == MAX_SIZE - 1) {
      rear = -1; // Wrap around to the beginning of the array if rear is at the maximum index
    }
    queueArray[++rear] = data; // Increment rear and add the element to the queue
    itemCount++; // Increment the number of elements in the queue
  }
}

int Queue::dequeue() {
  if (!isEmpty()) {
    int data = queueArray[front++]; // Get the front element and increment front
    if (front == MAX_SIZE) {
      front = 0; // Wrap around to the beginning of the array if front is at the maximum index
    }
    itemCount--; // Decrement the number of elements in the queue
    return data; // Return the front element
  }
  return -1; // Return -1 if queue is empty
}

bool Queue::isEmpty() {
  return itemCount == 0; // Check if the number of elements is 0, indicating an empty queue
}

bool Queue::isFull() {
  return itemCount == MAX_SIZE; // Check if the number of elements is at the maximum size, indicating a full queue
}
#endif