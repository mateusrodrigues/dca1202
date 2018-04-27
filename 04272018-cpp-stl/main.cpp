#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator vi;
    vector<int>::reverse_iterator ri;

    for (unsigned int i = 0; i < 10; i++)
    {
        v.push_back(rand() % 50 + 1);
    }

    for (vi = v.begin(); vi != v.end(); vi++)
    {
        cout << *vi << ", ";
    }
    cout << endl;
    for (ri = v.rbegin(); ri != v.rend(); ri++)
    {
        cout << *ri << ", ";
    }
    cout << endl;

    vi = find(v.begin(), v.end(), 37);
    cout << "*vi = " << *vi << endl;
    v.erase(vi);

    for (unsigned int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ", ";
    }
    cout << endl;

    return 0;
}
