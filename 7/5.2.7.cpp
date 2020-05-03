#include <iostream>
#include <vector>

#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  
  int max1 = 0, max2 = 0, min1 = 0, min2 = 0, n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; ++i){
    cin >> arr[i];
    if (arr[i] >= max1){
      max2 = max1;
      max1 = arr[i];
    }else if (arr[i] >= max2){
      max2 = arr[i];
    }

    if (arr[i] <= min1){
      min2 = min1;
      min1 = arr[i];
    }else if (arr[i] <= min2){
      min2 = arr[i];
    }
  }

  if (n < 2){
    cout << "Can not find 2 elements" << endl;
  }
  
  cout << max(min1 * min2, max1 * max2)<< endl;

  return 0;
}