#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; 
        }
    }
    return -1; 
}

int main()
{
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int result = linearSearch(arr, size, target);

    if (result == -1)
    {
        cout << "Phan tu " << target << " khong co trong mang." << endl;
    }
    else
    {
        cout << "Phan tu " << target << " co trong mang tai vi tri " << result << "." << endl;
    }

    return 0;
}