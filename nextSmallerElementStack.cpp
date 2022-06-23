#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int> s;
    s.push(-1);
    vector<int> ans;

    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(curr);
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
}