/* No duplicate elements in sets
Any elements after insertion cannot be modified they can only be deleted
Sets are solwer than unordered sets*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(0); // time complexity is O(logn)
    s.insert(0);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    for (int i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();  // time-complexity is 0(1)
    it++;
    
    // it now contains index 1 so 1st index element is erased
    s.erase(it);
    for (int i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    cout << " -5 is present or not : " << s.count(-5) << endl;
    set<int>::iterator itr = s.find(5);

    cout << " Value present at itr :" << *it << endl;
}
