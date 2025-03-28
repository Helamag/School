#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	while(1==1){
		int n= rand();
		printf("%d",n);
	}
}
