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
    return 0;
}