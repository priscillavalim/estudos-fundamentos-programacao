#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
    float num1, num2, op, media, dife, prod;
    clrscr();
    cout << "\nDigite o número 1:";
    cin >> num1;
    cout << "\nDigite o número 2:";
    cin >> num2;
    cout << "\nDigite a opção desejada";
    cin >> op;

    media = num1 + num2 / 2;
    dife = num1 - num2;
    prod = num1 * num2;

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
    else
    {
        cout << "\nOpção inválida.";
    }
    getch();
}