#ifndef DIV_H
#define DIV_H 

#include "base.h"
#include "Op.h"
#include "Rand.h"
#include "Pow.h"
#include "Mult.h"

class Div : public Base { 

	private:
		Base* left;
		Base* right;
	public:
		Div(Base* v1, Base* v2){
			left = v1;
			right = v2;
		}
		double evaluate() {
			return left->evaluate() * right->evaluate();
        	}
		string stringify(){
			string sent;
			sent = to_string(left->evaluate()) + "/" + to_string(right->evaluate());
			return sent;
		}
};

#endif
