#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   bool checkPerfectNumber(int num) {
      set<int> set={6,28,496,8128,33550336};
      return set.find(num)!=set.end();
   }
};
main(){
   Solution ob;
   cout << (ob.checkPerfectNumber(28));
}
