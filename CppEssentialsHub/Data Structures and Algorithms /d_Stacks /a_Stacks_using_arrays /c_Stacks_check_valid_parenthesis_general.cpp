#include <iostream>
using namespace std;

typedef struct Stack
{
    int size;
    int top;
    char *pta;
}Stack;

bool isEmpty(Stack st) {
    return st.top == -1;
}

bool isFull(Stack st) {
    return st.top == st.size - 1;
}

void push(Stack *st, char element) 
{
    if (isFull(*st)) 
    {
        cout << endl << "Stack overflow" << endl;
        return ;
    }
    st->pta[++st->top] = element;
}

int pop(Stack *st) 
{
    if (isEmpty(*st)) 
    {
        cout << endl << "Stack underflow" << endl;
        return -1;
    }
    return st->pta[st->top--];
}

void initializeStack(Stack *st, int size) 
{
    st->size = size;
    st->pta = new char[st->size];
    st->top = -1;
}

char stackTop(Stack st) {
    if (isEmpty(st)) {
        cout << endl << "Stack underflow" << endl;
        return -1;
    }
    return st.pta[st.top];
}

bool isValid(Stack *st, char* s) { 
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] == '(') || (s[i] == '{') || (s[i] == '['))
        {
            push(st, s[i]);
        }
        if ((s[i] == ')') || (s[i] == '}') || (s[i] == ']'))
        {
            if (st->top == -1) return false;
            if ((stackTop(*st) == '(') && (s[i] == ')')) pop(st);          
            else if ((stackTop(*st) == '{') && (s[i] == '}')) pop(st);         
            else if ((stackTop(*st) == '[') && (s[i] == ']')) pop(st); 
            else return false;        
        } 
    }
    if (st->top == -1) return true;
    return false;
}

int main()
{
    char expr[] = "([a+b]*{c+d])";

    Stack stk;
    initializeStack(&stk, sizeof(expr)/sizeof(expr[0]));

    bool ans = isValid(&stk, expr);
    if (ans) cout << endl << "YES" << endl;
    else cout << endl << "NO" << endl;

    if (stk.pta != NULL) 
    {
        delete[] stk.pta;
        stk.pta = NULL;
        stk.size = 0;
        stk.top = -1;
    }

    return 0;
}
