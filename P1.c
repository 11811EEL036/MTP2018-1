/* Aluno:  LUCAS SILVA PERERIA
Matricula: 11811ELL036 */

#include<stdio.h>


int main(){
	
char bits[256];
int estado=0, i=0;

scanf("%s", &bits);

for(i=0; bits[i]!='\0'; i++){
	if(bits[i]=='0'&&estado==0){
		estado=0;
	}else if(bits[i]=='1'&&estado==0){
		estado=1;
	}else if(bits[i]=='1'&&estado==1){
		estado=0;
	}else if(bits[i]=='0'&&estado==1){
		estado=2;
	}else if(bits[i]=='0'&&estado==2){
		estado=1;
	}else if(bits[i]=='1'&&estado==2){
		estado=2;
	}
}

if(estado==0){
	printf("%s e multiplo de 3\n", bits);
}else{
	printf("%s nao e\n", bits);
}

return 0;

}
