#include <iostream>

int main()
{
    float sal, aum;
    cout << "\nDigite o salário:";
    cin >> sal;

    aum = 500 + 500 * 30 / 100;

    if (sal < 500)
    {
        cout << "\nO salário reajustado é:" << aum;
    }
    else
    {
        cout << "\nNão haverá reajuste.";
    }
    return 0;
}
