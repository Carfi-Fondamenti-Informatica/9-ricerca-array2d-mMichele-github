#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char e[10][20], n[20];

    for(int i=0; i<10;i++)
    {
        for(int j=0; j<20; j++)
        {
            e[i][j]= ' ';
        }
    }
    for(int j=0; j<20; j++)
    {
        n[j]= ' ';
    }

    for(int i=0; i<10;i++)
    {
        cin >> e[i];
    }
    cin >> n;

    int verifica = funzioneRicerca(e, n);
    if(verifica >=0)
    {
        cout << verifica;
    }
    else
    {
        cout << "non presente";
    }

    return 0;
}
