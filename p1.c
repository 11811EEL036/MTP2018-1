//Nome: LUCAS SILVA PEREIRA
//Matricula: 11811EEL036
#include <stdio.h>
int main(){
	int i=0,j=0,s1,s2,s3;
	char bin [256];
	printf("Digite o numero binario:");
	scanf ("%s",bin);
	while (bin[j]!='\0'){
		if(i==0 && bin[j]=='0')
		i=0;
		else if(i==0&&bin[j]=='1')
		i=1;
		else if(i==1&&bin[j]=='0')
		i=2;
		else if(i==2&&bin[j]=='1')
		i=2;
		else if(i==2&&bin[j]=='0')
		i=1;
		else
		i=0;
		j++;
	}
	if (i==0){
		printf("O numero %s e multiplo de 3",bin);
	}
	else{
		printf("O numero %s nao e multiplo de 3",bin);
	}
	
}
