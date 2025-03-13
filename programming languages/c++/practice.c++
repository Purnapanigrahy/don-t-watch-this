#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"enter the row : ";
    cin>>r;
    cout<<"enter the colomn : ";
    cin>>c;
    for (i=1;i<=r;i++){
        for(j=1;j<=c;j++)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}
