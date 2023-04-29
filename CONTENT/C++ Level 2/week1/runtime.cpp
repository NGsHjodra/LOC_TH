#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int factorial(int n) {
   if(n <= 1) 
      return 1;
   return n * factorial(n-1);
}

int main() {
   int n = 12;
   int result = 0;
   
   auto start = high_resolution_clock::now();
   
   for (int i = 0; i <= n; i++) {
    result = factorial(i);
   }
   
   auto stop = high_resolution_clock::now();
   
   auto duration = duration_cast<microseconds>(stop - start);
   
   cout << "Factorial of " << n << " is " << result << endl;
   cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
   
   return 0;
}
