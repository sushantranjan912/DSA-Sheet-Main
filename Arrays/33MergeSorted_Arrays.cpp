//brute force approach

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums1 = {1, 5, 7, 0, 0, 0};
    vector<int> nums2 = {2, 3, 6};
    int m=3;
    int n=3;
    vector<int>nums3(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            nums3[k]=nums1[i];
            i++;
        }
        else{
            nums3[k]=nums2[j];
            j++;
        }
        k++;
    }

    while(i<m){
        nums3[k++]=nums1[i++];
    }
    while(j<n){
        nums3[k++]=nums2[j++];
    }
    for(int x:nums3){
        cout<<x<<" ";
    }

    return 0;
}

//first optimal 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> nums1 = {1, 5, 7, 0, 0, 0};
//     vector<int> nums2 = {2, 3, 6};
//     int m=3;
//     int n=3;
//     int i=m-1;
//     int j=0;
//     while(i>=0 && j<n){
//         if(nums1[i]>nums2[j]){
//             swap(nums1[i],nums2[j]);
//             i--;
//             j++;
//         }
//         else{
//             break;
//         }
//     }
//     sort(nums1.begin(),nums1.begin()+m);
//     sort(nums2.begin(),nums2.end());
//     for(int i=0;i<n;i++){
//         nums1[m+i]=nums2[i];
//     }
//     for(int x:nums1){
//         cout<<x<<" ";
//     }

//     return 0;
// }