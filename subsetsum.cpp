#include<bits/stdc++.h>
using namespace std;
void subsetssum(vector<int>& arr, int i, int n, vector<int>& res, int sum){
    if(i==n){
        res.push_back(sum);
        return;
    }
    subsetssum(arr, i+1, n, res, sum+arr[i]);
    subsetssum(arr, i+1, n, res, sum);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res;
    int sum = 0;
    subsetssum(arr, 0, n, res, sum);
    
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}