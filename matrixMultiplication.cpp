#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the no. of rows and column of matrix 1 :";
    cin>>a>>b;
    int x[a][b];
    
    cout<<"Enter the elements of the array :"<<endl;
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
                cin>>x[i][j];
        }
    }
    int d,c;
    cout<<"Enter the no. of rows and column of matrix 2 :";
    cin>>d>>c;
    int y[d][c];
    if(d!=b){
        cout<<"Invalid."<<endl;
        return 0;
    }
    
    cout<<"Enter the elements of the array :"<<endl;
    for (int i = 0; i < d; i++){
        for (int j = 0; j < c; j++){
                cin>>y[i][j];
        }
    }

    int z[a][c];
    for (int i = 0; i < a; i++){
        for (int j = 0; j < c; j++){
                z[i][j]=0;
        }
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<b;k++){
                z[i][j]=z[i][j]+y[k][j]*x[i][k];
            }
        }
    }

    cout<<"Multiplied matrix of 1 & 2 is :"<<endl;
     for (int i = 0; i < a; i++){
        for (int j = 0; j < c; j++){
                cout<<z[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}