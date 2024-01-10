#include <stdio.h>
#include <locale.h>  // Biblioteca para usarmos as configuracoes de localidade do Windows
int main() {
    setlocale(LC_ALL, "Portuguese");  // comando para usarmos as configuracoes de localidade do Windows
    int numProvas;
    float soma = 0, maior, menor, mediaInst;
    printf("Quantas notas deseja inserir? ");
    scanf("%i", &numProvas);
    printf("Digite a média da Instituição: ");
    scanf("%f", &mediaInst);
    float nota[numProvas];
   
    for (int i=1; i<numProvas; i++) {
        printf(" Insira a %i. nota: ", i++);
        scanf("%f", &nota[i]);
        soma += nota[i];  //soma = soma + nota[i];
        
	    	if(i==1) { // na primeira rodada inicializamos maior e monor
			    maior = nota[i];
			    menor = nota[i];			
		    }	
        else if (nota[i] > maior) // da segunda rodada em diante
    	    maior = nota[i];
        else if (nota[i] < menor) 	
          menor = nota[i];
    }

    printf("\n\n -----NOTAS DA TURMA-----\n");
    for (int i=1; i<numProvas; i++)
        printf("%0.2f, ", nota[i]);

    printf("\n\n -----ACIMA DA MÉDIA-----\n");
    for (int i=1; i<numProvas; i++) 
        if (nota[i] >= mediaInst)
            printf("%0.2f, ", nota[i]);

    printf("\n\n -----ABAIXO DA MÉDIA-----\n");
    for (int i=1; i<numProvas; i++) 
        if (nota[i] < mediaInst)
            printf("%0.2f, ", nota[i]);

    printf("\n\n-----MAIOR NOTA-----\n");
    printf("Nota: %0.2f ", maior);

    printf("\n\n -----MENOR NOTA-----\n");
    printf("Nota: %0.2f", menor);

    printf("\n\n -----MÉDIA ARITMÉTICA-----\n");
    printf("Média: %0.2f", (soma/numProvas));
     
	 printf("\n\n-----NÚMEROS PARES-----\n");
	 for(int i=1; i<numProvas; i++) {
		 int auxiliar =  nota[i];
		 if(auxiliar % 2 == 0)
			    printf("%0.2f, ",nota[i]);
	 }
	 printf("\n\n-----NÚMEROS ÍMPARES-----\n");
	 for(int i=1; i<numProvas; i++) {
		 int auxiliar =  nota[i];
		 if(auxiliar % 2 != 0)
       printf("%0.2f, ",nota[i]);
	 }

}	
