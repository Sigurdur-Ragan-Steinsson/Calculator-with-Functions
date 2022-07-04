#include <iostream>

using namespace std;

float calculator(int num1, int num2, char op){
  int result;
  if(op == '+')
    return num1 + num2;
  if(op == '-')
    return num1 - num2;
  if(op == '*')
    return num1 * num2;
  if(op == '/')
    return num1 / num2;
  if(op == '%')
    return num1 % num2;
  else
  return 0;
};


int main() {
  int n1, n2;
  char ops;
  cout << "Please enter number 1, number 2, then the operator" << endl;
  cin >> n1;
  cin >> n2;
  cin >> ops;
  cout << calculator(n1,n2,ops) << endl;
} 