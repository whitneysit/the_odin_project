#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> list, int left, int right, int num){
  if (right - left == 1){
    if (list[left] == num){
    return left; 
    }
    if (list[right] == num){
      return right;
    }
    else {
      return -1;
    }
  }
  
  int midpoint = (left + right)/2;

  if (num < list[midpoint]){
    return binarySearch(list, left, midpoint, num);
  }
  else{
    return binarySearch(list, midpoint, right, num);
  }
}

int main() {
  vector<int> sortedList = {0, 0, 0 ,0 ,0, 9, 10};
  int index = binarySearch(sortedList, 0, sortedList.size()-1, 11);
  index == -1 ? cout << "not found" : cout<<index; 
}
