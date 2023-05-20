// for inverting a num. i.e from 4 to -4
// #include<iostream>
// using namespace std;
// int main()
// {
//  int num = 4;
//  cout << (~num)+1; // -5
//  return 0;
// }

//for checking if a number is odd or even
// #include <iostream>
// using namespace std;
// // Returns true if
// // n is even
// bool isEven(int n)
// {
//     return (!(n & 1));
// }
// int main()
// {
//     int n = 101;
//     isEven(n) ? cout<<"EVEN" : cout<<"ODD";
//     return 0;
// }

//for setting 1 at the nth position
// #include<iostream>
// using namespace std;
// void set(int & num, int pos) {
//   // (1<<pos) shifting 1 to the pos
//   num |= (1 << pos);
// }
// int main() {
//   int num = 4, pos = 2;
//   set(num, pos);
//   cout << (int)(num) << endl;
//   return 0;
// }

//for setting 0 at the nth position
#include<iostream>
using namespace std;
// First step is to get a number that has all 1’s except the given position.
void unset(int & num, int pos)
{
  //Second step is to bitwise and this number with given number
  num &= (~(1 << pos));
}
int main()
{
  int num = 7;
  int pos = 1;
  unset(num, pos);
  cout << num << endl;
  return 0;
}

//for altering bit(from 0 to 1 and vice versa) at nth position
// #include<iostream>
// using namespace std;
// void toggle(int & num, int pos) {
//   num ^= (1 << pos);
// }
// int main() {
//   int num = 4;
//   int pos = 1;
//   toggle(num, pos);
//   cout << num << endl; // outputs 6
//   return 0;
// }

//for checking the bit at nth position
// #include<iostream>
// using namespace std;
// bool at_position(int num, int pos)
// {
//   bool bit = num & (1 << pos);
//   return bit;
// }
// int main()
// {
//   int num = 5;
//   int pos = 0;
//   bool bit = at_position(num, pos);
//   cout << bit << endl;
//   return 0;
// }

