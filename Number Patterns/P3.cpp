/*
   1
   22
   333
   4444
   55555
*/

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for(int i=1;i<=rows;i++){
        for(int j=1; j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}