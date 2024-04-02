#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;

  while (T--)
  {
    int N;
    cin >> N;

    string A, B;
    cin >> A >> B;

    int chefWins = 0;
    int chefinaWins = 0;
    int diff = 0;

    for (int i = 0; i < N; ++i)
    {
      if (A[i] == B[i])
      {
        continue;
      }

      if ((A[i] == 'R' && B[i] == 'S') ||
          (A[i] == 'S' && B[i] == 'P') ||
          (A[i] == 'P' && B[i] == 'R'))
          {
        chefWins++;
      } else {
        chefinaWins++;
      }
    }

    diff = max(0, chefinaWins - chefWins);

    cout << diff << endl;
  }

  return 0;
}
