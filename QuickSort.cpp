#include<bits/stdc++.h>
using namespace std;
int quick(vector<int>& arr, int l, int r){
    int pivot = arr[l];
    int i = l;
    int j = r;
    while(i<j){
        while(arr[i]<=pivot && i<=r-1){
            i++;
        }
        while(arr[j]>pivot && j>=l+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[l]);
    return j;
}
void quickSort(vector<int>& arr, int l, int r){
    if(l<r){
        int pivot = quick(arr, l, r);
        quickSort(arr, l, pivot-1);
        quickSort(arr,pivot+1, r);
    }
}
int main(){
     int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}