#include <iostream>
#include <string>
using namespace std;

int main()
{
    string stxt = "Hello! ";
    int ai = 16;
    int ak = 65535;    //ak = FFFFh;
    ai = ak + ai + 16; //ai = 65567;

    cout << stxt << "ai= [" << ai << "]\n";
    cout << "Press any key...";
}