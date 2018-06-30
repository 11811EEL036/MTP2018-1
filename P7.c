/* Aluno:  LUCAS SILVA PERERIA
Matricula: 11811EEL036 */
#include<stdio.h>

int Ackermann(int m, int n) {
	
	if(m==0)
		return n+1;
	else if(n==0)
		return Ackermann(m-1, 1);
	else
		return Ackermann(m-1, Ackermann(m, n-1));
		
	// return (m == 0) ? (n + 1) : ((n == 0) ? Ackermann(m-1, 1) : Ackermann(m-1, Ackermann(m, n-1)));
}

int main(){
	
	int m, n;
	
	scanf("%i %i", &m, &n);
	getchar();
	
	printf("%i", Ackermann(m,n));	

	return 0;
}
