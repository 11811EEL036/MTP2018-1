//Aluno: LUCAS SILVA PEREIRA
//Matricula: 11811EEL036

#include<stdio.h>

int main (){
	
char bits[256];
int op, i, n=0, nb;
       printf("Mudanca de bases:\n\n");
       printf("1) Binario para Decimal;\n");
       printf("2) Binario para Hexadecimal;\n");
       printf("3) Hexadecimal para Decimal;\n");
       printf("4) Hexadecimal para Binario;\n");
       printf("5) Decimal para Binario;\n");
       printf("6) Decimal para Hexadecimal;\n");
       printf("7) Octal para Decimal;\n");
       printf("8) Decimal para Octal.\n");
       printf("\nOpcao escolhida: ");
       scanf("%d", &op);	getchar();
if(op==1){
	   scanf("%s", bits); getchar();
	for(i=0; bits[i] != '\0'; i++)
	   n = n*2 + (bits[i] - '0');	
	   printf("%d", n);
}else if(op==2){
	   scanf("%s", bits); getchar();
	for(i=0; bits[i] != '\0'; i++)
	   n = n*2 + (bits[i] - '0');	
	   printf("%x", n);
}else if(op==3){
       scanf("%x", &n); getchar();
	   printf("%d", n);
}else if(op==4){
	   scanf("%x", &n); getchar();
	for(nb = 0; n >= (1 << nb); nb++){
	}	
	char bin[nb];
	for(i=0; i<nb; i++){
		if(n%2==0){
			bin[i]=0;
		}else{
			bin[i]=1;
		}
		n=n/2;
	}
	for(i=nb-1; i>=0; i--){
		printf("%i", bin[i]);
	}
}else if(op==5){
	   scanf("%d", &n); getchar();
	for(nb = 0; n >= (1 << nb); nb++){
	}	
	char bin[nb];
	for(i=0; i<nb; i++){
		if(n%2==0){
			bin[i]=0;
		}else{
			bin[i]=1;
		}
		n=n/2;
	}
	for(i=nb-1; i>=0; i--){
		printf("%i", bin[i]);
	}
}else if(op==6){
    	scanf("%d", &n); getchar();
    	printf("%x", n);
}else if(op==7){
	    scanf("%o", &n); getchar();
	    printf("%d", n);
}else if(op==8){
	    scanf("%d", &n); getchar();
	    printf("%o", n);
}

	return 0;
}
