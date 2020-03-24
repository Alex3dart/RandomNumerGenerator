
#include <cstdio>
#include <cstdlib>
#include <cstdint>

//CREAR UN NUMERO ALEATORIO ENTRE 2 VALORES//

int range(int minimo, int maximo, int& resultado)
{
	resultado = rand() % ((maximo + 1) - minimo) + minimo;

	return resultado;
}

int main()
{
	int minimo;
	int	maximo;
	int resultado = 0;

	printf("Introduzca el valor minimo: \n");
	scanf("%d", &minimo);
	printf("Introduzca el valor maximo: \n");
	scanf("%d", &maximo);

	range(minimo, maximo, resultado);

	printf("%d", resultado);

}
