#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
    float sal, aum;
    clrscr();
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
    getch();
}
