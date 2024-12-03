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
    // Thuat toan sap xep selection sort
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Sap xep lai mang theo thuat toan selection sort
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    // Hien thi mang sau khi sap xep
    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
	return 0;
}
