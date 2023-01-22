// Repeat Front Problem

//    Given a string and an int n, create a new string
//    made of the first n characters of the original
//    string, followed by the first n-1 characters of
//    the original string, and so on. You may assume
//    that n is between 0 and the length of the string,
//    inclusive (i.e. n >= 0 and n <= str.length())

//    Output
//   "Chocolate", 4 -> "ChocChoChC"
//   "Chocolate", 3 -> "ChoChC"
//   "Ice Cream", 2 -> "IcI"

#include <iostream>
#include <string>
using namespace std;

string repeat(const string &str, int n)
{
   string result = "";

   for (int i = n; i > 0; i--) // declare and set i = n; when i is greater than 0; decrement i.
   {
      result += str.substr(0, i); // use substr start at position 0, i (which is set to n)
   }
   return result;
}

int main()
{

   cout << "Testing repeat(\"Chocolate\"): " << repeat("Chocolate", 4) << endl;
   cout << "Testing repeat(\"Choccolate\"): " << repeat("Chocolate", 3) << endl;
   cout << "Testing repeat(\"Ice Cream\"): " << repeat("Ice Cream", 2) << endl;
   return 0;
}
