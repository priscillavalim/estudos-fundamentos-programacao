#include <iostream>

using namespace std;

int main()
{
    float preco, npreco;
   
    cout << "\nDigite o preço do produto:";
    cin >> preco; 

    if (preco <= 50)
    {
        npreco = preco + preco*5/100;
    }
    else if (preco > 50 && preco <=100)
    {
       npreco = preco + preco*10/100;
    }
    else if (preco > 100)
    {
        npreco = preco + preco*15/100;
    }
    cout << "\nO novo preço é:" << npreco;
    if (npreco <= 80)
    {
        cout << "\nBarato";
    }
    else if (npreco > 80 && npreco <= 120)
    {
        cout << "\nNormal";
    }
    else if (npreco > 120 && npreco <= 200)
    {
        cout << "\nCaro";
    }
    else if (npreco > 200)
    {
        cout << "\nMuito caro";
    }

    return 0;
}
