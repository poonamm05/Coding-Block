#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> mat(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    for(int j=0;j<c;j++){
        if(j%2==0){

            for(int i=0;i<r;i++){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int i=r-1;i>=0;i--){
                cout<<mat[i][j]<<" ";

            }
        }
    }
    return 0;
}