#include <stdio.h>
struct S{char n[50];int r;float m;};
int main(){
    struct S s={"Alice",1,95.5},r;
    FILE *f=fopen("d.bin","wb"); fwrite(&s,sizeof(s),1,f); fclose(f);
    f=fopen("d.bin","rb"); fread(&r,sizeof(r),1,f); fclose(f);
    printf("%s %d %.2f",r.n,r.r,r.m);
    return 0;
}