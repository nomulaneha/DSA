#include<bits/stdc++.h>
using namespace std;
void printAllSubsequences(vector<int>&sb, vector<int>&arr, int i, int n){
    if(i==n){
        if(sb.size()==0) cout<<"{}";
        for(int j=0;j<sb.size();j++){
            cout<<sb[j]<<" ";
        }
        cout<<endl;
        return;
    }
    printAllSubsequences(sb,arr,i+1,n);
    sb.push_back(arr[i]);
    printAllSubsequences(sb,arr,i+1,n);
    sb.pop_back();
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>sb;
    printAllSubsequences(sb,arr,0,n);
    return 0;
}