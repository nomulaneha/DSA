// //To print all subsequences of sum K
// #include<bits/stdc++.h>
// using namespace std;

// void printSubsequenceswithsumK(vector<int>& arr, vector<int>& res, int i, int n, int k, int sum){
//     if(i>n) return;
//     if(sum==k){
//         if(res.size()==0) cout<<"{}";
//         for(int j=0;j<res.size();j++){
//             cout<<res[j]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     printSubsequenceswithsumK(arr,res,i+1,n,k,sum);
//     res.push_back(arr[i]);
//     sum+=arr[i];
//     printSubsequenceswithsumK(arr,res,i+1,n,k,sum);
//     res.pop_back();
//     sum-=arr[i];
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     vector<int>res;
//     int sum = 0;
//     printSubsequenceswithsumK(arr,res,0,n,k,sum);
    
// }

// //To print any one subseqeunce of sum k
// #include<bits/stdc++.h>
// using namespace std;

// bool printSubsequenceswithsumK(vector<int>& arr, vector<int>& res, int i, int n, int k, int sum){
//     if(i>n){
//     if(sum==k){
//         if(res.size()==0) cout<<"{}";
//         for(int j=0;j<res.size();j++){
//             cout<<res[j]<<" ";
//         }
//         cout<<endl;
//         return true;
//     }
//     return false;
// }
//     res.push_back(arr[i]);
//     sum+=arr[i];
//     if(printSubsequenceswithsumK(arr,res,i+1,n,k,sum)){
//         return true;
//     }
//     res.pop_back();
//     sum-=arr[i];
//     if(printSubsequenceswithsumK(arr,res,i+1,n,k,sum)){
//         return true;
//     }
//     return false;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     vector<int>res;
//     int sum = 0;
//     printSubsequenceswithsumK(arr,res,0,n,k,sum);
    
// }

// //To count total number of subsequences of sum K
// #include<bits/stdc++.h>
// using namespace std;

// int printSubsequenceswithsumK(vector<int>& arr, int i, int n, int k, int sum){
//     if(i>n){
//     if(sum==k){
//         return 1;
//     }
//     return 0;
//     }
//     int l = printSubsequenceswithsumK(arr,i+1,n,k,sum);
//     sum+=arr[i];
//     int r = printSubsequenceswithsumK(arr,i+1,n,k,sum);
//     sum-=arr[i];
//     return l+r;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     int sum = 0;
//     int cnt = printSubsequenceswithsumK(arr,0,n,k,sum);
//     cout<<cnt;
    
// }