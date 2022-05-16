#include <iostream>
using namespace std;

// Base class
class Liquid {
  public:
    void disp1() {
      cout << "Some content in L class.\n" ;
    }
};

// Another base class
class Fuel {
  public:
    void disp2() {
      cout << "Some content in F class.\n" ;
    }
};

// Derived class
class Petrol : public Liquid, public Fuel {
};

int main() {
	Liquid l; Fuel f; Petrol p;
 	l.disp1();
	f.disp2();	
	p.disp2();
	p.disp1();
  return 0;
}
