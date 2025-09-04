#include <iostream>
using namespace std;

// Circular Queue - Fixed size nga queue gamit array
class Queue {
    private:
        int *arr;        // Dynamic array para sa storage sa elements
        int front, size; // front - index sa una nga element, size - pila ka elements
        int capacity;    // Maximum nga capacity sa queue

    public:
        // Constructor - mag initialize sa queue
        Queue(int capacity) {
            arr = new int[capacity];    // Mag allocate og memory
            this->capacity = capacity;  // Set ang max capacity
            size = 0;                   // Initially walay elements
            front = 0;                  // Front nag start sa 0
        }

        // Check kung empty ba ang queue
        bool isEmpty() {
            return size == 0;  // True kung walay elements
        }

        // Check kung full na ba ang queue
        bool isFull() {
            return size == capacity;  // True kung equal na sa max capacity
        }

        // Kuhaon ang front element (dili ma remove)
        int getFront() {
            if (isEmpty()) 
                return -1;      // Return -1 kung empty
            return arr[front];  // Return ang front element
        }

        // Kuhaon ang rear element (dili ma remove)
        int getRear() {
            if (isEmpty())
                return -1;      // Return -1 kung empty
            int rear = (front + size - 1) % capacity;  // Calculate rear position
            return arr[rear];   // Return ang rear element
        }

        // Mag add og element sa rear (enqueue operation)
        void enqueue(int x) {
            if (isFull()) 
                return;         // Dili mag proceed kung full na
            int rear = (front + size) % capacity;  // Calculate rear position
            arr[rear] = x;      // I assign ang value
            size++;             // Increment ang size
        }

        // Mag remove og element sa front (dequeue operation)
        int dequeue() {
            if (isEmpty())
                return -1;      // Return -1 kung empty
            int res = arr[front];               // Save ang front element
            front = (front + 1) % capacity;    // Move front sa next position
            size--;                             // Decrement ang size
            return res;         // Return ang gi remove nga element
        }

        // Display tanan elements sa queue
        void display() {
            if (isEmpty()) {
                cout << "[empty queue]\n";  
                return;
            }
            cout << "Queue (front -> rear): ";
            for (int i = 0; i < size; i++) {
                cout << arr[(front + i) % capacity] << " "; 
            }
            cout << "\n";
        }
};

int main() {
    /*
        [ClassName] objectName(parameters/capacity);
        objectName.method(parameters);

        try lang japun ni dari dapita boss para ma explore nimo
    */
   return 0;
}