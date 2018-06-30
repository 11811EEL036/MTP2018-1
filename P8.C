/* Aluno:  LUCAS SILVA PERERIA
Matricula: 11811EEL036 */

#include<stdio.h>
#include<stdlib.h>

void gera_numeros(float * vetor, int tam) {
    int i;
    float num;
    for(i = 0; i < tam; i++)
        vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;

}
float reduce(float * pini, float * pfim, float (*funcao)(float, float))
{
	return (pini == pfim)? 1 : (*funcao)(*pini, reduce(pini+1, pfim, funcao));
}

float soma (float a,float b){

    return a+b;
}
float multiplicacao(float a, float b){
    return a*b;
}
int main(){
    srand(123456);
    int op;
    float vetor [100];
    gera_numeros(vetor,100);
    printf("Qual opcao deseja:\n1 - Somatorio\n2 - Produtorio\nEscolha: ");
    scanf("%d",&op);getchar();
    if(op==1){
        printf("%f",reduce(vetor,vetor+100,soma)-1);
    }
    if(op==2)
        printf("%f",reduce(vetor,vetor+100,multiplicacao));

}
