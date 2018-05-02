#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    ifstream fin;
    string s;

    fin.open("/home/mateus/Developer/Projects/dca1202/05022018-cpp-stringstream/cmd.txt");
    while (fin.good())
    {
        getline(fin, s);
        if (fin.good())
        {
            string cmd;
            stringstream sstream(s);
            sstream >> cmd;

            if (cmd.compare("dim") == 0)
            {
                float x, y;
                sstream >> x >> y;
                cout << "nr = " << x << endl;
                cout << "nc = " << y << endl;
            }
            else if (cmd.compare("brush") == 0)
            {
                char b;
                sstream >> b;
                cout << "brush = " << b << endl;
            }

            cout << cmd << endl;
        }
    }

    return 0;
}
