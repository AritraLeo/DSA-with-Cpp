#include <iostream>

using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 1)
        return true;

    bool restArr = isSorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArr);
}

int main()
{
    int arr[] = {1, 3, 4, 5, 7};
    cout << isSorted(arr, 5);
    return 0;
}