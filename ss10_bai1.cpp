#include<stdio.h>
int main(){
	//Khai bao mang va kih  thuoc mang , phan tu mang
	int arr[100];
	int size, target, found = 0;
	//Nhap kich thuoc mang
	printf("Nhap kich thoc mang :");
	scanf("%d", &size);
	// Nhap phan tu mang
	printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
	//Nhap vi tri can tim kiem
    printf("Nhap vi tri can tim kiem: ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Phan tu %d duoc tim thay tai vi tri index %d\n", target, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim phan tu %d trong mang.\n", target);
    }
    return 0;
}
