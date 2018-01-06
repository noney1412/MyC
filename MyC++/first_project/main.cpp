#include <iostream>

using namespace std;

// cout = console output_stream object.
int main() {

  int age;
  char bloodtype;
  cout << " How old are you ? ";
  cin >> age;
  cout << " Your age is " << age << " years old" << endl;
  cout << " Blood Type? "; 
  cin >> bloodtype;
  cout << " Your bloodtype is " << bloodtype;
  return 0;
}