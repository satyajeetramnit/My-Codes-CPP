#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the no. of rows and column :";
    cin>>n>>m;
    int a[n][m];
    
    cout<<"Enter the elements of the array :"<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
                cin>>a[i][j];
        }
    }

    cout<<"\nThe spiral order of Matrix traversal is :"<<endl;
    int rowStart=0,rowEnd=n-1,columnStart=0,columnEnd=m-1;

    while(rowStart<=rowEnd && columnStart<=columnEnd){
        for(int c=columnStart;c<=columnEnd;c++){
            cout<<a[rowStart][c]<<" ";
        }
        rowStart++;
        
        for(int r=rowStart;r<=rowEnd;r++){
            cout<<a[r][columnEnd]<<" ";
        }
        columnEnd--;

        for(int c=columnEnd;c>=columnStart;c--){
            cout<<a[rowEnd][c]<<" ";
        }
        rowEnd--;

        for(int r=rowEnd;r>=rowStart;r--){
            cout<<a[r][columnStart]<<" ";
        }
        columnStart++;
    }

    return 0; 



}