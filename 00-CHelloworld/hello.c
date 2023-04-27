#include <stdio.h>

int main (void){

    // Creo las variables necesarias
    char* filename = "output.txt";
    char* message = "Hello World!";

    // Abro el archivo en modo escritura para guardar el output
    FILE* output = fopen(filename, "w");
    
    // Paso el mensaje por consola
    fprintf(stdout, message);

    // Guardo el mensaje en output.txt
    fprintf(output, message);

    // Cierro el archivo output.txt
    fclose(output);
    
    return 0;
}
