#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
    float preço, npreço;
    clrscr();
    cout << "\nDigite o preço do produto:";
    cin >> preço; 

    if (preço <= 50)
    {
        npreço = preço + preço*5/100;
    }
    else if (preço > 50 && preço <=100)
    {
       npreço = preço + preço*10/100;
    }
    else if (preço > 100)
    {
        npreço = preço + preço*15/100;
    }
    cout << "\nO novo preço é:" << npreço;
    if (npreço <= 80)
    {
        cout << "\nBarato";
    }
    else if (npreço > 80 && npreço <= 120)
    {
        cout << "\nNormal";
    }
    else if (npreço > 120 && npreço <= 200)
    {
        cout << "\nCaro";
    }
    else if (npreço > 200)
    {
        cout << "\nMuito caro";
    }
    getch();
}

