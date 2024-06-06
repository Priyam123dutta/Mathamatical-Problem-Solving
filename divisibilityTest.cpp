#include <iostream>

using namespace std;

bool divisibilityCheck(int num, int target)
{
    switch (target)
    {
        int temp, sum;
        bool check2, check3;
    case 2:
        temp = num % 10;

        if (temp % 2 == 0)
        {
            return true;
        }
        return false;
    
    case 3:
        sum = 0;
        while (!num)
        {
            temp = num % 10;
            sum += temp;
        }

        if (sum % 3 == 0)
        {
            return true;
        }
        return false;
    
    case 4:
        temp = num % 100;

        if (temp % 4 == 0)
        {
            return true;
        }
        return false;

    case 5:
        temp = num % 10;

        if (temp == 0 || temp == 5)
        {
            return true;
        }
        return false;

    case 6:
        check2 = divisibilityCheck(num, 2);
        check3 = divisibilityCheck(num, 3);

        if (check2 && check3)
        {
            return true;
        }
        return false;

    // case 7:

    case 8:
        temp = num % 1000;

        if (temp % 8 == 0)
        {
            return true;
        }
        return false;
    
    case 9:
        sum = 0;
        while (!num)
        {
            temp = num % 10;
            sum += temp;
        }

        if (sum % 9 == 0)
        {
            return true;
        }
        return false; 

    case 10:
        temp = num % 10;

        if (temp == 0)
        {
            return true;
        }
        return false;

    // case 11:

    default:
        return false;
    }
        
}

int main()
{
    int num, target;
    cout << "Enter the number to check: ";
    cin >> num;

    cout << "Enter the the number to check divisibility: ";
    cin >> target;

    bool result = divisibilityCheck(num, target);

    if (result)
        cout << "It is divisible";
    else
        cout << "Not divisible";

    return 0;
}