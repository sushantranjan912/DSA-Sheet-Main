//Optimal approach for 3-Sum Problem(Two pointer and sorting technique)


#include <bits/stdc++.h> 
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1])continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                vector<int>temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]){   // for handling th duplicates
                    j++;
                }
                while(j<k && nums[k]==nums[k+1]){
                    k--;
                }
            }
        }
        
    }
    for(auto v:ans){
            for(int x:v){
                cout<<x<<" ";
            }
            cout<<endl;
        }

    return 0;
}