#include <bits/stdc++.h>//This is to generate the nth row
using namespace std;

vector<int>generaterow(int row){
    long long ans=1;
    vector<int>ansrow;
    ansrow.push_back(1);
    for(int col=1;col<row;col++){
        ans=ans*(row-col);
        ans/=col;
        ansrow.push_back(ans);
    }
    return ansrow;

}

int main() {//This is to print all the rows
    int numrows=5;
    vector<vector<int>>result;
    for(int i=1;i<=numrows;i++){
        result.push_back(generaterow(i));
    }
    int m=result.size();
    for(int i=0;i<m;i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}