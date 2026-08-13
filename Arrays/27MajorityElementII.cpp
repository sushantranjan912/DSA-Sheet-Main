         //brute force approach

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> nums = {1,1,1,3,3,2,2,2};
//     vector<int> ls;
//     int n = nums.size();
//     for(int i = 0; i < n; i++) {
//         if(ls.size() == 0 || ls[0] != nums[i]) {
//             int cnt = 0;
//             for(int j = 0; j < n; j++) {
//                 if(nums[j] == nums[i])
//                     cnt++;
//             }
//             if(cnt > n / 3)
//                 ls.push_back(nums[i]);
//         }
        //  if(ls.size()==2){
        //     break;
        //  }
//     }
//     for(int x : ls){
//         cout << x << " ";
//      }

//     return 0;
// }


          //better approach

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> nums = {1,1,3,3,3,2,1,2};
//     unordered_map<int,int>mp;
//     for(int x: nums){
//         mp[x]++;
//     }
//     vector<int>ans;
//     for(auto it:mp){
//         if(it.second>nums.size()/3){
//             ans.push_back(it.first);
//         }

//     }
//     for(int x: ans){
//         cout<<x<<" ";
//     }
    

//     return 0;
// }


                  //optimal approach
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {1,1,1,3,3,2,2,2};

    int cnt1 = 0, cnt2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN;

    for(int i = 0; i < nums.size(); i++) {
        if(cnt1 == 0 && nums[i] != el2) {
            cnt1 = 1;
            el1 = nums[i];
        }
        else if(cnt2 == 0 && nums[i] != el1) {
            cnt2 = 1;
            el2 = nums[i];
        }
        else if(nums[i] == el1) {
            cnt1++;
        }
        else if(nums[i] == el2) {
            cnt2++;
        }
        else {
            cnt1--;
            cnt2--;
        }
    }

    cnt1 = 0;
    cnt2 = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == el1)
            cnt1++;
        if(nums[i] == el2)
            cnt2++;
    }

    vector<int> ans;
    if(cnt1 >= nums.size()/3)
        ans.push_back(el1);
    if(cnt2 >= nums.size()/3)
        ans.push_back(el2);
    for(int x : ans)
        cout << x << " ";

    return 0;
}                 