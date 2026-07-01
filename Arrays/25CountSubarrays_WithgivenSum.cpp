         //brute force appraoch

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> nums = {1,2,3};
//     int k = 3;
//     int n = nums.size();
//     int count = 0;
//     for(int i = 0; i < n; i++) {
//         for(int j = i; j < n; j++) {
//             int sum = 0;
//             for(int x = i; x <= j; x++) {
//                 sum += nums[x];
//             }
//             if(sum == k) {
//                 count++;
//             }
//         }
//     }
//     cout << count;
//     return 0;
// }


            //better approach

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> nums = {1,2,3};
//     int k = 3;
//     int n = nums.size();
//     int count = 0;
//     for(int i = 0; i < n; i++) {
//         int sum = 0;
//         for(int j = i; j < n; j++) {
//             sum += nums[j];
//             if(sum == k) {
//                 count++;
//             }
//         }
//     }
//     cout << count;
//     return 0;
// }

                //optimal approach
                
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,3};
    int k = 3;
    map<int,int> mpp;
    mpp[0] = 1;
    int preSum = 0;
    int count = 0;
    for(int i = 0; i < nums.size(); i++) {
        preSum += nums[i];
        int remove = preSum - k;
        count += mpp[remove];
        mpp[preSum]++;
    }
    cout << count;
    return 0;
}