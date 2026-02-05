#include <stdio.h>

int main(){

    FILE *pFile = fopen("output.txt", "r"); //put the file path of output.txt if not in the same folder
    char buffer[1024] = {0};

    if(pFile == NULL){
        printf("could not open file\n");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }
    fclose(pFile);
}