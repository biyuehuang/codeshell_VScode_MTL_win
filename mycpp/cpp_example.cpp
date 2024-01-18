#include <stdio.h>
#include <windows.h>
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        //找出最小元素的索引
        int minIndex = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;

        //交换当前循环中的最小元素和第i个元素
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

//测试选择排序函数
int main() {
    int arr[] = {-2,45,-3,98,76,34};
    int size = sizeof(arr)/sizeof(*arr);

    printf("Original array:\n");
    for (int i = 0; i < size; i++) 
        printf("%d ", arr[i]);

    selectionSort(arr,size);

    printf("\nSorted array using Selection Sort:\n");
    for (int i = 0; i < size; i++) 
        printf("%d ", arr[i]);
    system("pause");
    return 0;
}


