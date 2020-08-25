#include <iostream>
#include <memory>
int main(int argc, char const *argv[])
{
  // 1. std::unique_ptr
  std::unique_ptr<int> ptr = std::make_unique<int>();
  // Change value to 1
  *ptr = 1;
  // 2. std::unique_ptr (by moving 'ptr' to 'ptr2', 'ptr' doesn't own the object anymore)
  std::unique_ptr<int> ptr2 = std::move(ptr);
  int a = *ptr2; // 'a' is 1
  int b = *ptr;  // undefined behavior! 'ptr' is 'nullptr'
                 // (because of the move command above)
  std::cout << a << std::endl;
  // std::cout << b << std::endl;

  return 0;
}
