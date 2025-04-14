#include <iostream>

using namespace std;

class CircularQueue {
private:
    static const int SIZE = 100;
    int arr[SIZE];
    int front, rear, count;

public:
    CircularQueue() : front(0), rear(0), count(0) {}

    bool isFull() const {
        return count == SIZE;
    }

    bool isEmpty() const {
        return count == 0;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full! Cannot enqueue." << endl;
            return;
        }
        arr[rear] = value;
        rear = (rear + 1) % SIZE;
        count++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty! Cannot dequeue." << endl;
            return;
        }
        front = (front + 1) % SIZE;
        count--;
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Queue is empty! No front element." << endl;
            return -1;
        }
        return arr[front];
    }

    void display() const {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0, index = front; i < count; i++, index = (index + 1) % SIZE) {
            cout << arr[index] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    cout << "Front element: " << q.peek() << endl;

    return 0;
}
