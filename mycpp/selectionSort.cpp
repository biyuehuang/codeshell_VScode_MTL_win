#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        //找到当前最小元素的位置
        int minIndex = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}


int main() {

    int arr[] = {64,25,12,22,11};
    int size = sizeof(arr)/sizeof(*arr);

    cout << "Original array :-\n";
    for (auto x : arr){
        cout<<x<<" ";
    }cout<<endl;

    selectionSort(arr,size);

    cout << "\nSorted Array:\n";
    for (auto x : arr){
        cout<<x<<" ";
    }cout<<endl;
    system("pause");

    return 0;
}