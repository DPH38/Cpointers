
/* Este pequeno programa é um exercício de inversão de números inteiros utilizando ponteiros */

#include <stdio.h>

int inverter(int*p, int*q) {
	
	int x = *p; // passando o valor do endereço de *p pra x 
	int y = *q; // passando o valor do endereço de *q pra y
	int invertido = 0, invertido1 = 0; //variaveis temporarias
   
    while (x > 0) {
        int unidade = x % 10;
        invertido = invertido * 10 + unidade;
        x /= 10;
    }
 
    while (y > 0) {
        int unidade = y % 10;
        invertido1 = invertido1 * 10 + unidade;
        y /= 10;
    }

	*p = invertido; // passando o valor invertido para o endereço de *p (variavel a)
	*q = invertido1; // passando o valor invertido para o endereço de *q (variavel b)

    return 0;
}

int main(void){

	int a, b, c, d; // variaveis para armazenar os valores invertidos e originais
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Insira o segundo valor: ");
	scanf("%d", &b);
	
	c=a, d=b; // armazenando os valores originais para o print ao final
	
	inverter (&a, &b); // a funcao inverter vai realizar o calculo, passamos os endereços como argumentos 
	
	printf("O valor intertido de %d: %d e o valor invertido de %d: %d", c, a, d, b);

	return 0;
	
}
