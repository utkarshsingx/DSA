#include <iostream>
#include <queue>

using namespace std;

int main()
{

    // max-heap - default priority queue
    priority_queue<int> maxi;

    // min-heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n = maxi.size();
    cout << " Elements in maxi are :" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    cout << "Elements in mini are :" << endl;

    mini.push(3);
    mini.push(1);
    mini.push(2);
    mini.push(0);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
}