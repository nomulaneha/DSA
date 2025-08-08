#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>res;
    res.push_back(arr[n-1]);
    int maxi = arr[n-1];
    for(int i = n-2;i>=0;i--){
        maxi = max(arr[i],maxi);
        if(arr[i]>=maxi) res.push_back(arr[i]);
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}