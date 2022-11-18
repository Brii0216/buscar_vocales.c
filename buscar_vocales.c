#include <stdio.h>
#define LIM 20
#define LIM_FGETS 22

void Lector_Vocales (char string[LIM]);
//strings de C son secuencia de caracteres guardados como una matriz de caracteres terminados con un carácter nulo
int main()
{
	char string[LIM] = {'\0'}, decision;
	printf("\nBienvenido\n");
	printf("Ingrese un string de maximo 20 caraters para poder contar las vocales\n ");
	fgets(string, LIM_FGETS, stdin);
	// lee una cadena en el argumento stream de entrada y la almacena en str 
	for (int f = 0; f < LIM; f++)
	{
		if (string[f] == 10)		
		{
			string[f] = '\0';
		}
	}
	printf("El string a evaluar sera: ");
	for (int f = 0; f < LIM; f++)
	{
		printf("%c", string[f]);		
	}
	printf("\n");
	Lector_Vocales (string);
    return 0;
}

void Lector_Vocales (char string[LIM])
{
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	for (int x = 0; x < LIM; x++)
	{
		if ((string[x] == 'a') || (string[x] == 'A')) {a++;}
		if ((string[x] == 'e') || (string[x] == 'E')) {e++;}
		if ((string[x] == 'i') || (string[x] == 'i')) {i++;}
		if ((string[x] == 'o') || (string[x] == 'O')) {o++;}
		if ((string[x] == 'u') || (string[x] == 'U')) {u++;}
	}
	printf("En los caracteres ingresados se encuentran las siguientes vocales: \n");
	printf("a -> %d\n", a);
	printf("e -> %d\n", e);
	printf("i -> %d\n", i);
	printf("o -> %d\n", o);
	printf("u -> %d\n", u);
}
