#include "functions.h"
#include <cstdio>
int factorial(int n){
	if(n<0){
		printf("Enter a non-negative integer: ");
		cin>>n;
		return factorial(n);
	}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
