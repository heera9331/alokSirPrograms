#include <stdio.h>
int len(char *p) {
    int c;
    for(c=0; *(p+c); c++);
    return c;
}

void swap(char *xp, char *yp ) {
    char t= *xp;
    *xp = *yp;
    *yp = t;
}
int main() {
    char a[50]={'a','l', 'o','k'};

    gets(a);
    int n = len(a);
    int ans[50];

    int mid=n/2;
    
    
    for(int i=0; i<=mid; i++) {
        swap(&a[i] , &a[mid+i]);
    }

    puts(a);
}
