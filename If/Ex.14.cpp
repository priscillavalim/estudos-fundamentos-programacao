#include <iostream>

int main()
{
    float salario, nsalario;
    cout << "\nDigite o salário do funcionário:";
    cin >> salario;

    if (salario <= 300)
    {
        nsalario = salario + salario * 50 / 100;
        cout << nsalario;
    }
    else if (salario > 300 && salario <= 500)
    {
        nsalario = salario + salario * 40 / 100;
        cout << nsalario;
    }
    else if (salario > 500 && salario <= 700)
    {
        nsalario = salario + salario * 30 / 100;
        cout << nsalario;
    }
    else if (salario > 700 && salario <= 800)
    {
        nsalario = salario + salario * 20 / 100;
        cout << nsalario;
    }
    else if (salario > 800 && salario <= 1000)
    {
        nsalario = salario + salario * 10 / 100;
        cout << nsalario;
    }
    else if (salario > 1000)
    {
        nsalario = salario + salario * 5 / 100;
        cout << nsalario;
    }
    return 0;