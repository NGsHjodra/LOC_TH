#include <iostream>
#include <memory>

using namespace std;

int main() {
   int a = 1234;

   size_t size = sizeof(a);
   
   cout << "Memory used by program: " << size << " bytes" << endl;
   
   return 0;
}
