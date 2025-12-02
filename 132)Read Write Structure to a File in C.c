#include <stdio.h>

struct Student { char name[50]; int roll; float marks; };

int main() {
    struct Student s = {"Alice", 1, 95.5}, r;
    FILE *f = fopen("data.bin","wb");  
    fwrite(&s, sizeof(s), 1, f);
    fclose(f);

    f = fopen("data.bin","rb");        
    fread(&r, sizeof(r), 1, f);
    fclose(f);

    printf("%s %d %.2f", r.name, r.roll, r.marks);
    return 0;
}