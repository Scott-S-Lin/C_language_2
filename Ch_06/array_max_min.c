int main() {

const int n =20;
int i, max, min; 
int array[20] ;


for(i=0; i<n; i++){
		array[i] = (rand() % 100) +1;
		printf("%d random = %d\n",i+1, array[i]);
	}

maxmin ( array, n, &max, &min);

printf("after return max =%d, min=%d", max, min );

}


void maxmin (int a[], int size, int *pmax, int *pmin){
	
	int i;
	*pmax = a[0];
	*pmin = a[0];

	for(i=0; i<size; i++) {
	
       *pmax  = (*pmax > a[i])? *pmax:a[i];
       *pmin  = (*pmin < a[i])? *pmin:a[i];
    }

	
	
}
