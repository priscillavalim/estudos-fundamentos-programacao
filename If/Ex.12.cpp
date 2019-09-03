#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
    float sal, grat, valor_a_rec;
    clrscr();
    cout << "\nDigite o salário do funcionário:";
    cin >> sal;

    if (sal <= 350)
    {
        valor_a_rec = (sal - sal * 7 / 100) + 100;
        cout << valor_a_rec;
    }
    else if (sal > 350 && sal <= 600)
    {
        valor_a_rec = (sal - sal * 7 / 100) + 75;
        cout << valor_a_rec;
    }
    else if (sal > 600 && sal <= 900)
    {
        valor_a_rec = (sal - sal * 7 / 100) + 50;
        cout << valor_a_rec;
    }
    else if (sal > 900)
    {
        valor_a_rec = (sal - sal * 7 / 100) + 35;
        cout << valor_a_rec;
    }
    getch();
}