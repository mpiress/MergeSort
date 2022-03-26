#include "merge.h"


void Initialize(Vector *v){
	
	//Porque 42? Leia o guia definitivo do mochileiro das galáxias :).
	srand(42); 
    
    v->itens = (int*)malloc(MAXSIZE*sizeof(int));
	for(int i=0; i<MAXSIZE; i++)
		v->itens[i] = rand()%100;
	v->swap = 0;
}

void Imprime(Vector *v){
	for(int i=0; i<MAXSIZE; i++)
		printf("%d\t", v->itens[i]);
	printf("\n");
}


void Merge(Vector *v, int p, int q, int r){
	int i = p;
	int j = q + 1;
	int k = 0;
	
	//CORREÇÃO FOI AQUI TURMA!!!
	int *aux = (int*)malloc((r-p+2) * sizeof(int));

	while(i<=q && j<=r){
		if(v->itens[i] < v->itens[j]){
			aux[k] = v->itens[i];
			i++;
		}else{
			aux[k] = v->itens[j];
			j++;
		}
		k++;
	}

	while(i<=q){
		aux[k] = v->itens[i];
		i++;
		k++;
	}

	while(j<=r){
		aux[k] = v->itens[j];
		j++;
		k++;
	}

	for(i=p; i<=r; i++)
		v->itens[i] = aux[i-p];

	printf("K:%d\n", k);
	
	v->swap++;
	Imprime(v);
}


void MergeSort(Vector *v, int p, int r){
	if(p < r){
		int q = (p+r)/2;
		MergeSort(v, p, q);
		MergeSort(v, q+1, r);
		Merge(v, p, q, r);
	}
}

