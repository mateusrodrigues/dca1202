#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    ifstream fin;
    int x;

    fin.open("/home/mateus/numero.txt");
    if (!fin.is_open())
    {
        exit(-1);
    }
    fout.open("/home/mateus/nome.txt");
    if (!fout.is_open())
    {
        exit(-1);
    }

    fin >> x;
    cout << "x = " << x << endl;

    fout << "Mateus Rodrigues de Morais\n";
    fout.close();

    return 0;
}
