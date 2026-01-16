#include<iostream>
using namespace std;
int main()
{
    int marks ;
    cin>> marks;
    if(marks>=80){
        cout<<"A+";

    }else if(marks >= 70){
        cout<<"A";

    }else if(marks>= 60){
        cout<<"B";

    }else{
        cout<<"Fail";
    }
}