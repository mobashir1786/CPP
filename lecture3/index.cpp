#include <iostream>
using namespace std;

// check if a number is positive, negative, or zero
string positiveOrNegative(int n)
{
    if (n > 0)
    {
        return "Positive";
    }
    else if (n < 0)
    {
        return "Negative";
    }
    else
    {
        return "Zero";
    }
}

// check elegible voter or not
string isEligibleVoter(int age)
{
    if (age >= 18)
    {
        return "Eligible Voter";
    }
    else
    {
        return "Not Eligible Voter";
    }
}

// check if a number is even or odd
string evenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}

// check grade of a student based on marks
char checkGrade(int marks)
{
    if (marks >= 90)
    {
        return 'A';
    }
    else if (marks >= 80)
    {
        return 'B';
    }
    else if (marks >= 70)
    {
        return 'C';
    }
    else if (marks >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

// check character is lowercase, uppercase
string checkCharacter(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return "Lowercase Letter";
    }
    else
    {
        return "Uppercase Letter";
    }
}

// print Number using while loop
void printNumbersUsingWhile(int n)
{
    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;
}

// print numbers using for loop
void printNumbersUsingFor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

// print sum of 1 to n numbers
int printSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

// sum of odd numbers from 1 to n using while loop
int sumOfOddNumbers(int n)
{
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }
    return sum;
}

// sum of even numbers from 1 to n using for loop
int sumOfEvenNumbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

// check if a number is prime or not
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) // because a number is not prime if it has a divisor other than 1 and itself, we only need to check up to n/2, its optimized to check up to sqrt(n) but for simplicity we are checking up to n/2
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// print m and n * using nested for loop
void printPattern(int m, int n)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// print sum n number which is divisible by 3 and 5
int sumOfNumbersDivisibleBy3And5(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

// print factorial of n
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    // cout << positiveOrNegative(5) << endl;
    // cout << isEligibleVoter(20) << endl;
    // cout << evenOrOdd(4) << endl;
    // cout << checkGrade(18) << endl;
    // cout << checkCharacter('B') << endl;
    // printNumbersUsingWhile(5);
    // printNumbersUsingFor(5);
    // cout << printSum(10) << endl;
    // cout << sumOfOddNumbers(10) << endl;
    // cout << sumOfEvenNumbers(10) << endl;
    // isPrime(9) ? cout << "Prime" : cout << "Not Prime" << endl;
    // printPattern(5, 5);
    // cout << sumOfNumbersDivisibleBy3And5(15) << endl;
    // cout << factorial(5) << endl;
    return 0;
}