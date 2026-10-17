/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    for(int i =0;i<5;i=i+1){
        cin>>arr[i];
    }
    for(int i=0;i<5;i=i+1){
        cout<<arr[i]<<" ";
    }
    return 0;
}

*/

//array always goes with refernce
#include<bits/stdc++.h>
using namespace std;
void dosome(int arr[],int n){
    arr[0]+=100;
    cout<<"Value inside func:"<<arr[0]<<endl;
}
int main(){
    int n =5;
    int arr[n];
    for(int i =0;i<n;i = i+1){
        cin>>arr[i];
    }
    dosome(arr,n);
    cout<<"Value inside int main:"<<arr[0]<<endl;
    return 0;
}