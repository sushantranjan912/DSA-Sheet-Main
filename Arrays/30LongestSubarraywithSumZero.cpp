#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums={1, 2, -3, 3, -3};
    int n=nums.size();
    int sum=0;
    int max1=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum==0){
            max1=i+1;
        }
        else{
            if(mp.find(sum)!=mp.end()){
                max1=max(max1,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }    
    }
    cout<<max1<<endl;

    return 0;
}