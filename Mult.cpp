#ifndef MULT_H
#define MULT_H

#include "base.h"
#include "Op.h"
#include "Rand.h"
#include "Pow.h"

class Mult : public Base {

	private:
		Base* left;
		Base* right;
	public:
		Mult() { }
		Mult(Op var1, Op var2) { }
		double evaluate() {
			return ((left->evaluate()) * (right->evalute()));
		}
		string stringify() {
			string sent = to_string(left->evaluate) + " * " + to_string(right->evaluate);
			return sent;
		}  

};

#endif
