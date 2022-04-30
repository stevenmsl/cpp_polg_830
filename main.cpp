#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol830;

/*
Input: "abbxxxxzzy"
Output: [[3,6]]
Explanation: "xxxx" is the single large group with starting  3 and ending positions 6.
*/
tuple<string, vector<vector<int>>>
testFixture1()
{
  return make_tuple("abbxxxxzzy",
                    vector<vector<int>>{{3, 6}});
}

/*
Input: "abc"
Output: []
Explanation: We have "a","b" and "c" but no large group.
*/
tuple<string, vector<vector<int>>>
testFixture2()
{
  return make_tuple("abc",
                    vector<vector<int>>{});
}

/*
Input: "abcdddeeeeaabbbcd"
Output: [[3,5],[6,9],[12,14]]
*/
tuple<string, vector<vector<int>>>
testFixture3()
{
  return make_tuple("abcdddeeeeaabbbcd",
                    vector<vector<int>>{{3, 5}, {6, 9}, {12, 14}});
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see " << Util::toString(get<1>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.getPos(get<0>(f))) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see " << Util::toString(get<1>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.getPos(get<0>(f))) << endl;
}

void test3()
{
  auto f = testFixture3();
  cout << "Expect to see " << Util::toString(get<1>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.getPos(get<0>(f))) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}