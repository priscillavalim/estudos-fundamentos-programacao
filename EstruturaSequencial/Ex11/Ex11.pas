PROGRAM EX3;
USES CRT;
VAR  num, quad, cubo, r2, r3; 
BEGIN
CLRSCR;
WRITELN ('Digite um número:');
READLN(num);
quad := SQR(num);
cubo := EXP(3 * LN(num)); 
r2 := SQRT(num); 
r3 := EXP(1/3 * LN(num)); 
WRITELN('Número ao quadrado  = ',quad:5:2);
WRITELN('Número ao cubo  = ',cubo:5:2);
WRITELN('Raiz quadrada do número  = ',r2:5:2);
WRITELN('Raiz cubica do número  = ',r3:5:2);