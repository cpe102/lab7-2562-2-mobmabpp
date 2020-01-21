#include<iostream>
#include<string>
using namespace std;

int main()
{
  string status;
  int A,H,M;

  cout << "Age";
  cin>>A;

  if(A<=20){
      cout<<"Height : ";
      cin>>H;
      if(H<160) status = "UNFRIEND";
      else if(H<175) status = "FRIEND";
      else{
          cout<<"Money : ";
          cin>> M;
          if(M>69) status = "MARRIED";
          else status = "ONE-NIGHT-STAND";
      }

  }else{
      if(A<30){
          cout<<"Money : ";
          cin>>M;
          if(M>10) status = "BEST FRIEND";
          else status = "UNFRIEND";
      }
      else status = "UNFRIEND";
  }

    cout << status ;
}