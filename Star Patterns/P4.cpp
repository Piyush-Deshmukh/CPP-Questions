/*
   *****
   ****
   ***
   **
   *
*/

//Method 1
#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for(int i=1;i<=rows;i++){
        for(int j=1; j<=rows-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//Method 2
#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for(int i=rows;i>=1;i--){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}