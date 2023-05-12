#include<bits/stdc++.h>
using namespace std;

//swap function
void swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
}

//reverse array function
void reverse(int arr[], int n){
    
    //Pointer pointing at the beginning
    int *pointer1 = arr;
    
    //Pointer pointing at the end of the array
    int *pointer2 = arr + n -1;
    
    while(pointer1 < pointer2){
        swap(pointer1,pointer2);
        pointer1++;
        pointer2--;
    }   
}

///Print the array
void print(int *arr, int n){
     
    //size at the end of the array
    int *size = arr + n;
    
    //Position pointing to the beginning of the
    // array
    int *pos = arr;
    for(pos = arr;pos < size; pos++)
        cout << *pos << " ";
}

//Driver program
int main(){
    
    //Input array
    int arr[] = {1,2,3,4,5};
    
    
    //Length of the array
    int n = sizeof arr / sizeof arr[0];
    
    //reverse the array
    reverse(arr,n);
    
    //print the array
    print(arr,n);
}
