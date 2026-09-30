/*
//Simple if else statements
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>> age;
    if(age>=18){
        cout<<"Adult";
    }
    else{
        cout<<"not adult";
    }
    return 0;
}

*/

//grading system
#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    if(80<=marks && marks<=100){
        cout<<"A";
    }
    else if(60<=marks && marks<=79){
        cout<<"B";
    }
    else if(50<=marks && marks<=59){
        cout<<"C";
    }
    else if(45<=marks && marks<=49){
        cout<<"D";
    }
    else if(25<=marks && marks<=44){
        cout<<"E";
    }
    else if(marks<25){
        cout<<"F";
    }
    else{
        cout<<"invalid input";
    }
    return 0;
}