// Rat In a Maze Problem: 
// Given a maze(2D matrix) with obstacles, 
// starting from (0,0) you have to reach (n-1, n-1). 
// If you are currently on (x,y), you can move to (x+1,y) or (x,y+1). 
// You can not move to the walls.

#include<iostream>
using namespace std;

// Time Complexity: O(2^n) 
// Space Complexity: O(2^n)

bool isSafe(int** arr,int x,int y,int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratMaze(int** arr,int x,int y, int n, int** solArr){
    if(x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n)){
        solArr[x][y] = 1;
        if(ratMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(ratMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y]=0;             //backtracking
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter the size of the maze : "<<endl;
    cin>>n;
    
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    cout<<"Enter the layout of the maze wit 0 as obstacle and 1 as a clear path."<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int** solArr=new int*[n];
    for(int i=0;i<n;i++){
        solArr[i]=new int[n];
        for(int j=0;j<n;j++){
            solArr[i][j]=0;
        }
    }

    cout<<"The path taken by the rat is as follows :"<<endl;
    if(ratMaze(arr,0,0,n,solArr)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}