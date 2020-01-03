#include <iostream>

int prost(int num) {
 for (int i=2; i <= num/2; i++)
  if (num % i== 0)
   return false;
 return true; }

int main (int argc, char const *argv[]) {
  int n, max = -1, number;
  std::cin >> n;

  while (n) {
    std::cin >> number;

  if (prost(number) && number > max)
    max = number;
  n--;  }

 if (max < 0)
   std:: cout << "Niste uneli prost broj" << std::endl;
else
   std::cout << "Najveci prost broj medju unetima: " << max << std::endl;
return 0;
}