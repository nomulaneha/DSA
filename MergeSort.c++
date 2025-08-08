#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int mid, int r){
    vector<int> temp;
    int i = l, j = mid+1;
    while(i<=mid && j<=r){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=r){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k = l; k<=r;k++){
        arr[k] = temp[k-l];
    }
}

void mergeSort(vector<int>&arr,int l,int r){
    if(l<r){
        int mid = l+(r-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}