#include "base.h"
#include "Pow.h"
#include "Mult.h"
#include "Div.h"
#include "Add.h"
#include "Sub.h"
#include "Rand.h"
#include "Op.h"

using namespace std; 

int main() {
	
	Op* Op1 = new Op(2);
	Op* Op2 = new Op(3);
	Pow* Pow1 = new Pow(Op1, Op2);
	
	cout << Op1->evaluate() << endl;
	cout << Op1->stringify() << endl;
	cout << Pow1->evaluate() << endl;
	cout << Pow1->stringify() << endl;

	return 0;
}
