#include <stdio.h>

int main() {

    FILE *fnew = fopen("./newfile.txt", "w"); //w write, a appends, r read
    fprintf(fnew, "soy un archivo creado en c"); //Sobreescribe
    fclose(fnew);

    FILE *fpointer = fopen("./struct.c", "a"); //w write, a appends, r read
    fprintf(fpointer, "//soy un comentario insertado");
    fclose(fpointer);

    const int BUFFER = 255;
    char line [BUFFER], *result;
    FILE *fleido = fopen("hello.c", "r"); //w write, a appends, r read

    while (!feof(fleido)){
        printf("%s", fgets(line, BUFFER, fleido));
    }

    fclose(fleido);
    return 0;
}
