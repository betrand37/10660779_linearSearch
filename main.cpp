
#include <iostream>
using namespace std;

int search(int arr[], int y, int z)
{
    // initializing the array
    int x;
    for (x= 0; x < y; i++)
        if (arr[x] == z)
            return i;
    return -1;
}

int main(void)
{
    int arr[] = { 3, 4, 9, 12, 17 };
    int z = 10;
    int y = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, y, z);
   (result == -1)? cout<<"Element is not present in array"
                 : cout<<"Element is present at index " <<result;
   return 0;
}
