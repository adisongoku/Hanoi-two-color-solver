#include <iostream>

using namespace std;

static int c = 0;

void hanoi(int A, int B, int C, int n)
{
    if (n == 1 )
    {
        cout << A << " " << B << endl;
        c++;
           
    }
    else
    {
        hanoi(A, C, B, n - 1);
        hanoi(A, B, C, 1);
        hanoi(C, B, A, n - 1);                        
    }
}


int main()
{
    // A, B, C pegs  
    int A = 1;
    int B = 2;
    int C = 3;
    int n; // disks    
    {
       cout << "disks: " << endl;
       cin >> n;


        for (int i = 1; i < n; i++)
        {
            if (i%2)
            {
                hanoi(A, B, C, n - i);
            }
            else
            {
                hanoi(B, A, C, n - i);
            }
        }
        cout << "moves: " << c << endl;
        cout << "===================== " << endl;
        c = 0;
    }

        return 0;


}