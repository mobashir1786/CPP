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

int main()
{
    // cout << positiveOrNegative(5) << endl;
    // cout << isEligibleVoter(20) << endl;
    // cout << evenOrOdd(4) << endl;
    // cout << checkGrade(18) << endl;
    // cout << checkCharacter('B') << endl;
    return 0;
}