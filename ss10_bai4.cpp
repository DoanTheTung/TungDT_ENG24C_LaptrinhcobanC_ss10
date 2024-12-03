#include <stdio.h>

int main() {
	//Khai bao mang va gan gia tri phan tu trong mang
    int arr[] = {3, 27, 25, 12, 22, 11, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Hien thi mang ban dau
    printf("Mang ban dau la:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
   // Thuat toan Insertion Sort
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Sap xep lai vi tri phan tu
        arr[j + 1] = key;
    }
    // Hien thi mang sau khi sap xep
    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
	return 0;
}
