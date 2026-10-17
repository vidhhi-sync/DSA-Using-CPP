 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    string str;
    str = "Striver";
    cout<<str[1]<<endl;
    int len = str.size();
    cout<<str[len-1]<<endl;
    str[len-1] = 'z';
    cout<<str[len-1];
    return 0;

 }