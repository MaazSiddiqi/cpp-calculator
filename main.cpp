#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  double a, b, ans;
  char op;
  const char VALID_OPS[] = {'+', '-', '*', '/'};

  cout << "Welcome to Calculator \n";

  while (true) {
    cout << "Please enter the first integer \n";
    cin >> a;

    cout << "Which operation? (+, -, *, /) \n";
    cin >> op;
    const char *valid = find(std::begin(VALID_OPS), std::end(VALID_OPS), op);
    if (valid == std::end(VALID_OPS)) {
      cout << "Invalid operator, please try again\n";
      continue;
    }

    cout << "Please enter the second integer \n";
    cin >> b;

    switch (op) {
    case '+':
      ans = a + b;
      break;
    case '-':
      ans = a - b;
      break;
    case '*':
      ans = a * b;
      break;
    case '/':
      ans = a / b;
      break;
    default:
      cout << "Invalid operation\n";
      continue;
    }

    break;
  }

  cout << "Your question is: " << a << " " << op << " " << b << " = " << ans
       << "\n";

  return 0;
}
