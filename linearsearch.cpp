// C++ program for illustration Linear search

#include <iostream>

using namespace std;
void findElement(int arr[], int size, int key)

{

    // loop for traversing the array and searching for key

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {

            cout << "Element is found at the position: " << (i + 1);

        }
    }

}

int main()

{

    int arr[] = { 21, 2, 3, 14, 15, 6 };

    int rn = 6; // count of elements



    int key = 3; // key that is to be searched


    // Calling the function for finding the key



    findElement(arr, rn, key);

    return 0;



}
