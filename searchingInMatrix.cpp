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
    
    cout<<"Enter the element to search :"<<endl;
    int key;
    cin>>key;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j]==key)
            {
                    count++;
                    cout<<i<<" "<<j<<endl;
            }
            
        }
        
    }
    cout<<"Number of occourences of "<<key<<" in the matrix is "<<count<<" whose indices are mentioned above."<<endl;
    
    return 0;
}