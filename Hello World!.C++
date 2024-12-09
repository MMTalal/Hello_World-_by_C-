#include <iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace to avoid writing std:: before cout

int main() // Start the program ..

 /*
It is recommended to use int main() because:

Compliance with the C++ Standard:
According to the C++ standard, main() is the entry point of any program. It is defined to return an int value to indicate the program's exit status. Writing int main() ensures adherence to the standard.

Returning a Value to the System:
Using return 0; at the end of main() signifies successful program execution. Omitting int main() or not returning a value may lead to undefined behavior in some compilers or environments, especially older ones that require strict standard compliance.

Portability and Cross-Platform Compatibility:
Writing int main() ensures better compatibility across different platforms and operating systems. In some environments, failing to return a value might cause the program to behave unexpectedly.
 */

{
    cout << "Hello, World!"<< endl << "My name is Mahmoud. This is My first time learning C++." << endl << "Nov, 15 2024";  // Print the phrase "Hello, World!" to the screen
    return 0;  // End the program and return 0 to indicate successful execution
}

/*
Alternative:
The following code shows the same output but splits the statement for better readability:

cout << "Hello, World!" << endl 
     << "My name is Mahmoud. This is my first time learning C++." << endl 
     << "Nov 15, 2024";
*/