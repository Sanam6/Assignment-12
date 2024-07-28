#include<iostream>
#include<vector>
using namespace std;
bool perfectmatrix(vector<vector<int>>arr){
    for(int i =0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(i==j||i+j==arr.size()-1){
            if(arr[i][j]==0){
                return false;
            }}
            else if(arr[i][j]!=0){
                return false;
            }
        }
    }

    return true;
}

int main()
{
   int n;
    cin>>n;
    vector<vector<int>> arr(n ,vector<int>(n));
    for(int i = 0 ;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

perfectmatrix(arr)?cout<<"True":cout<<"False";

return 0;
}