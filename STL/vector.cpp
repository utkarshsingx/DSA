#include <iostream>
#include <vector>

using namespace std;

/* Size btata hai kitna element pada hai
Capacity batata hai kitne elements k liye space pada hai */

int main()
{
    vector<int> v;
    cout << "Size :" << v.size() << endl;
    cout << "Capacity :" << v.capacity() << endl;

    v.push_back(1);
    cout << "Size :" << v.size() << endl;
    cout << "Capacity :" << v.capacity() << endl;

    v.push_back(2);
    cout << "Size :" << v.size() << endl;
    cout << "Capacity :" << v.capacity() << endl;

    v.push_back(3);
    cout << "Size :" << v.size() << endl;
    cout << "Capacity :" << v.capacity() << endl;
    
    cout << "Element at 2nd Index : " << v.at(2) << endl;

    cout << "Front element of vector : " << v.front() << endl;
    cout << "Back element of vector : " << v.back() << endl;

    cout << "Before pop" << endl;
    for ( int i:v ){
        cout << i << " ";
    } cout << endl;

    v.pop_back();

    cout <<"After pop" <<endl;
    for ( int i:v ){
        cout << i << " ";
    } cout << endl;

// Vector ko clear krte time size 0 hoti hai capacity nhi hoti clear

v.clear();
cout << "Size of vector after clear : " << v.size() <<endl;

/* vector <int> a(5,1) This means intitialise vector a with 1 to 5 elements */

vector <int> a(5,1); 
cout << "Print vector a :"  <<endl;
for ( int i:a ){
    cout << i << " ";
}cout <<endl;

// Clone one vector to another

vector <int> last (a);
cout << "Print vector last :"  <<endl;
for ( int i:last ){
    cout << i << " ";
}cout <<endl;


}
