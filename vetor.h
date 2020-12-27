#define TAMANHO_VETOR 12

void vetor1(){
	
	float taxa_inflacao[TAMANHO_VETOR];
	
	taxa_inflacao[0]  = 0.7;
	taxa_inflacao[1]  = 1.3;
	taxa_inflacao[2]  = 2.2;
	taxa_inflacao[3]  = 1.8;
	taxa_inflacao[4]  = 0.9;
	taxa_inflacao[5]  = 0.3;
	taxa_inflacao[6]  = 1.2;
	taxa_inflacao[7]  = 2.1;
	taxa_inflacao[8]  = 2.2;
	taxa_inflacao[9]  = 1.3;
	taxa_inflacao[10] = 0.4;
	taxa_inflacao[11] = 0.5;
	
	int i;
	
	for ( i = 0; i < TAMANHO_VETOR; i++){
		printf("%.2f\n", taxa_inflacao[i]);
	}
	
	
}

void vetor2(){
	int numeros[TAMANHO_VETOR];
	
	int soma, i;
	
	for ( i = 0; i < TAMANHO_VETOR; i++){
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);
		soma += numeros[i];
		printf("Soma: %d - ", soma);
		printf("Numero: %d\n\n", numeros[i]);
	}
}

void vetor3(){
	int numeros[TAMANHO_VETOR];
	
	int soma, i;
	
	for ( i = 0; i < TAMANHO_VETOR; i++){
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);
		soma += numeros[i];
		printf("Soma: %d - ", soma);
		printf("Numero: %d\n\n", numeros[i]);
	}
	
	for ( i = 0; i < TAMANHO_VETOR; i+= 2){
		printf("Numero %d: %d, ", i, numeros[i]);
		
	}
	printf("Soma: %d\n\n", soma);
}

void vetor4(){
	int valores[TAMANHO_VETOR];
	
	int i;
	
	for ( i = 0; i < TAMANHO_VETOR; i++){
		if ( i < 6) {
			valores[i] = 1;
		}else {
			valores[i] = 0;
		}
	}
	
	for ( i = 0; i < TAMANHO_VETOR; i+= 2){
		printf("%d", valores[i]);
		
	}
	printf("\n");
}

void vetor5(){
	int A[TAMANHO_VETOR];
	int B[TAMANHO_VETOR];
	int C[TAMANHO_VETOR];
	
	int i;
	
	for ( i = 0; i < TAMANHO_VETOR; i++){
		printf("\nDigite um numero para entrar no vetor A: ");
		scanf("%d", &A[i]);
		
		printf("\nDigite um numero para entrar no vetor B: ");
		scanf("%d", &B[i]);
		
		C[i] = A[i] - B[i];
		printf("\nO valor de C aqui eh %d - %d = %d.\n", A[i], B[i], C[i]);
	}
	
}
