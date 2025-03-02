#include <iostream>
using namespace std;

int main(){
    int age;
    cin>>age;
    
    //          if-else
    // if(age<18){
    //     cout<<"You cannot come to my party";
    // }else if(age == 18){
    //     cout<<"You will get a kid pass to party";
    // }else{
    //     cout<<"You can come to the party";
    // }

    //          switch-case
    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;
    case 22:
        cout<<"You are 22";
        break;
    case 2:
        cout<<"You are 2";
        break;
    
    default:
    cout<<"No special cases";
        break;
    }
    cout<<"\nDone with switch case";
    return 0;
}