#include<iostream>
#include <climits>
using namespace std;

class Queue
{
private:
    int front, rear, size;
    unsigned capacity;
    int* array;
public:
    Queue(unsigned capacity);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(int item);
    int dequeue();
    int getFront();
    int getRear();
};

Queue::Queue(unsigned capacity)
{
    this -> capacity = capacity;
    front = this -> size = 0;
    rear = capacity - 1;
    array = new int[this -> capacity];
}

Queue::~Queue()
{
    delete[] array;
}

bool Queue::isEmpty() {
    return (size == 0);
}

bool Queue::isFull() {
    return (size == capacity);
}

void Queue:: enqueue(int item) {
    if( isFull()) {
        cout<< "Queue is full" << endl;
        return;
    }

    rear = (rear + 1) % capacity;
    array[rear] = item;
    size ++;
    cout<< "Enqueue " << item <<endl;
}

// Remove an item from the queue
int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return INT_MIN;
    }
    int item = array[front];
    front = (front + 1) % capacity;
    size--;
    cout << "Dequeued " << item << endl;
    return item;
}

// Get the front item from the queue
int Queue::getFront() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return INT_MIN;
    }
    return array[front];
}

// Get the rear item from the queue
int Queue::getRear() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return INT_MIN;
    }
    return array[rear];
}

// Main function to demonstrate the Queue operations
int main() {
    Queue q(3);

    q.enqueue(1);  // Enqueue 1
    q.enqueue(2);  // Enqueue 2
    q.enqueue(3);  // Enqueue 3
    cout << q.dequeue() << endl;  // Dequeue 1, Output: 1
    cout << q.getFront() << endl;  // Output: 2
    cout << q.getRear() << endl;   // Output: 3

    return 0;
}