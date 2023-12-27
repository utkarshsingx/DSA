/* Queue is based on First come first serve basis FIFO
e.g. shaadi ki plates pehle usko milti hai jo line mai sbse aage khada rehta */

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;
    q.push("King");
    q.push("Uttu");
    q.push("Supremecy");

    cout << "First element : " << q.front() << endl;
    q.pop();

    cout << "First element after pop: " << q.front() << endl;
    cout << "Size after pop : " << q.size() << endl;

}