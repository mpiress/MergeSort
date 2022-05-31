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


void Merge(Vector *v, int start, int middle, int last){
	int i = start;
	int j = middle + 1;
	int k = 0;
	
	int *aux = (int*)malloc((last-start+2) * sizeof(int));

	while(i<=middle && j<=last){
		if(v->itens[i] < v->itens[j]){
			aux[k] = v->itens[i];
			i++;
		}else{
			aux[k] = v->itens[j];
			j++;
		}
		k++;
	}

	while(i<=middle){
		aux[k] = v->itens[i];
		i++;
		k++;
	}

	while(j<=last){
		aux[k] = v->itens[j];
		j++;
		k++;
	}

	for(i=start; i<=last; i++)
		v->itens[i] = aux[i-start];

	printf("Middle:%d\t", k);
	
	v->swap++;
	Imprime(v);
}


void MergeSort(Vector *v, int start, int last){
	if(start < last){
		int middle = (start+last)/2;
		MergeSort(v, start, middle);
		MergeSort(v, middle+1, last);
		Merge(v, start, middle, last);
	}
}

