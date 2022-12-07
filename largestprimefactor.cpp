
#include <vector>
#include <bits/stdc++.h>

using namespace std;
bool is_prime(int n)
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
  vector<int>ans = {};
  int count =0;
   for (long long i =2;i<13195;i++){
    if((13195)%i==0){
        if (is_prime(i)){
          prime.push_back(i);
        }
      }
    }
  cout<<*max_element(prime.begin(), prime.end());
  }