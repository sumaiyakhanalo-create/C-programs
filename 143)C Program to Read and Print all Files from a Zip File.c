#include <stdio.h>
#include <stdlib.h>
#include <zip.h>

int main(int argc,char *argv[]){
    int err; zip_t *z=zip_open(argv[1],0,&err);
    zip_int64_t n=zip_get_num_entries(z,0);
    for(zip_int64_t i=0;i<n;i++){
        struct zip_stat st; zip_stat_index(z,i,0,&st);
        zip_file_t *f=zip_fopen_index(z,i,0);
        char *b=malloc(st.size+1);
        zip_fread(f,b,st.size); b[st.size]=0;
        printf("%s:\n%s\n\n",st.name,b);
        free(b); zip_fclose(f);
    }
    zip_close(z);
    return 0;
}