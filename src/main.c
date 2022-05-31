#include "merge.h"

int main(){
	
	Vector v;
	
	Initialize(&v);
	printf("\t\t");
	Imprime(&v);
	
	MergeSort(&v, 0, MAXSIZE-1);
	
	printf("NUMBER OF SWAPS:%d\n", v.swap);
	
	return 0;
}
