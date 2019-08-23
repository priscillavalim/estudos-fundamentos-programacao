#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{float num, quad, cubo, r2, r3; 
clrscr();
cout << "\n Digite um numero:";
cin >> num; 
quad = pow(num, 2);
cubo = pow(num. 3);
r2 = sqrt(num);
r3 = exp(log(num) * 1/3);
cout << "\n O numero ao quadrado é:" << quad;
cout << "\n O numero ao cubo é:" << cubo;
cout << "\n A raiz quadrada do numero é: " << r2;
cout << "\n A raiz cubica do numero é: " << r3;
getch();
} 