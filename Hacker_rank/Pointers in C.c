#include <stdio.h>

void update(int*,int*);
void update(int *a,int *b) {
int total,def;
    total= *a + *b ;
    def=*a - *b;
    if(def<0){
        def=def*-1;
    }
   *a=total;
   *b=def;

    // Complete this function    
}

int main() {
    int a,b;
    int *pa=&a,*pb=&b;
    scanf("%d\n%d", &a, &b);
    update(pa,pb);
    printf("%d\n%d",a,b);
    return 0;
}


