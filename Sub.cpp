#ifndef SUB_CPP
#define SUB_CPP

#include "base.h"
#include "Op.cpp"
#include "Rand.cpp"
#include "Pow.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Add.cpp"

class Sub : public Base {

	private:
		Base* left;
		Base* right;
	public:
		Sub(Base* v1, Base* v2) {
			left = v1;
			right = v2;
		}
		double evaluate() {
			string sent;
			sent = to_string(left->evaluate()) + "-" + to_string(right->evaluate());
			return sent;
		}

}; 

#endif
