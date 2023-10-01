#include <cctype>
#include <iostream>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s) {

  if (s.size() < 1)
    return 0;

  if (s.size() < 2)
    return 1;

  int max_lenght_substring = 0;

  int begin = 0, end;

  for (int i = 1; i < s.size(); i++) {
    end = i;
    int j = begin;

    while (j < end) {
      if (s[i] == s[j])
        begin = j + 1;
      j++;
    }
    max_lenght_substring = max(max_lenght_substring, (end - begin) + 1);
  }
  return max_lenght_substring;
}