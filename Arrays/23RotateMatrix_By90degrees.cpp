          //brute force approach

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<vector<int>>matrix={{4,1,2,8},{3,4,5,2},{1,3,1,5},{5,9,6,2}};
//     int n=matrix.size();
//     vector<vector<int>>ans(n,vector<int>(n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             ans[j][n-1-i]=matrix[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }

    
//     return 0;
// }


            //optimal approach

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>>matrix={{4,1,2,8},{3,4,5,2},{1,3,1,5},{5,9,6,2}};
    int n=matrix.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}