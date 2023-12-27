/* Map data structure
Data is stored in form of key value form
All keys are unique and one key only points to one value
Data arranged in sorted manner and in unordered map the data is random */

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "King";
    m[2] = "Slayer";
    m[3] = "Uttu";

    m.insert({4, "Supremecy"});

    for ( auto i:m){
        cout << i.first << endl;
    }

    cout << "Finding 3 : " << m.count(3) <<endl;
}