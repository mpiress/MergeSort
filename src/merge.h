#ifndef MERGE_H 
#define MERGE_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


#define MAXSIZE 25


typedef struct Vector Vector;

struct Vector{
	int *itens;
	int tam;
	int swap;
};

void Initialize(Vector *v);
void Imprime(Vector *v);
void Merge(Vector *v, int p, int q, int r);
void MergeSort(Vector *v, int p, int r);

#endif