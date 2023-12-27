/* Stack is based on last in first out LIFO 
e.g. books kept on shelf is taken in manner of uper wala pehle uthate naa ki neeche wala */

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("King");
    s.push("Slayer");
    s.push("Uttu");

    cout << "Top element of stack s is : " << s.top() << endl;

    s.pop(); // pops out top element i.e uttu here
    cout << "Top element of stack s is : " << s.top() << endl;

    cout << "Size of stack :" << s.size() << endl;
}