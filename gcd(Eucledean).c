#include <stdio.h>

int main(){
	
	int A=54;
	int B=30;;
	int R;
	
	while(B>0){
		R=A%B;
		A=B;
		B=R;
	}
	return A;
}
