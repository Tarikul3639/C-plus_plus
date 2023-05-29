#include <bits/stdc++.h>
using namespace std;
#define nn '\n'
int main()
{
   int test;
   cin >> test;
      int countt = 0;

   while (test--)
   {
      int a, b, c;
      cin >> a >> b >> c;
      int sum = a + b + c;
      if (sum >= 2)
      {
         countt++;
      }
   }
   cout << countt<<nn;

   return 0;
}
