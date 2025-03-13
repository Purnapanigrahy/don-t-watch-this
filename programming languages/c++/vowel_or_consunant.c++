//this logic is working but u have to change a little bit
#include<iostream>
using namespace std;
int main(){
    char word;
    cout<<"enter the word to know it's vowel or consunant : ";
    cin>>word;
    if (word== 'a' | word== 'e' | word== 'i' |word== 'o' | word== 'u' )
    cout<<"it's a vowel";
    else
    cout<<"it's a consunant";
    return 0;
}