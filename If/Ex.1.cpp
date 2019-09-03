#include <iostream>

int main()
{
    float nota1, nota2, nota3, nota4, media;
    
    cout << "\nDigite a nota 1:";
    cin >> nota1;
    cout << "\nDigite a nota 2:";
    cin >> nota2; 
    cout << "\nDigite a nota 3:"; 
    cin>> nota3; 
    cout << "\nDigite a nota 4:"; 
    cin >> nota4; 

    media = nota1 + nota2 + nota3 + nota4/ 4; 

    cout << "\nA média aritimética das notas é:" << media; 

    if (media >= 7)
    {
        cout << "\nAprovado"; 

    }
    return 0;

}