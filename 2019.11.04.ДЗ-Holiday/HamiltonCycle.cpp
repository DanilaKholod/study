#include <iostream>
#include <deque>
#include <iterator>
using namespace std;
deque < int >cycle;
void
HamiltonCycle (bool ** A, int N)
{
  for (int k = 0; k < N * (N - 1); k++)
    {
      if (A[cycle.at (0)][cycle.at (1)] == 0)
	{
	  int i = 2;
	  while (A[cycle.at (0)][cycle.at (i)] == 0
		 || A[cycle.at (1)][cycle.at (i + 1)] == 0)
	    i++;
	  int t = cycle.at (i);
	  cycle.erase (cycle.cbegin () + i);
	  cycle.insert (cycle.cbegin () + i, cycle.at (1));
	  cycle.erase (++cycle.cbegin ());
	  cycle.insert (++cycle.cbegin (), t);
	}
      cycle.push_back (cycle.front ());
      cycle.pop_front ();
    }
  for (int i = 0; i < N; i++)
    cout << cycle.at (i) + 1 << " ";
}

int
main ()
{
  int N;
  bool **matrix;
  cin >> N;
  matrix = new bool *[N];
  for (int i = 0; i < N; i++)
    {
      matrix[i] = new bool[N];
    }
  for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
	{
	  cin >> matrix[i][j];
	}
    }
  for (int i = 0; i < N; i++)
    {
      cycle.push_back (i);
    }
  HamiltonCycle (matrix, N);
  return 0;
}
