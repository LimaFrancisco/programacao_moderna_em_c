#include <stdio.h> //O include inclui um arquivo pronto ao programa, nesse caso a biblioteca stdio.h
//main eh a funcao principal e obrigatoria para o funcionamento da funcao
int main(void){ //int = tipo de retorno da funcao, main = nome da funcao, (void) = entrada da funcao
   int ret = 0;

   printf("papobinario.com.br\n"); //funcao do sdtio.h
   printf("%c", 10);
   printf("%x - %x - %x - %x\n", ret, 10, 0xa, 0x41); 
	return 0; // a funcao retorna o numero inteiro de valor 0
}
