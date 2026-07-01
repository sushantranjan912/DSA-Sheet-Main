        //this is the only approach
        
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>>arr={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int m=arr.size();
    int n=arr[0].size();
    int left=0;
    int top=0;
    int bottom=m-1;
    int right=n-1;
    vector<int>ans;
    while(left<=right && top<=bottom){
    for(int i=left;i<=right;i++){
        ans.push_back(arr[top][i]);
    }
    top++;
    for(int i=top;i<=bottom;i++){
        ans.push_back(arr[i][right]);
    }
    right--;
    if(top<=bottom){
    for(int i=right;i>=left;i--){
        ans.push_back(arr[bottom][i]);
    }
    }
    bottom--;
    if(left<=right){
    for(int i=bottom;i>=top;i--){
        ans.push_back(arr[i][left]);
    }
    }
    left++;
    }
    for(int x:ans){
        cout<<x<<" ";
    }

    
    return 0;
}