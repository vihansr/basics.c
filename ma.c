#include <stdio.h>
#include <stdlib.h>

int main() {
    char type;
    printf("Choose type (i for int, c for char): ");
    scanf(" %c", &type);

    if (type == 'i') {
        int arr[5];
        for (int i = 0; i < 5; i++) {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < 5; i++) {
            printf("| %d | -> | %p |\n", arr[i], (void*)&arr[i]);
        }
    } else if (type == 'c') {
        char arr[5];
        for (int i = 0; i < 5; i++) {
            scanf(" %c", &arr[i]);
        }
        for (int i = 0; i < 5; i++) {
            printf("| %c | -> | %p |\n", arr[i], (void*)&arr[i]);
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
