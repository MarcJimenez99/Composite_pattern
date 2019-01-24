#include "gtest/gtest.h"
#include "base.h"
#include "Pow.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Add.cpp"
#include "Sub.cpp"
#include "Rand.cpp"
#include "Op.cpp" 
#include "RandMock.cpp"
#include <iostream>
#include <string>

using namespace std;

TEST(CompositeTest, OpEvaluateInt) {
	Op* Op1 = new Op(1);
	EXPECT_EQ(1.0, Op1->evaluate());
}

TEST(CompositeTest, RandEvaluate) {
	RandMock* x = new RandMock();
	EXPECT_EQ(2.0, x->evaluate());
}

TEST(CompositeTest, OpEvaluateDouble) {
	Op* Op1 = new Op(1.0);
	EXPECT_EQ(1.0, Op1->evaluate());
}

TEST(CompositeTest, OpEvaluateNegative) {
	Op* Op1 = new Op(-1); 
	EXPECT_EQ(-1.0, Op1->evaluate());
} 

TEST(CompositeTest, OpStringifyInt) {
	Op* Op1 = new Op(1);
	EXPECT_EQ("1.000000", Op1->stringify());
} 

TEST(CompositeTest, RandStringify) {
	RandMock* x = new RandMock(); 
	EXPECT_EQ("2.000000", x->stringify());
}

TEST(CompositeTest, OpStringifyDouble) {
	Op* Op1 = new Op(1.0);
	EXPECT_EQ("1.000000", Op1->stringify());
}

TEST(CompositeTest, OpStringifyNegative) {
	Op* Op1 = new Op(-1.0);
	EXPECT_EQ("-1.000000", Op1->stringify());
}

TEST(CompositeTest, PowDoubleOpEvaluate) {
	Op* x = new Op(2.0);
	Op* y = new Op(2.0); 
	Pow* Pow1 = new Pow(x, y); 
	EXPECT_EQ(4.0, Pow1->evaluate()); 
}

TEST(CompositeTest, PowDoubleRandEvaluate) {
	RandMock* x = new RandMock();
	Op* y = new Op(2.0);
	Pow* Pow1 = new Pow(x, y); 
	EXPECT_EQ(4.0, Pow1->evaluate());
}
int main(int argc, char**argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
