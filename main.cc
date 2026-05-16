#include <iostream>

void testA() {
  std::cout << "this is a" << std::endl;
}

void testB() {
  // this is a comment
  std::cout << "this is b" << std::endl;
}

int main(int agrc, char** agrv) {
  testA();
  testB();
  return 0;
}