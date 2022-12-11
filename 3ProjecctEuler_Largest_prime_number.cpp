#include <iostream>
#include <cmath>
using namespace std;
long long primefactor(long long p){
    int i =2; 
  while((i*i)<p){
    while(p%i==0){
      p/=i;
    }
    i++;
  }
  return p;
}
int main() {
  cout<<primefactor(600851475143);
}
