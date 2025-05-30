#include <stdio.h>
#define MAX 5
int Queue[MAX];
int front = -1, rear = -1;
int isFull() {
  if ((front == (rear + 1) % MAX) || (front == 0 && rear == MAX - 1)) return 1;
  return 0;
}
int isEmpty() {
  if (front == -1) return 1;
  return 0;
}
void enQueue(int element) {
  if (isFull())
    printf("\n Queue is full!! \n");
  else {
    if (front == -1) front = 0;
    rear = (rear + 1) % MAX;
    Queue[rear] = element;
    printf("\n Inserted -> %d", element);
  }
}
int deQueue() {
  int element;
  if (isEmpty()) {
    printf(" Queue is empty !! \n");
    return (-1);
  } else {
    element = Queue[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
    else {
      front = (front + 1) % MAX;
    }
    printf(" Deleted element -> %d \n", element);
    return (element);
  }
}
void display() {
  int i;
  if (isEmpty())
    printf(" Empty Queue\n");
  else {
    printf("\n Front -> %d ", front);
    printf("\n Items -> ");
    for (i = front; i != rear; i = (i + 1) % MAX) {
      printf("%d ", Queue[i]);
    }
    printf("%d ", Queue[i]);
    printf("\n Rear -> %d \n", rear);
  }
}

int main() {
  deQueue();  // fails because front = -1
  enQueue(11);
  enQueue(12);
  enQueue(13);
  enQueue(14);
  enQueue(15);
  printf("\n");
  display();
  printf("\n");
  deQueue();
  deQueue();
  enQueue(16);
  printf("\n");
  display();

  return 0;
}
