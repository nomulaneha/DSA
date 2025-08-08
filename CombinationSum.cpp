// //Can use array values any number of times
// #include<bits/stdc++.h>
// using namespace std;
// void combinationSum(vector<int>& arr,vector<int>& res, int i,int n, int k){
//     if(k<0) return;
//     if(k==0){
//         if(res.size()==0) cout<<"{}";
//         for(int j=0;j<res.size();j++){
//             cout<<res[j]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     if(i==n) return;
//     res.push_back(arr[i]);
//     k-=arr[i];
//     combinationSum(arr,res,i,n,k);
//     res.pop_back();
//     k+=arr[i];
//     combinationSum(arr,res,i+1,n,k);

// }
// int main(){
//      int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     vector<int>res;
//     combinationSum(arr, res, 0, n, k);
// }

//Can use array values only once
#include<bits/stdc++.h>
using namespace std;
void combinationSum(vector<int>& arr,vector<vector<int>>& res, int i, int k, vector<int>ds){
    if(k==0){
        res.push_back(ds);
        return;
    }
    for(int j=i;j<arr.size();j++){
        if(j>i && arr[j]==arr[j-1]) continue;
        if(arr[j]>k) break;
        ds.push_back(arr[j]);
        combinationSum(arr,res,j,k-arr[j],ds);
        ds.pop_back();
    }

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int k;
    cin>>k;
    vector<vector<int>>res;
    vector<int>ds;
    combinationSum(arr, res, 0, k,ds);
    for(auto it:res){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}