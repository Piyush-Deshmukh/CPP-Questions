/*
   11111
   2222 
   333  
   44   
   5
*/

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for(int i=1;i<=rows;i++){
        for(int j=1; j<=rows-i+1;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}