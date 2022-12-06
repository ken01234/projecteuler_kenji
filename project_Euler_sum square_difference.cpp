#include <iostream>
using namespace std;
int main() {
  int sum = 0;
  int sumsq= 0;
  for (int i =1; i<=100;i++){
    sum = sum+(i*i);
    sumsq = sumsq + i; 
    }
  sumsq = sumsq*sumsq;
  int diff= sumsq-sum;
    cout <<diff;

  
}