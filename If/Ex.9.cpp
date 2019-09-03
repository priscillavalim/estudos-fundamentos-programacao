#include <iostream>

int main()
{
    float saldo, cred1, cred2, cred3, cred4; 
    cout << "\nDigite o salário:";
    cin >> saldo;

    cred1 = saldo*30/100;
    cred2 = saldo*25/100;
    cred3 = saldo*20/100;
    cred4 = saldo*10/100;

    if (saldo < 400)
    {
        cout << "\nO crédito concedido é:" << cred1;
    }
    else if (saldo >= 400 && saldo > 300)
    {
        cout << "\nO crédito concedido é:" << cred2;
    }
    else if (saldo <= 300 && saldo > 200)
    {
        cout << "\nO crédito concedido é:" << cred3;
    }
    else if (saldo <= 200)
    {
        cout << "\nO crédito concedido é:" << cred4; 
    }
    return 0;
}

