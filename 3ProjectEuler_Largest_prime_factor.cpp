//This does work with the sample number but it does not with the actual question.
#include <vector>
#include <bits/stdc++.h>

using namespace std;
bool is_prime(int n)//Finds out whether if it is a prime number or not
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
  vector<int>prime = {};
  int count =0;
   for (long long i =2;i<13195;i++){//finds factors for the number given
    if((13195)%i==0){
        if (is_prime(i)){
          prime.push_back(i);
        }
      }
    }
  cout<<*max_element(prime.begin(), prime.end());//gets the largest prime factor in the vector
  }
