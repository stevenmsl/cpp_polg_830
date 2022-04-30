#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <stack>
#include <string>
#include <sstream>
using namespace sol830;
using namespace std;

/*takeaways
  - use brute force
*/

vector<vector<int>> Solution::getPos(string s)
{
  const int N = s.size();
  auto result = vector<vector<int>>();

  /* number of chars in a group */
  auto count = 0;
  for (auto i = 0; i < N - 1; i++)
  {
    count++;
    /*the end of a group */
    if (s[i] != s[i + 1])
    {
      if (count >= 3)
        /* the starting pos can be calulated */
        result.push_back({i - count + 1, i});
      count = 0;
    }
  }

  return result;
}
