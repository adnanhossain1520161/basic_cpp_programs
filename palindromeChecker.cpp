#include<iostream>
#include <cstring> //needed for Array to string conversion
using namespace std;


void checkPalindrome(){
    string name;
    bool flag=true;
    int length;
    cout<<"Enter a name: ";
    cin>>name;
    length = name.length();
    char nameArray[length];

    strcpy(nameArray, name.c_str()); //converting the string to array

    //Logic that checks whether the string is palindrome
    for(int i=0; i<length;i++){
        if(nameArray[i]!=nameArray[length-i-1]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"The name you have entered is palindrome";
    }else{
        cout<<"The name you have entered is not palindrome";
    }

}

int main(){

    checkPalindrome();

return 0;
}

