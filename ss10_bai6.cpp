#include <stdio.h>
int main() {
    int arr[100], positions[100];
    int size, target, posCount = 0;
    // Nhap so phan tu va gia tri cho mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    // Nhap phan tu can tim
    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);
    // Tim kiem tuyen tinh de tim tat ca cac vi tri
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            positions[posCount] = i;
            posCount++;
        }
    }
    // In ket qua
    if (posCount > 0) {
        printf("Phan tu %d duoc tim thay tai cac vi tri:\n", target);
        for (int i = 0; i < posCount; i++) {
            printf("Index %d\n", positions[i]);
        }
    } else {
        printf("Phan tu %d khong co trong mang.\n", target);
    }
    return 0;
}
