#include<bits/stdc++.h>
using namespace std;

//Reverse array function
void reverse(int start, int end, int arr[]){
    // Base case
     if(start >= end)
         return;
    
    
    //Swap the arr[start] and arr[end]
    swap(arr[start],arr[end]);
    
     //Recursive step.
    reverse(start+1,end-1,arr);
}

//Auxuliary function to print the array
void printArray(int n, int arr[]){
     for(int i=0;i<n;i++)
         cout << arr[i] << " ";
}

//Driver program
int main(){
    
    //Input array
    int arr[] = {1,2,3,4,5};
    
    //Size of the input array
    int n = sizeof arr/sizeof arr[0];
    
    
    //call the function for the reverse
    reverse(0,n-1,arr);
    
    //Print the array
    printArray(n,arr);
    
}
