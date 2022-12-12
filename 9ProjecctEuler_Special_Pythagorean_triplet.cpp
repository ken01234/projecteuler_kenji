#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
  int c;
  for (int a =1;a<1000/3;a++){
    for(int b =2;b<1000/2;b++){
      c = 1000- a-b;
      if(pow(a,2)+pow(b,2)==pow(c,2)){
        cout<<a<<endl<<b<<endl<<c<<endl;
        int product = a*b*c;
        cout<<product;
        
        break;
      }
    }
  }
      
    }

  