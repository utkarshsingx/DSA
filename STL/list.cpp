#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    cout << " Elements in n are: " << endl;
    list<int> n(5, 100);
    n.push_front(2);

    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());

    cout << "After erase :" << endl;

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list: " << l.size() << endl;
}