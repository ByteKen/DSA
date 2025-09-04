#include <iostream>
using namespace std;

// Node class - mao ni ang mga building blocks sa atong linked list
class Node {
    public:
        int data;     // Mao ni ang value nga i-store sa node
        Node* next;   // Pointer nga nag point sa sunod nga node
        
        // Constructor para sa Node - mag initialize sa data ug i-set ang next to nullptr
        Node(int val) : data(val), next(nullptr) {}
};

// Stack class gamit ang linked list - dili fixed size kay dynamic allocation
class Stack {
    Node* head;   // Mao ni ang pointer sa top element sa stack (head sa linked list)

    public:
        // Constructor - i-initialize ang stack nga walay sulod (empty)
        Stack() {
            this->head = nullptr;  // Walay head kay wala pay elements
        }

        // I-check kung empty ba ang stack
        bool isEmpty() {
            return head == nullptr;  // Kung walay head, empty ang stack
        }

        // Mag add og new element sa top sa stack (LIFO - Last In First Out)
        void push(int new_data) {
            Node* new_node = new Node(new_data);  // Mag create og bag-ong node
            new_node->next = head;                 // Ang next sa new node kay ang current head
            head = new_node;                       // Ang new node na ang bag-ong head (top)
        }

        // Mag remove sa top element sa stack
        void pop() {
            if (isEmpty()) {
                return;  // Kung empty na, dili na mag proceed
            }

            Node* temp = head;      // I-save ang current head sa temporary pointer
            head = head->next;      // Ang head na kay ang next node
            delete temp;            // I-delete ang old head para dili mag memory leak
        }

        // Mag return sa value sa top element pero dili ni siya i-remove
        int peek() {
            if (!isEmpty()) return head->data;  // Kung naa sulod, i-return ang data sa head
            return INT_MIN;                     // Kung empty, i-return ang minimum integer value
        }
};

int main() {
    /*
        [ClassName] objectName(parameters/capacity);
        objectName.method(parameters);

        try lang japun ni dari dapita boss para ma explore nimo
    */
}