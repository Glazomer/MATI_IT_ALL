#include <iostream>
#include <vector>

using namespace std;

int main()
{ 
  int n, m;
  std::cin >> n >> m;

  string out;
  vector< vector<int> > matrix(n, vector<int>(m));
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j){
      std::cin >> matrix[i][j];

      if (matrix[i][j])
        matrix[i][j] = matrix[i][j] < 0 ? -1 : 1;
      out += to_string(matrix[i][j]) + ' ';
    }

    cout << out << '\n';
  return 0;
}