// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
    cout<<"enter the row and cloum of matrix a:"<<endl;
    cin>>r1>>c1;
    cout<<"enter the row and cloun of matrix b:"<<endl;
    cin>>r2>>c2;
    if(c1!=r2){
    cout<<"matrix multipliction isnot possible"<<endl;
    cout<<"again input the row and column of both matrix:";
    cout<<"enter the row and cloum of matrix a:"<<endl;
    cin>>r1>>c1;
    cout<<"enter the row and cloun of matrix b:"<<endl;
    cin>>r2>>c2;
    }
    cout<<"enter the element of matrix of a:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"element of a"<<i+1<<j+1<<"=";
            cin>>a[i][j];
        }
    }
     cout<<"enter the element of matrix of b:"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"element of b"<<i+1<<j+1<<"=";
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]= 0;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
