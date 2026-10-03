#include <iostream>
using namespace std;

// print n number of patterns
void printNumberPatterns(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// print n number of star patterns
void printStartPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Print Alphabet Patterns of A B C D
void PrintAlphabetPattern()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

// print 1 to 16 in square pattern
void printSquarePattern1To16()
{
    // for (int i = 1; i <= 16; i++)   //1st approach
    // {
    //     cout << i << " ";
    //     if (i % 4 == 0)
    //     {
    //         cout << endl;
    //     }
    // }
    for (int i = 0; i < 4; i++) // 2nd approach
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << (i * 4) + j << " ";
        }
        cout << endl;
    }
}

// print start increasing order till n (trangle Pattern)
// *
// * *
// * * *
// * * * *
void printStarPatternIncreasingOrder(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// print trangle number pattern in increasing order
// 1
// 2 2
// 3 3 3
// 4 4 4 4
void printNumberPatternIncreasingOrder(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

// print trangle Alphabet pattern in increasing order
// A
// B B
// C C C
// D D D D
void printAlphabetPatternIncreasingOrder(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + i) << " ";
        }
        cout << endl;
    }
}

// print trangle Alphabet pattern in increasing order
// 1
// 2 3
// 4 5 6
// 7 8 9 10
void printNumberPattern(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            count++;
            cout << count << " ";
        }
        cout << endl;
    }
}

// print trangle Alphabet pattern in increasing order
// A
// B C
// D E F
// G H I J
void printAlphabetPattern(int n)
{
    char num = 64;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            num++;
            cout << char(num) << " ";
        }
        cout << endl;
    }
}

// print inverted trangle pattern with number
// 1 1 1 1
//   2 2 2
//     3 3
//       4
void invertedTranglePatternWithSameNumber(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                cout << "  ";
            }
            else
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    // printNumberPatterns(4);
    // printStartPattern(4);
    // PrintAlphabetPattern();
    // printSquarePattern1To16();
    // printStarPatternIncreasingOrder(10);
    // printNumberPatternIncreasingOrder(9);
    // printAlphabetPatternIncreasingOrder(10);
    // printNumberPattern(4);
    // printAlphabetPattern(6);
    invertedTranglePatternWithSameNumber(4);
    return 0;
}