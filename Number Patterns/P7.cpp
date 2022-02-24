/*
    1    
   212   
  32123  
 4321234 
543212345
*/

#include<iostream>
using namespace std;

int main(){
    int rows,i,j,k;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
            cout<<" ";
        }
        k=i;
        for(j;j<=rows;j++){
            cout<<k--;
        }
        k=2;
        for(j;j<=rows+i-1;j++){
            cout<<k++;
        }
        cout<<endl;
    }
    return 0;
}