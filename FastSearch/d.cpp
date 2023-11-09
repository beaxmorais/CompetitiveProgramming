//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
//Binary Search
#include <bits/stdc++.h>
using namespace std;
 
int binarySearchFirst(vector<int> &arr, int key) {
 
  int r = 0, l = arr.size() - 1, mid = (r + l) / 2;
 
  while (r <= l) {
    if (key <= arr[mid])
      l = mid - 1;
    else
      r = mid + 1;
 
    mid = (r + l) / 2;
  }
 
  return r;
}
 
int binarySearchLast(vector<int> &arr, int key) {
  int r = 0, l = arr.size() - 1, mid = (r + l) / 2;
 
  while (r <= l) {
 
    if (key < arr[mid])
      l = mid - 1;
 
    else
      r = mid + 1;
 
    mid = (l + r) / 2;
  }
 
  return l + 1;
}
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m;
  cin >> n;
  vector<int> arr;
 
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    arr.push_back(t);
  }
 
  cin >> m;
 
  sort(arr.begin(), arr.end());
 
  for (int i = 0; i < m; i++) {
    int c, t;
    cin >> c >> t;
    cout << binarySearchLast(arr, t) - binarySearchFirst(arr, c) << " ";
  }
}