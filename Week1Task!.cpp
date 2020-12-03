// Week1Task!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;

#include <iostream>

int main()
{
    int x = 5;

    int y = 10;

    int z = (x + y);
  
    std::cout << "Hello World!\n";

    std::cout << "Hello World!";
    // from these lines of code I can see that \n starts a new line in the debugging menu

    std::cout << "Hello\n World!\n";

    std::cout << "He" << "ll" << "o W" << "orld!" << "\n";

    std::cout << '@' <<"\n";

    std::cout << 5<< "\n";

    std::cout << 23.6f << "\n";

    std::cout << true <<"\n" ;
    
    std::cout << false <<"\n";
    // outputting true/false will instead output 1/0 since computers see 1 as on an d0 as off hence true/false

    std::cout << x << endl;

    std::cout << x << y << std::endl;

    std::cout << "the value of z is " << z << endl;

    x = 3;

    std::cout << "x is now " << x << endl;

    x = 7;

    std::cout << "x is now " << x << endl;

    x = (x + 2);
    // in this line of code we are adding 2 to the current amount stored in x
    // we can also use signs such as /, -, and * to divide, subract, and multiply 
    std::cout << "x is now" << x << endl;

    char myCharacter = 'd';

    std::cout << myCharacter << endl;

    myCharacter = (myCharacter + 1);

    std::cout << myCharacter << endl;

    myCharacter = 63;
    // 63 is the numeber used to represent "?"
    std::cout << myCharacter << endl;

    myCharacter = (myCharacter + 1);
    // here we are adding to 63 which will give use the character that is represented by 64 
    std::cout << myCharacter << endl;

    int myNumber = 5;

    std::cout << "my number is " << myNumber << endl;

    myNumber = (myNumber + 2);

    std::cout << "my number is " << myNumber << endl;

    myNumber += 2; 
    // "+= x" will have the same effect as "(myNumber + x)"
    // can also use "++" to increase the value by an increment of 1 ("--" also works)
    std::cout << "my number is " << myNumber << endl;

    int Characters[5];

    Characters[0] = 'f';

    Characters[1] = 'g';

    Characters[2] = 'h';

    Characters[3] = 'i';

    Characters[4] = 'j';

    int Floats[3];

    Floats[0] = 4.6f;

    Floats[1] = 7.1f;

    Floats[2] = 5.5f;

    const char *Strings[3];

    Strings[0] = "TOGA";

    Strings[1] = "is";

    Strings[2] = "awsome";

    int boolean[4];
    // int can be used here as true and false represent 1 and 0 
    boolean[0] = true;

    boolean[1] = false;

    boolean[2] = false;

    boolean[3] = true;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
