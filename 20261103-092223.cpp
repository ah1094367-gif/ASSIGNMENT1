#include <iostream>
using namespace std;
int main(){
int eng,math,com,science,urdu,percentage,totalmark,average ;

cout<<"enter mark of English";
cin>>eng ;
cout<<"enter mark of math";
cin>>math;
cout<<"enter mark of science ";
cin>>science;
cout<<"enter mark of Urdu";
cin>>urdu;
cout<<"enter mark of com";
cin>>com;
totalmark=math +com+science+ urdu+eng;
cout<<totalmark;
average =totalmark/5;

cout<<average <<endl;
percentage =(totalmark*100)/500;;
cout<<percentage;
return 0;

}








    