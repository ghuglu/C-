#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number:";
cin>>n;
if(n>90){
    cout<<"Grade A";
}else if(n>80){
    cout<<"Grade B";
}else if(n>70){
  cout<<"Grade C";
}else if(n>60){
  cout<<"Grade D";
}else if(n>50){
   cout<<"Grade E";
}else{
   cout<<"Fail";
}
}
