#include <iostream>
using namespace std;

struct Node {
    int data;    // Value nga gi-store sa node
    Node* next;  // Pointer sa sunod nga node
    Node(int v) : data(v), next(NULL) {}  // Constructor para sa node
};

// Queue class gamit linked list - dynamic size (dili fixed)
class Queue {
    private:
        Node* front;  // Pointer sa front node (unahan sa queue)
        Node* rear;   // Pointer sa rear node (katapusan sa queue)
    
    public:
        // Constructor - mag initialize sa empty queue
        Queue() {
            front = rear = nullptr;  // Initially walay nodes
        }

        // Check kung empty ba ang queue
        bool isEmpty() {
            return front == nullptr;  // True kung walay front node
        } 

        int getFront() { // I return ra niya ang value sa front node
            if (isEmpty()) {
                cout << "Queue is empty" << endl;
                return 0;
            }
            return front->data;
        }

        int getRear() { // I return ra niya ang value sa rear node
            if (isEmpty()) {
                cout << "Queue is empty" << endl;
                return 0;
            }
            return rear->data;
        }

        // Mag add og element sa rear (enqueue operation)
        void enqueue(int new_data) {
            Node* new_node = new Node(new_data);  // Create bag-ong node
            
            if (isEmpty()) {
                front = rear = new_node;  // Kung empty, ang new node kay front ug rear
                return;
            }
            
            rear->next = new_node;  // I-connect ang current rear sa new node
            rear = new_node;        // Ang new node na ang bag-ong rear
        }

        // Mag remove og element sa front (dequeue operation)
        void dequeue() {
            if (isEmpty()) {
                return;  // Dili mag proceed kung empty
            }
            
            Node* temp = front;      // Save ang current front
            front = front->next;     // Move ang front sa next node
            
            if (front == nullptr) rear = nullptr;  // Kung naging empty, reset rear
            delete temp;             // I-delete ang old front node
        }

        // Display tanan elements sa queue
        void printQueue() {
            if (isEmpty()) {
                cout << "Queue is empty" << endl; 
                return;
            }
            
            Node* temp = front;      // Start sa front node
            cout << "Current Queue: ";
            while (temp != nullptr) {
                cout << temp->data << " ";  // Print ang data sa kada node
                temp = temp->next;          // Move sa next node
            }
            cout << endl;
        }
};

int main() {
    /*
        [ClassName] objectName;
        objectName.method(parameters);

        try lang japun ni dari dapita boss para ma explore nimo
    */
   return 0;

}
