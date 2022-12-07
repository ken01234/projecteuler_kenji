#include <bits/stdc++.h>

using namespace std;
int count =0;
bool is_prime(int n)//the exact same one as the one in largest prime factor
{
  if (n < 2) return false;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}
int main() {
  int count =0;
   for (int p =0;p<1000000;p++){
    if(is_prime(p)==true){//finds a prime number and the count increases by one to show the number of prime numbers
      count+=1;
    }
    if(count==10001){//stops when the 10001st prime number is found 
      cout<<p<<endl;
      break;
    }
  }
  }