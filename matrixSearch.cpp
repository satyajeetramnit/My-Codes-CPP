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

    int key;
    cout<<"Enter a target element :"<<endl;
    cin>>key;

//brut force
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < m; j++){
    //             if(a[i][j]==key){
    //                 cout<<"Element Found"<<endl;
    //                 return 0;
    //             }
    //     }
    // }
    // cout<<"Element not found"<<endl;
    // return 0;


    bool found=false;
    int r=0,c=m-1;
    while(r<n && c>=0){
        if(a[r][c]==key){
            found=true;
        }
        
        if(a[r][c]>key){
            c--;
        }
        else{
            r++;
        }
    }
    if(found)
    cout<<"Element found"<<endl;
    else
    cout<<"Element not found."<<endl;
    return 0;
}