#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        // a descriptor file was passed in
        ifstream file;
        string line;
        char* filename = argv[1];
        // shapes variables
        Screen t;
        vector<FiguraGeometrica*> shapes;
        // open the file passed in
        file.open(filename);
        // Check if correctly opened
        if (!file.is_open())
        {
            cout << "ERROR READING FILE!" << endl;
            exit(-1);
        }

        while (file.good())
        {
            getline(file, line);
            if (file.good())
            {
                string cmd;
                stringstream sstream(line);
                sstream >> cmd;

                if (cmd.compare("dim") == 0)
                {
                    int x, y;
                    sstream >> x >> y;
                    t = Screen(x, y);
                }
                else if (cmd.compare("brush") == 0)
                {
                    char b;
                    sstream >> b;
                    t.setBrush(b);
                }
                else if (cmd.compare("line") == 0)
                {
                    int x0, y0, x1, y1;
                    sstream >> x0 >> y0 >> x1 >> y1;
                    shapes.push_back(new Reta(x0, y0, x1, y1));
                }
                else if (cmd.compare("rectangle") == 0)
                {
                    int x0, y0, largura, altura;
                    sstream >> x0 >> y0 >> largura >> altura;
                    shapes.push_back(new Retangulo(x0, y0, largura, altura));
                }
                else if (cmd.compare("circle") == 0)
                {
                    int x0, y0, radius, fillmode;
                    sstream >> x0 >> y0 >> radius >> fillmode;
                    bool fill = (fillmode == 0) ? false : true;
                    shapes.push_back(new Circulo(x0, y0, radius, fill));
                }
            }
        }

        vector<FiguraGeometrica*>::iterator it;
        for (it = shapes.begin(); it != shapes.end(); it++)
        {
            (*it)->draw(t);
        }

        cout << t << endl;
        return 0;
    }

    Screen t(20, 20);
    t.setBrush('@');

    Reta ret(0, 0, 15, 5);
    //ret.draw(t);

    Circulo cir(10, 10, 10, true);
    cir.draw(t);

    cout << t << endl;
    return 0;
}
