#include <stdio.h>

struct numList{
    int n;
    struct numList *p;
};

typedef struct numList nl;

int main(){
    nl a, b;
    
    a.n = 10;
    b.n = 3;
    
    a.p = &b;
    
    printf("%d\n", a.n);
    printf("%d\n", b.n);
}
