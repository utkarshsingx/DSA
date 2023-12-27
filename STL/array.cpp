#include <iostream>
#include <array>

using namespace std;
int main()
{
    int b[3] = {1, 2, 3};
    array<int, 3> a = {1, 2, 3};

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "The size of array is : " << size << endl;
    cout << "Element at 2nd Index : " << a.at(2) << endl;
    cout << "Empty or not : " << a.empty() << endl;
    cout << "Front or first element : " << a.front() << endl;
    cout << "Back or last element : " << a.back() << endl;
}
