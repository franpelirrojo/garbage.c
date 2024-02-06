#include<stdio.h>
#include <string.h>

// Persona es un tag
struct Persona { //Alojado continuo de objetos
    char name[50];
    int edad;
} persona, *persona_p;

union { //Memoria compartida entre dos estructuras, se sobre escriben los objetos
    struct {
        char name[50];
    } pn;
    struct { 
        char name[50];
        int edad;
    } pne;
} personas;

int main(){
    strcpy(persona.name, "Fran");
    persona.edad = 23; // . operador de miembro de estructura
    printf("%s tiene %d a%cos\n", persona.name, persona.edad, 164);

    persona_p = &persona; //Asignamos al puntero la dirección de la estructura
    printf("%s tiene %d a%cos\n", persona_p->name, persona_p->edad, 164);
    /* El operador de puntero de estructura referencia 
     * los miembros desde un puntero a una estructura.*/

    personas.pne.edad = 50;
    strcpy(personas.pne.name, "Francisco");
    strcpy(personas.pn.name, "Paco");

    printf("%s\n", personas.pn.name); // (!) paco sobre escribe a Francisco
    printf("%s tiene %d a%cos\n", personas.pne.name, personas.pne.edad, 164);
    return 0;
}
