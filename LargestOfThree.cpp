/* LargestOfThree.cpp : This file contains the 'main' function.Program execution begins and ends there.
*
* dH 2/15/23
* demo for C++ Programming Class
* 
* input: three ints from user
* processing: calculate total and largest
* output: total and largest to system console
*
* References:
*    https://www.w3schools.com/cpp/cpp_user_input.asp
*    




*/


#include <iostream>

int main()
{
    std::cout << "\n Hello from Largest of Three Program\n";

    // Declare some variables
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int largest = 0;
    int total = 0;

    // Get three integers from the user.
    std::cout << "\n Enter the first integer: ";
    std::cin >> num1;
    std::cout << "\n Enter the second integer: ";
    std::cin >> num2;
    std::cout << "\n Enter the third integer: ";
    std::cin >> num3;

    // Calculate the total 
    total = num1 + num2 + num3;

    // Find the largest
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            largest = num1;
        }
        else
        {
            largest = num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            largest = num2;
        }
        else 
        {
            largest = num3;
        }
    }

    // Output the largest and the total of the three ints.
    std::cout << "\n\n The largest of " << num1 << " and " << num2 << " and " << num3 << " is " << largest;

    std::cout << "\n\n The total is " << total << "\n\n";
    std::cout << "\n\n The largest is " << largest << "\n\n";

}


