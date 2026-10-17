/*
//void function

#include<bits/stdc++.h>
using namespace std;

void printname(){
    string name;
    cout<<"Enter name:";
    cin>>name;
    cout<<name;
}
int main(){
    printname();
    return 0;
}


//parameterised function
#include<bits/stdc++.h>
using namespace std;
void printname(string name){
    cout<<"Hey"<<" "<<name<<endl;
}
int main(){
    string name,name2;
    cout<<"Enter your name:";
    cin>>name;
    printname(name);
    cin>>name2;
    printname(name2);
    return 0;
    
}
*/

//Return Function
#include<bits/stdc++.h>
using namespace std;
int add(int n1,int n2){
   int n3 = n2 + n1;
    return n3;
}
int main(){
    int n1,n2;
    cout<<"Enter values of n1 and n2:";
    cin>>n1>>n2;
    int result = add(n1,n2);
    cout<<result;
    return 0;

}