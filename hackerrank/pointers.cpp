#include <stdio.h>
#include <cmath>

using namespace std;

void update(int *a,int *b) {
    int aVal = *a;
    int bVal = *b;
    *a = aVal + bVal;
    *b = abs(aVal - bVal);
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

