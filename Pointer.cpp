#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int sum=*a+*b;
    int sub;
    if(*a>*b)
    {
     sub=*a-*b;
    }
    else
    {
        sub=*b-*a;
    }
    *a=sum;
    *b=sub;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

