#include <iostream>

int main()
{
    float num1, num2;
    cout << "\nDigite o número 1:"; 
    cin >> num1; 
    cout << "\nDigite o número 2:"; 
    cin >> num2; 

    if (num1< num2)
    {
        cout << num1; 
    }
    else if (num2 < num1)
    {
        cout << num2;
    }
    return 0;
}

