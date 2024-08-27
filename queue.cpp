#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Maximum size of the queue

struct Queue {
    int front, rear;
    int arr[MAX];
};

// Function to initialize the queue
void initializeQueue(struct Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return queue->front == -1;
}

// Function to check if the queue is full
int isFull(struct Queue* queue) {
    return queue->rear == MAX - 1;
}

// Function to enqueue an element
void enqueue(struct Queue* queue, int data) {
    if (isFull(queue)) {
        printf("Queue overflow\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0;
    }
    queue->arr[++queue->rear] = data;
}

// Function to dequeue an element
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow\n");
        return -1;
    }
    int data = queue->arr[queue->front];
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1; // Reset queue if it's now empty
    } else {
        queue->front++;
    }
    return data;
}

// Function to peek the front element of the queue
int peek(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue->arr[queue->front];
}

// Function to display the queue
void displayQueue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are: ");
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d ", queue->arr[i]);
    }
    printf("\n");
}

// Main function to test the queue operations
int main() {
    struct Queue queue;
    initializeQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("After enqueuing elements: ");
    displayQueue(&queue);

    printf("Front element is: %d\n", peek(&queue));

    printf("Dequeued element is: %d\n", dequeue(&queue));

    printf("After dequeuing an element: ");
    displayQueue(&queue);

    return 0;
}

