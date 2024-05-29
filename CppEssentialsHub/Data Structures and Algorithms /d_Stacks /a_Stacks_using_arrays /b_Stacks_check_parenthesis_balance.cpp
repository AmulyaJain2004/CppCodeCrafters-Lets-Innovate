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

int isBalance(Stack *st, char *expr)
{
    for (int i = 0 ; expr[i]!= '\0'; i++)
    {
        if (expr[i] == '(') push(st, expr[i]);
        else if (expr[i] == ')') 
        {
            if (isEmpty(*st)) return -1;
            pop(st);
        }
    }
    if (isEmpty(*st)) return 1;
}

int main()
{
    char expr[] = "((a+b)*(c+d))";

    Stack stk;
    initializeStack(&stk, sizeof(expr)/sizeof(expr[0]));

    int ans = isBalance(&stk, expr);
    if (ans == 1) cout << endl << "YES" << endl;
    else cout << endl << "NO" << endl;

    return 0;
}
