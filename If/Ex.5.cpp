#include <iostream>

int main()
{
    float num1, num2, op, media, dife, prod, divi;
    cout << "\nDigite o número 1:";
    cin >> num1;
    cout << "\nDigite o número 2:";
    cin >> num2;
    cout << "\nDigite a opção desejada (1-4):";
    cin >> op;

    media = num1 + num2 / 2;
    dife = num1 - num2;
    prod = num1 * num2;
    divi = num1 / num2;

    if (op == 1)
    {
        cout << media;
    }
    else if (op == 2)
    {
        cout << dife;
    }
    else if (op == 3)
    {
        cout << prod;
    }
    else if (op == 4 && num2 != 0)
    {
        cout << divi;
    }
    else if (op == 4 && num2 == 0)
    {
        cout << "\nO segundo número não pode ser igual a zero.";
    }
    return 0;
}