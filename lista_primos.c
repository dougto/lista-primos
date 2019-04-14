#include <stdio.h>
#define N 1000 //Quantidade de números primos a ser impressa.

int primes[N];

int testaprimo(int num);

int main(){
	int i, j, n;
	
	i = 3;
	primes[0] = 2;
    primes[1] = 3;
    primes[2] = 5;

	for(n = 3; n < N; n++){
		
        if(n<N){
		    i = i + 4;
		    if(testaprimo(i)){
                primes[n] = i;
            } else { n--; }
        }
        n++;

        if(n<N){
		for(j = 0; j < 3; j++){
		    i = i + 2;
		    if(testaprimo(i)){
                primes[n] = i;
            } else { n--; }
            n++;
		}
        n--;
        }
	}

	for(j = 0; j<N; j++){
		printf("%d  ", primes[j]);
	}

	printf("\n");
	return 0;
}

int testaprimo(int num){
    int m;
    for(m = 0; m < N; m++){
        if((primes[m]*primes[m])>num){
            return 1;
        }
        if((num % primes[m]) == 0){
            return 0;
        }
    }  
	return 1;
}
