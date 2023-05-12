#include<bits/stdc++.h>
using namespace std;

//reverse the array using in-built function
void reverse(int arr[], int n){
    reverse(arr,arr+n);
}

//function to print the array
void printArray(int arr[], int n){
     for(int i=0;i<n;i++)
         cout << arr[i] << " ";
}

//Driver program
int main(){
    
    //Input array
     int arr[] = {1,2,3,4,5};
    
    //Size of the array
    int n = sizeof arr/sizeof arr[0];
    
    // reverse the array
    reverse(arr,n);
    
    //Print the given array
    printArray(arr,n);
}
