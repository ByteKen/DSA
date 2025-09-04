#include <iostream>
using namespace std;

class Stack {
    int top, cap;
    int *array;

    public:
        Stack(int cap) { 
            /* Constructor mao ni siya ang mag initalize sa stack like 
            for example before ka maka proceed sa pag push or pop sa stack is kailangan
            pa i initialize ang capacity sa stack kay expected sa array ani na code kay
            naka fixed sized array siya so kinahanglan mahibaw-an sa stack kung pila
            ang capacity sa stack
            */
            this->cap = cap;
            top = -1; // Diba pag array kay mag sugod sa 0 ang pag ihap sa elements so mao ning nag -1 para pag mag add og elements mag sugod sa 0
            array = new int[cap];
        }

        ~Stack() {
            /* 
            Destructor mao ni siya ang mag free sa memory nga gi allocate sa constructor
            kay possible nga naay memory leaks kung wala ni siya
            */
            delete[] array;
        }

        bool push(int x) {
            if (top >= cap - 1) {
                cout << "Stack Overflow" << endl;
                return false;
            } // I check sa una kung puno na ba ang stack
            array[++top] = x; // Kung dili pa puno ang stack i increment ang top ug i add ang new element sa array
            return true;
        }

        int pop() {
            if (top < 0) {
                cout << "Stack Underflow" << endl;
                return 0;
            } // I check sa una kung empty ba ang stack

            return array[top--]; // I return ang top element unya i decrement ang top
        }

        int peek() {
            if (top < 0) {
                cout << "Stack is Empty" << endl;
                return 0;
            }

            return array[top]; // I return lang ang top element na di na kailangan i manipulate
        }

        bool isEmpty() {
            return top < 0;
        }
};

int main() {
   /*
   TO BE CONTINUE HAHAHAHAHAHA: 
    [ClassName] objectName(parameters/capacity);
    objectName.method(parameters);

    para ma try tryan sad nimo boss
   */
}