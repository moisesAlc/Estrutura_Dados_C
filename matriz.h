
void matriz1(){
	// criar uma matriz 8x12 zerada
	int matriz[8][12];
	
	
}

void matriz2(){
	/* Dada uma matriz 7x13 devidamente preenchida, 
	 * o algoritmo deve encontrar sua matriz transposta. */
	 
	const int QTD_ORIG_DE_LINHAS = 2; 
	const int QTD_ORIG_DE_COLUNAS = 3;
	
	const int QTD_TRANSPOSTA_DE_LINHAS = QTD_ORIG_DE_COLUNAS; 
	const int QTD_TRANSPOSTA_DE_COLUNAS = QTD_ORIG_DE_LINHAS;
	 
	int matriz[QTD_ORIG_DE_LINHAS][QTD_ORIG_DE_COLUNAS];
	int transposta[QTD_TRANSPOSTA_DE_LINHAS][QTD_TRANSPOSTA_DE_COLUNAS];
	
	int i,j;
	
	for (i = 0; i < QTD_ORIG_DE_LINHAS; i++){
		
		for (j =0; j <	QTD_ORIG_DE_COLUNAS; j++){
			
			printf("\nIndique um valor para a linha %d e coluna %d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			
		}
	}
	
	for (i = 0; i < QTD_TRANSPOSTA_DE_LINHAS; i++){
		
		for (j =0; j < QTD_TRANSPOSTA_DE_COLUNAS; j++){
			
			transposta[i][j] = matriz[j][i];
			printf("%d ", transposta[i][j]);
		}
		
		printf("\n");
	}
	
	
}

void matriz3(){
	/* Ler dois vetores A e B, cada um com 7 elementos, 
	 * e construir uma matriz C de mesma dimensão. 
	 * A primeira coluna deverá ser formada pelos
	 * elementos de A e a segunda coluna pelos elementos de B. */
	 
	const int TAMANHO_VETOR_M = 7; 
	const int QTD_LINHAS_MATRIZ = 2;
	const int QTD_COLUNAS_MATRIZ = TAMANHO_VETOR_M;
	 
	int vetor_A[TAMANHO_VETOR_M];
	int vetor_B[TAMANHO_VETOR_M];
	
	int matriz_C[QTD_LINHAS_MATRIZ][QTD_COLUNAS_MATRIZ];
	
	int i,j;
	
	for (i = 0; i < TAMANHO_VETOR_M; i++){
		printf("Digite o valor para o vetor A: ");
		scanf("%d", &vetor_A[i]);
		
		printf("Digite o valor para o vetor B: ");
		scanf("%d", &vetor_B[i]);
		
	}
	
	printf("\n");
	
	for (i = 0; i < QTD_LINHAS_MATRIZ; i++){
		
		for (j =0; j < QTD_COLUNAS_MATRIZ; j++){
			
			if ( i == 0){
				matriz_C[i][j] = vetor_A[j];
			}else if ( i == 1){
				matriz_C[i][j] = vetor_B[j];
			}
			
			printf("%d ", matriz_C[i][j]);
		}
		
		printf("\n");
	}
	
	
}
