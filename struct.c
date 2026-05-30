#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Me{
    char name[50];
    int age;
    char language[15];
    int hobbies;
};

int main(){

    struct Me me;

    strcpy(me.name, "Vihan");
    me.age = 20;
    strcpy(me.language, "C");
    me.hobbies = 5;

    // Access using dot operator
    printf("Accessing via struct variable:\n");
    printf("Name: %s, Age: %d, Language: %s\n\n", me.name, me.age, me.language);

    // Accessing via pointer using the arrow (->) operator
    struct Me *ptr = &me;
    printf("Accessing via pointer (ptr->):\n");
    printf("Name: %s, Age: %d, Language: %s\n", ptr->name, ptr->age, ptr->language);

    printf("Size of Struct %lu\n", sizeof(struct Me));

    return 0;
}
