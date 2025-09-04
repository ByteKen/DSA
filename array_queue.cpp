#include <iostream>
#include <vector>
using namespace std;

// Queue class gamit ang vector - FIFO (First In First Out) principle
class Queue {
    vector<int> q;  // Vector nga mag serve as storage sa queue elements it means dynamic ang size

    public:

        bool isEmpty() { 
            return q.empty();  // Gamiton ang built-in function sa vector
        }

        // Mag add og element sa rear/back sa queue
        void enqueue(int x) {
            q.push_back(x);  // I-add sa katapusan sa vector (rear sa queue)
        }

        // Mag remove sa element sa front sa queue
        void dequeue() {
            if (!isEmpty()) q.erase(q.begin());  // I-remove ang first element kung naay sulod
        }

        // Mag return sa front element sa queue (pero dili i-remove)
        int getFront() {
            return isEmpty() ? -1 : q.front();  // Kung empty, return -1; kung dili, return ang first element
        }

        // Mag return sa rear element sa queue (pero dili i-remove)
        int getRear() {
            return isEmpty() ? -1 : q.back();  // Kung empty, return -1; kung dili, return ang last element
        }

        int getSize() { 
            return q.size();  // Built-in function sa vector para makuha ang size
        }

        // Mag display sa tanang elements sa queue (front to rear)
        void display() {
            for (int x : q) cout << x << " ";  // Range-based for loop para print tanan elements
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
