#include "functions.h"

int factorial(int n){
	if(n<0){
		cout<<"Enter a non-negative integer: ";
		cin>>n;
		return factorial(n);
	}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
