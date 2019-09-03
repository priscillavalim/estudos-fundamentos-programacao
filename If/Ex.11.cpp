#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
    float sal, aum, nsal;
    clrscr();
    cout << "\nDigite o salário do funcionário:";

    if (sal <= 300)
    {
        aum = sal * 15 / 100;
        nsal = sal + sal * 15 / 100;
        cout << aum;
        cout << nsal;
    }
    else if (sal > 300 && sal <= 600)
    {
        aum = sal * 10 / 100;
        nsal = sal + sal * 10 / 100;
        cout << aum;
        cout << nsal;
    }
    else if (sal > 600 && sal <= 900)
    {
        aum = sal * 5 / 100;
        nsal = sal + sal * 5 / 100;
        cout << aum;
        cout << nsal;
    }
    else if (sal > 900)
    {
        cout << "\nNão há aumento.";
    }
    getch();
}
