#include <stdio.h>

void pointer_basic() {
    int a = 10;
    int *pa = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Address of the pointing: %p\n", (void*)&pa);
    printf("Value of pointer of a: %p\n", (void*)pa);
    printf("Value the pointer is pointing to: %d\n", *pa);

}

void swap_using_pointers(){
    int a = 10;
    int b = 20;

    int *pa = &a;
    int *pb = &b;

    printf("a: %d, b: %d \n", a, b);

    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("a: %d, b: %d \n", a, b);
}

void pointer_arithmatic(){
    int arr[5] = {1,2, 3, 4, 5};
    int *parr = &arr[5];

    // Traversing through an array using pointers.
    for(int i=0; i<5; i++){
        //pointer increment
        *(arr + i) +=1;
        //accesssing elements
        printf("%d\n", *(arr + i));
    }

}

int main(){
    pointer_basic();
    swap_using_pointers();
    pointer_arithmatic();

    return 0;
}