#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
vector <int> selectionSort(vector <int> arr) {
    int n = arr.size(); // Get the size of the array
    
    // Outer loop to move the boundary of the unsorted array
    for (int i = 0; i < n - 1; i++) {
        int smallestIndex = i; // Assume the current position has the smallest element
        
        // Inner loop to find the actual smallest element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallestIndex])  // If we find a smaller element
                smallestIndex = j; // Update the index of the smallest element
        }
        
        // Swap the smallest element with the first element of the unsorted part
        swap(arr[i], arr[smallestIndex]);
    }
    
    // Return the sorted array
    return arr;
}
int main(){
    vector <int>arr={3, -2, -1, 5, 0};
    vector <int>returnArr = selectionSort(arr);
    for(int i=0;i<returnArr.size();i++){
        cout<<returnArr[i]<<" ";
    }
    return 0;
}