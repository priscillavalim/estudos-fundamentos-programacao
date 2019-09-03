#include <iostream>

int main()
{
    float sal, aum1, aum2;
    cout << "\nDigite o salário:";
    cin >> sal;

    aum1 = 300 + 300 * 35 / 100;
    aum2 = 300 + 300 * 15 / 100;

    if (sal <= 300)
    {
        cout << "\nO salário reajustado é:" << aum1;
    }
    else if (sal > 300)
    {
        cout << "\nO salário reajustado é:" << aum2;
    }
    return 0;
}