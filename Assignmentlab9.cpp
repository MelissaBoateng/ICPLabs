#include <iostream>
#include <ctime>

int const row = 101;
int const col = 101;
int const  N=2000;

void input (int [][col]);
void output(int [][col]);

using namespace std;

int main()
{
    int A[101][101] = { 0 };
    srand(time(0));
    	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
		{
		     A[101][101] = (rand() % (100 - 0 + 1)) + 10;
			std::cout << A[101][101] << std::endl;
			std::cin >> A[i][j];
		}
	}

    //int A[101][101] = { 0 };

    //input (A);
    //output(A);

    system("pause");
    return 0;
}

void populate_Array(int A[N][N])
{
    for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			std::cin >> A[i][j];
		}
	}
}
void  searchValidEntries(int XL, int YL, int XH, int YH)
{
    int A[101] [101]= { 0};
    int n = sizeof(A)/sizeof(A[0]);
 
    int element = XL;
    int i = 1;
    while (i < n)
    {
        if(A[i] == 'XL') {
            break;
        }
        i++;
    }
 
    if (i < n) {
        cout << "Element " << XL << " is present at index " << i
             << " in the given array";
    }
    else {
        cout << "Element is not present in the given array";
    }
  return ;
}



void output(int A[101][101])
{
    int sum;

    for (int i = 0; i < row; i++)
    {
        sum = 0;

        cout << "The sum of row" << i << " elements {" << A[i][0];
        for (int j = 1; j < col; j++)
        {
            sum += A[i][j];
            cout << " + " << A[i][j];
        }
        cout << "} is " << sum << endl;
    }

}