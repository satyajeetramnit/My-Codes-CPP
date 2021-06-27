#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of sq. matrix : ";
    cin>>n;
    int a[n][n];
    
    cout<<"Enter the elements of the array : "<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
                cin>>a[i][j];
        }
    }
    cout<<"Transpose of the given matrix is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
                cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}