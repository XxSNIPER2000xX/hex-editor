#include <stdio.h>

int main (int argc, char** argv) {
    FILE* fptr;
    char data;

    if ((fptr = fopen(argv[1], "r")) == NULL) {
        printf("[!] invalid file\n");
        return 1;
    }
    
    fscanf(fptr, "%c", &data);
    while(feof(fptr) == 0) {
        if (data <= 15) {
            printf("0%x", data);
        } else
            printf("%x", data);

        fscanf(fptr, "%c", &data);
    } 
    
    printf("\n");
    fclose(fptr); 
    
    return 0;
}
