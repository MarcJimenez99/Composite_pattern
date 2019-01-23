#ifndef SUB_H
#define SUB_H

#include "base.h"
#include "Op.h"
#include "Rand.h"
#include "Pow.h"
#include "Mult.h"
#include "Div.h"
#include "Add.h"

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
