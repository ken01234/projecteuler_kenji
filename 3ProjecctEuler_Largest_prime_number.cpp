#include <iostream>
#include <cmath>
using namespace std;
long long primefactor(long long p){// p is just a variable
    int i =2; 
  while((i*i)<p){// the sqyare of the factor should not be more than the number given so it drastically reduces the range of numbers that needs to be checked
    while(p%i==0){// This part will attempt to see if it can divide by i, if it can then it will shorten the number. This helps to make it faster.
      p/=i;
    }
    i++;
  }
  return p;
}
int main() {
  cout<<primefactor(600851475143);
}
