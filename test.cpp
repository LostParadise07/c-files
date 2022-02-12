#include <iostream>
#include <vector>
using namespace std;

void solve(vector<vector<int>> &ans,vector<int> &v,vector <int> &arr,int n,int k,int i){

if(k==0)
ans.push_back(v);

if (i>=n)
{
    return;
}

for (; i < n; i++)
{
   v.push_back(arr[i]);
   solve(ans,v,arr,n,k-arr[i],i+1);
   v.pop_back();
}

}

vector<vector<int>> sumtok(vector <int> &arr,int n,int k){

    vector<vector<int>> ans;
    vector<int> v;
    solve (ans,v,arr,n,k,0);
    return ans;
}

int main(){

vector <int> arr={1,2,3,4,5,6};
int n=5;
int k=5;
int ans=sumtok(arr,n,k);

}
