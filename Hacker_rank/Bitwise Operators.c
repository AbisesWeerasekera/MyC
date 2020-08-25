#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int, int);

void calculate_the_maximum(int n, int k) {
    
int andmax=0;
int ormax=0;
int xormax=0;
int i,j;

    for(i=1;i<=n;i++){
        for(j=1+i;j<=n;j++){
            if(((i&j) > andmax) && ((i&j) <k)){
                andmax=i&j;
            }

            if(((i|j)>ormax) && ((i|j)<k) ){
                ormax=i|j;
            }

            if(((i^j)>xormax) && ((i^j)<k))
            xormax=i^j;
        }
    }

    printf("%d\n",andmax);
    printf("%d\n",ormax);
    printf("%d\n",xormax);
   

  //Write your code here.
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

