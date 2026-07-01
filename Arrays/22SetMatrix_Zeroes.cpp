//brute force  approach

// #include <bits/stdc++.h>
// using namespace std;

// void markRow(vector<vector<int>>& matrix, int row, int n) {
//     for(int j = 0; j < n; j++) {
//         if(matrix[row][j] != 0) {
//             matrix[row][j] = -1;
//         }
//     }
// }

// void markCol(vector<vector<int>>& matrix, int col, int m) {
//     for(int i = 0; i < m; i++) {
//         if(matrix[i][col] != 0) {
//             matrix[i][col] = -1;
//         }
//     }
// }

// int main() {
//     vector<vector<int>> matrix = {
//         {1,1,1},
//         {1,0,1},
//         {1,1,1}
//     };

//     int m = matrix.size();
//     int n = matrix[0].size();

//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             if(matrix[i][j] == 0) {
//                 markRow(matrix, i, n);
//                 markCol(matrix, j, m);
//             }
//         }
//     }

//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             if(matrix[i][j] == -1)
//                 matrix[i][j] = 0;
//         }
//     }

//     cout << "Final Matrix :" << endl;

//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

                    //better approach

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<vector<int>>matrix={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
//     int m=matrix.size();
//     int n=matrix[0].size();
//     vector<int>row(m,0);
//     vector<int>col(n,0);
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(matrix[i][j]==0){
//                 row[i]=1;
//                 col[j]=1;
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(row[i] || col[j]){
//                 matrix[i][j]=0;
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }

    
//     return 0;
// }

                    //optimal approach(better space complexity)
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>>matrix={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int m=matrix.size();
    int n=matrix[0].size();
    int col0=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0){
                    matrix[0][j]=0;
                }
                else{
                    col0=0;
                }

            }

        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0;j<n;j++){
            matrix[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<m;i++){
            matrix[i][0]=0;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    
    return 0;
}