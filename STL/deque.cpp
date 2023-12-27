#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }

    // 2, 1 will be output

    // d.pop_back();

    // With 2, 1 as last output now with pop back 1 will be pop back

    cout << endl;

    // 2 will remain as output

    // d.pop_front() will pop 2 and give output as 1 as it will remain

    cout << "Print First index is : " << d.at(1) << endl;

    d.push_back(3);
    d.push_front(4);

    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "Print front element:" << d.front() << endl;
    cout << "Print last element:" << d.back() << endl;
    cout << "Print empty or not :" << d.empty() << endl;



    d.erase(d.begin(), d.begin() + 1); // deletes the first element of the deque ( 0 index se 1st index tak)

    cout << " After Erase " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    
}