/* Aluno:  LUCAS SILVA PERERIA
Matricula: 11811EEL036 */

#include<stdio.h>

int main(){

	char str[256];
	int op, i;

    for(i=0; i<256; i++)
        str[i] = '\0';

	printf("Escolha uma opcao:\n1-Codificar\n2-Decodificar\n");
	scanf("%d", &op); getchar();

	if(op==1)
    {
		for(i=0; i<255; i++)
		{
			str[i] = getchar();
			if(str[i]==10)
            {
                str[i]='\0';
                break;
            }

		}

		int *pi;

		for(i=0; str[i]!='\0'; i+=4){
			pi = (int *) &str[i];
			if(str[i+4]!='\0')
				printf("%d;", *pi);
			else
				printf("%d\n", *pi);
		}
	}else if(op==2){
		int num[64], *pi;
		char aux;

		for(i=0; i<64; i++){
			scanf("%d", &num[i]);
			if(num[i]==0)
				break;
			pi = (char *) num;
		}

		printf("%s\n", pi);
	}

	return 0;
}
