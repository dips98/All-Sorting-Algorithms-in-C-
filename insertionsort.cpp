#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n, int arr[]){

    for(int i =1; i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

int main(){
    int n, arr[n];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionSort(n, arr);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}