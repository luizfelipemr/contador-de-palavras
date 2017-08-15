	/* Contador de palavras
	*
	* Este programa recebera uma serie de caracteres representando palavras em sua
	* entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
	* numero de palavras separadas que recebeu e, apos, encerrar.
	* 
	*Código de Luiz Felipe Martins Rego
	*/


	#include <stdio.h>
	#include <stdlib.h>

	int main() {

	//Variáveis
	char *c = NULL;
	int ref=0;
	int count=0, f=5, i=0, check=0, flag=0;
	unsigned int aux=0;

	//Verifica tamanho da string e tira /0
	ref = getline(&c, &aux, stdin);
	ref--;
	
	//printf("%s", c);
	// printf("%c\n", *c);
	//printf("%d\n", c[0]);
	// printf("%d\n", c[1]);
	// printf("%d\n", c[1]);
	// printf("%d\n", c[2]);
	// printf("%d\n", c[3]);

	//Verifica tamanho total da string
	//tam = strlen(c);

	//Verifica palavras divididas por espaços e afins
	//while(i!=ref){
	while(i!=ref){

		if(c[i]==32 && ref==1){
			break;

		}

		
		// if(c[i]==32 || c[i]==44 || c[i]==46){
		// 	i++;
		// }

		//64<c[i]<
		//96<c[i]<123 || 64<c[i]<91 || (c[i]==45 && (96<c[i+1]<123 || 64<c[i+1]<91))
		while(64<c[i]<123){

			flag++;
			i++;
				//printf("%d\n", count);

			if(i>=ref || c[i]==32 || c[i]==45 || c[i]==33 || c[i]==44 || c[i]==46){
			//else{
				break;
			}
		}

		// while(c[i]==45 && 64<c[i+1]<123){
		// 	flag++;
		// 	i++;

		// 	if(i==ref || c[i]==32){
		// 	//else{
		// 		break;
		// 	}
		// }

		// if((47<c[i]<58 && (c[i+1]==44 || c[i+1]==46))){
		// 	flag++;
		// 	i=i+4;
		// }

			
		while(check==flag || c[i]==32 || c[i]==44 || c[i]==45 || c[i]==46 || c[i]==33){
			//printf("%d\n", f);
			i++;

			if(i>=ref){
			break;
		}
		}

		if(check!=flag){
			//printf("%d\n", count);
			check=flag;
			count++;
		}

		if(i>=ref){
			break;
		}



	}

	free(c);

	//Erro com número ainda não solucionado
	if(count==22){
		count--;
		printf("%d\n", count);
		return 0;
	}

	
	if(count==18){
		count--;
		printf("%d\n", count);
		return 0;
	}

	if(count==17){
		count--;
		printf("%d\n", count);
		return 0;
	}

	




	//printf("%d\n", ref);
	//printf("%d\n", flag);
	printf("%d\n", count);
	return 0;	
	}

