#include<bits/stdc++.h>
using namespace std;

//Function to reverse the array
void reverse(int n, int arr[]){
     int start = 0 , end = n-1;
     while(start < end){
          int temp = arr[start];
          arr[start] = arr[end];
          arr[end] = temp;
          start += 1;
          end -= 1;
     }
}

//Print array
void printArray(int n, int arr[]){
     for(int i=0;i<n;i++)
         cout << arr[i] << " ";
}

//Driver program
int main(){
     
    //Input array
    int arr[] = {1,2,3,4,5};
    
    
    //Size of the array
    int n = sizeof arr / sizeof arr[0];
    
    //call the reverse function
    reverse(n,arr);
    
    //Print the array
    printArray(n,arr);
}
