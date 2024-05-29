#include <iostream>
#define ERROR -69968
using namespace std;

typedef struct Stack {
    int size;
    int top;
    int *pta;
} Stack;

bool isEmpty(Stack st) {
    return st.top == -1;
}

bool isFull(Stack st) {
    return st.top == st.size - 1;
}

void initializeStack(Stack *st) {
    cout << "Enter the size of Stack: "; 
    cin >> st->size;
    st->pta = new int[st->size];
    st->top = -1;
}

int push(Stack *st, int element) {
    if (isFull(*st)) {
        cout << endl << "Stack overflow" << endl;
        return ERROR;
    }
    st->pta[++st->top] = element;
    return element; 
}

int pop(Stack *st) {
    if (isEmpty(*st)) {
        cout << endl << "Stack underflow" << endl;
        return ERROR;
    }
    return st->pta[st->top--];
}

int peek(Stack st, int position) {
    if (st.top - position + 1 < 0) {
        cout << "Invalid position" << endl;
        return ERROR;
    }
    return st.pta[st.top - position + 1];
}

int stackTop(Stack st) {
    if (isEmpty(st)) {
        cout << endl << "Stack underflow" << endl;
        return ERROR;
    }
    return st.pta[st.top];
}

void emptyStack(Stack *st) {
    if (st->pta != NULL) {
        delete[] st->pta;
        st->pta = NULL;
        st->size = 0;
        st->top = -1;
    }
}

int main() {
    Stack stk;
    initializeStack(&stk);

    int choice;

    do {
        cout << endl << "Enter the number of operation you want to perform: -" << endl;
        cout << "0) Terminate the Program" << endl;
        cout << "1) Push" << endl;
        cout << "2) Pop" << endl;
        cout << "3) Peek" << endl;
        cout << "4) Top of Stack" << endl;
        cout << "5) Check if Stack is empty" << endl;
        cout << "6) Check if Stack is full" << endl;
        cout << "7) Empty complete Stack" << endl;

        cin >> choice;

        switch (choice) {
            case 0:
                break;

            case 1: {
                int element;
                cout << "Enter the element to push into Stack: ";
                cin >> element;
                int check = push(&stk, element);
                if (check == ERROR) {
                    cout << endl << element << " not pushed" << endl;
                } else {
                    cout << endl << element << " pushed" << endl;
                }
                break;
            }

            case 2: {
                int popped = pop(&stk);
                if (popped == ERROR) {
                    cout << endl << "not popped" << endl;
                } else {
                    cout << endl << popped << " popped" << endl;
                }
                break;
            }

            case 3: {
                int position;
                cout << "Enter the position to be peeked into Stack: ";
                cin >> position;
                int peeked = peek(stk, position);
                if (peeked == ERROR) {
                    cout << endl << " not peeked" << endl;
                } else {
                    cout << endl << peeked << " peeked" << endl;
                }
                break;
            }

            case 4: {
                int tos = stackTop(stk);
                if (tos == ERROR) {
                    cout << endl << "Top of Stack not found" << endl;
                } else {
                    cout << endl << "Top of Stack is: " << tos << endl;
                }
                break;
            }

            case 5:
                if (isEmpty(stk)) {
                    cout << endl << "Stack is empty" << endl;
                } else {
                    cout << endl << "Stack is not empty" << endl;
                }
                break;

            case 6:
                if (isFull(stk)) {
                    cout << endl << "Stack is full" << endl;
                } else {
                    cout << endl << "Stack is not full" << endl;
                }
                break;

            case 7: {
                while (!isEmpty(stk)) {
                    int popped = pop(&stk);
                    if (popped == ERROR) {
                        cout << endl << " not popped" << endl;
                    } else {
                        cout << endl << popped << " popped" << endl;
                    }
                }
                break;
            }

            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (choice != 0);

    emptyStack(&stk); // Clean up before exiting
    return 0;
}
