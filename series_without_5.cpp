#include <iostream>

using namespace std;


int main() {


  int a =1;

  while(a<=100)

  {

      if(a%5 == 0)

      {

          a = a+1;

          continue;

      }

      else

      {

          cout<<a<<endl;

          a = a+1;

      }

  }

  return 0;

}
