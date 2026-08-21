//brute force approach

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int>nums={4,2,2,6,4};
//     int k=6;
//     int n=nums.size();
//     int count=0;
//     for(int i=0;i<n;i++){
//         int xr=0;
//         for(int j=i;j<n;j++){
//             xr=xr^nums[j];
//             if(xr==k){
//                 count++;
//             }
//         }

//     }
//     cout<<count<<endl;

//     return 0;
// }


//optimal approach
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums={4,2,2,6,4};
    int k=6;
    int n=nums.size();
    int count=0;
    int xr=0;
    unordered_map<int,int>mp;
    mp[xr]++;
    for(int i=0;i<n;i++){
        xr=xr^nums[i];
        int x=xr^k;
        if(mp.find(x)!=mp.end()){
            count+=mp[x];
        }
        mp[xr]++;


    }
    cout<<count<<endl;

    return 0;
}