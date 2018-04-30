#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector< vector<int> > m;

    vector<int> a(6, 1);

    m.push_back(a);
    m.push_back(a);
    m.push_back(a);

    for (unsigned int i = 0; i < m.size(); i++)
    {
        for (unsigned int j = 0; j < m[i].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
