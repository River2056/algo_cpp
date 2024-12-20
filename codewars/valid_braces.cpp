#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool valid_braces(const std::string &braces) {
  stack<char> stk;
  for (int i = 0; i < braces.length(); i++) {
    if (stk.empty()) {
      stk.push(braces[i]);
    } else {
      char top = stk.top();
      if ((top == '(' && braces[i] == ')') ||
          (top == '[' && braces[i] == ']') || (top == '{' && braces[i] == '}'))
        stk.pop();
      else
        stk.push(braces[i]);
    }
  }

  return stk.empty();
}

int main(int argc, char *argv[]) {
  string s = "()[]{}";
  cout << valid_braces(s) << "\n";

  s = "[{]";
  cout << valid_braces(s) << "\n";

  s = "((()))";
  cout << valid_braces(s) << "\n";

  s = "(((";
  cout << valid_braces(s) << "\n";

  return 0;
}
