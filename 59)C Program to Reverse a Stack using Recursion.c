#include <stdio.h>
#define MAX 100

int s[MAX], top=-1;

void reverse(int n){
    if(n<0) return;
    int x = s[n];
    reverse(n-1);
    printf("%d ", x);
}

int main(){
    int n, x;
    scanf("%d", &n);
    for(int i=0;i<n;i++){ scanf("%d",&x); s[i]=x; }
    reverse(n-1);
    return 0;
}
