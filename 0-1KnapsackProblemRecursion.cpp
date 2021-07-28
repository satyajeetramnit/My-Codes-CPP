#include<iostream>
using namespace std;

// Time Complexity: O(2^n) 
// Space Complexity: O(2^n)//Space for call stack

int knapsack(int value[],int wt[],int n,int W){
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(value,wt,n-1,W);
    }
    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
}

int main(){
    int n;
    cout<<"Enter the number of items :"<<endl;
    cin>>n;
    int value[n];
    cout<<"Enter the value of the respective items :"<<endl;
    for(int i=0;i<n;i++){
        cin>>value[i];
    }
    int wt[n];
    cout<<"Enter the weight of the respective items :"<<endl;
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    int W;
    cout<<"Enter the capacity of the knapsack :"<<endl;
    cin>>W;
    cout<<"The maximum value of the items that can be put in the knapsack is "<<knapsack(value,wt,n,W);
    return 0;
}