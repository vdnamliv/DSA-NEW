#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target)
            return mid;
        
        else if (arr[mid] > target)
            right = mid - 1;
        
        else
            left = mid + 1;
    }
    
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target ;
    cin >> target ;
    
    int result = binarySearch(arr, 0, n - 1, target);
    
    if (result == -1)
        cout << "Khong tim thay " << target << " trong mang.";
    else
        cout << target << " duoc tim thay tai chi so " << result << " trong mang.";
    
    return 0;
}