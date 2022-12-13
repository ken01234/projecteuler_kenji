// It works but when attempting to find the first triangle number to have over five hundred divisors, it takes too long.
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main(){
int tri;
int count = 0;
int i = 0;
  while(count<=5){
    tri=(i*(i+1))/2; //Finding the triangle number
    i++;
    for(int n=1;n<=tri;n++){//finding the divisors of the number
      if(tri%n==0){
        count+=1;
      }
      if(count==5){//stop when reached the number wanted
        break;
      }
    }
    if(count ==5){
      cout<<tri;
      break;
    }
    count=0;
  }

}
