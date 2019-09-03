#include <iostream>

int main()
{
    float nota1, nota2, media;
    cout << "\nDigite a nota 1:";
    cin >> nota1;
    cout << "\nDigite a nota 2:";
    cin >> nota2; 

    media = nota1 + nota2/2; 
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
    return 0;
}
