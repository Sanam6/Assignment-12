#include<iostream>
#include<vector>
using namespace std;
void upper(vector<vector<int>> &arr){
    cout<<endl;
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr.size();j++){
        if(j>=i)
             cout<<arr[i][j]<<" ";

        
    }
    cout<<endl;
}

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
    upper(arr);


return 0;
}