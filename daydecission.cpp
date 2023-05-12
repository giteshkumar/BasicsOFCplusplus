#include <iostream>



using namespace std;



int main() {



  int riday = 4;



  switch (riday) {
    case 6:

      cout << "This is Saturday";

      break;

    case 7:

      cout << "This is Sunday";
      break;
    default:
      cout << "We are waiting for the weekend";
  }

  return 0;
}
