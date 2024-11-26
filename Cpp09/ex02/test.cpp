#include <iostream>
#include <vector>


void merge(std::vector<int>& array, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    std::vector<int> leftArray(n1), rightArray(n2);
    for (int i = 0; i < n1; i++){
        leftArray[i] = array[left + i];
    }
    for (int j = 0; j < n2; j++){
        rightArray[j] = array[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            array[k] = leftArray[i];
            i++;
        } else {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}


void mergeSort(std::vector<int>& array, int left, int right, int flag) {
    static int count = 0;
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(array, left, mid, 0);
        mergeSort(array, mid + 1, right, -1);
        merge(array, left, mid, right);
        count++;
    }
}

// int main() {
//     std::vector<int> array = {9 , 1, 4, 5};
//     for (int num : array)
//         std::cout << num << " ";
//     std::cout << std::endl;

//     mergeSort(array, 0, array.size() - 1, 0);

//     std::cout << "Sorted array: ";
//     for (int num : array)
//         std::cout << num << " ";
//     std::cout << std::endl;

//     return 0;
//}