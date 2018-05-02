#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fin;
    vector<vector<int>> matrix;
    int nr, nc;

    fin.open("/home/mateus/Developer/Projects/dca1202/05022018-flux-files02/matrix.txt");
    if (!fin.is_open())
    {
        cout << "Error!" << endl;
        exit(-1);
    }
    fin >> nr >> nc;


    matrix = vector<vector<int>>(nr, vector<int>(nc, 0));
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            fin >> matrix[i][j];
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    fin.close();

    ofstream fout;
    fout.open("/home/mateus/Developer/Projects/dca1202/05022018-flux-files02/points.txt");
    for (int i = 0; i < 30; i++)
    {
        fout << (float)(rand() % 100) / 10 << " "
             << (float)(rand() % 100) / 10 << endl;
    }
    fout.close();

    fin.open("/home/mateus/Developer/Projects/dca1202/05022018-flux-files02/points.txt");
    float x, y;
    while (fin.good())
    {
        fin >> x >> y;
        cout << "(" << x << ", " << y << ")" << endl;
    }
    fin.close();

    // For literals
    char c;
    fin.open("/home/mateus/Developer/Projects/dca1202/05022018-flux-files02/name.txt");
    fout.open("/home/mateus/Developer/Projects/dca1202/05022018-flux-files02/name_copy.txt");

    while (fin.good())
    {
        fin.get(c);
        if (fin.good())
        {
            fout.put(c);
        }
    }
    fin.close();
    fout.close();

    // For strings
    string s;
    fin.open("/home/mateus/Developer/Projects/dca1202/05022018-flux-files02/name.txt");
    while (fin.good())
    {
        getline(fin, s);
        if (fin.good())
        {
            cout << s << endl;
        }
    }

    return 0;
}
