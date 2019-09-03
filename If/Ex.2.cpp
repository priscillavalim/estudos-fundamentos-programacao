#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
    float nota1, nota2, media;
    clrscr();
    cout << "\nDigite a nota 1:";
    cin >> nota1;
    cout << "\nDigite a nota 2:";
    cin >> nota2;

    media = nota1 + nota2 / 2;
    if (media >= 7)
    {
        cout << "\nAprovado";
    }

    else if (media < 7 && media <= 4)
    {
        cout << "\nExame";
    }

    else
    {
        cout << "\nReprovado";
    }
    getch();
}