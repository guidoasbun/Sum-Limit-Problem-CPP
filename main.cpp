#include <iostream>

using namespace std;

int count_digit(int number);
int limitProblem(int a, int b);

/*
     Given 2 non-negative ints, a and b, print their sum, so long as the sum has the same number of
    digits as a. If the sum has more digits than a, just return a without b.
    • input of 2, 3 → 5
    • input of 8, 3 → 8
    • input of 8, 1 → 9
 */

int main() {
    cout << "Enter 2 non-negative numbers: ";
    int a{0}, b{0};
    cin >> a >> b;

    cout << endl;
    cout << "Input of " << a << ", " << b << " -> "
        << limitProblem(a, b) << endl;

    return 0;
}

int count_digit(int number) {
    int count = 0;
    while (number != 0) {
        number = number / 10;
        count++;
    }
    return count;
}

int limitProblem(int a, int b)
{
    int sum{a+b};
    int sumDigit{count_digit(sum)};
    int aDigit{count_digit(a)};
    int result{a};

    if(sumDigit == aDigit)
    {
        result = sum;
    }

    return result;
}