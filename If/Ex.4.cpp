#include <iostream.h>
#include <conio.h>

void main()
{
    float num1, num2, num3;
    clrscr();
    cout << "\nDigite o número 1:";
    cin >> num1;
    cout << "\nDigite o número 2:";
    cin >> num2;
    cout << "\nDigite o número3:";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout >> num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout >> num2;
    }
    else if (num3 > num2 && num3 > num1)
    {
        cout >> num3;
    }
    getch();
}