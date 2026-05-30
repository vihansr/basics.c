// Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>


void _malloc(){
    int size = 5;
    printf("Allocating uninitialized memory of size %d bytes\n", sizeof(int) * size);
    int *ptr = (int *)malloc(size * sizeof(int));

    if (ptr == NULL){
        printf("NO MEMORY AVAILABLE");
        exit(0);
    }

    printf("Address: %p\n", *ptr);

    printf("Adding value to the memory created...\n");

    for(int i=0; i<size; i++){
        ptr[i] = i*7;
    }
    printf("Printing values...\n\n");
    for(int i=0; i<size; i++){
        printf("%d\n", ptr[i]);
    }
}

void _calloc(){
    int size = 6;
    int * ptr = (int *)calloc( size , sizeof(int));

    if (ptr == NULL){
        printf("NO MEMORY AVAILABLE");
        exit(0);
    }

    printf("Values before defining...\n");
    for(int i=0; i<size; i++){
        printf("%d\n", ptr[i]);
    }

    printf("Values after defining...\n");
    for(int i=0; i<size; i++){
        ptr[i] = i+3;
    }

    for(int i=0; i<size; i++){
        printf("%d\n", ptr[i]);
    }

}

void _free(){
    int *ptr = (int *)calloc(5, sizeof(int));

    for(int i=0; i<5; i++){
        ptr[i] = i;
    }

    free(ptr);
}

void _realloc(){
    char *ptr = (char *)malloc( 5 * sizeof(char));

    ptr = (char *)realloc(ptr, 10 * sizeof(char));

    if (ptr == NULL){
        printf("NO MEMORY AVAILABLE");
        exit(0);
    }
}

int main(){
    _malloc();
    _calloc();
    _free();
    _realloc();

    return 0;
}