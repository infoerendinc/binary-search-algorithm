#include <stdio.h>

// İkili arama fonksiyonu
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Orta elemanı kontrol edelim
        if (arr[mid] == x)
            return mid;

        // Eğer x, orta elemandan daha küçükse, sol tarafı kontrol edelim
        if (arr[mid] < x)
            left = mid + 1;
        // Eğer x, orta elemandan daha büyükse, sağ tarafı kontrol edelim
        else
            right = mid - 1;
    }

    // Eleman bulunamadıysa -1 döndürelim
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 23; // Aranacak eleman

    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Eleman bulunamadi.\n");
    else
        printf("Eleman %d indisinde bulundu.\n", result);

    return 0;
}