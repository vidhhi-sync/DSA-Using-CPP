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
*/

//Age Eligibity System
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if (age<18){
        cout<<"Not Eligible for job";
    }
    else if (age>=18 && age<=54){
        cout<<"Eligible for job";
    }
    else if(age>=55 && age<=57){
        cout<<"Eligible but retirement soon";
    }
    else{
        cout<<"Retirement time";
    }
    return 0;
}