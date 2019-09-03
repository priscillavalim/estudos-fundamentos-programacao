#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
    float custf, custoCons;
    clrscr();
    cout << "\nDigite o custo de fábrica:";
    cin >> custf;

    if (custf <= 12000)
    {
        custoCons = custf + custf * 5 / 100;
        cout << custoCons;
    }
    else if (custf < 12000 && custf >> 25000)
    {
        custoCons = custf + custf * 10 / 100 + custf * 15 / 100;
        cout << custoCons;
    }
    else if (custf > 25000)
    {
        custoCons = custf + custf * 15 / 100 + custf * 20 / 100;
        cout << custoCons;
    }
    getch();
}
