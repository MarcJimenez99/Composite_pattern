#include "gtest/gtest.h"
#include "base.h"
#include "Pow.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Add.cpp"
#include "Sub.cpp"
#include "Rand.cpp"
#include "Op.cpp" 
#include <iostream>
#include <string>

using namespace std;

TEST(CompositeTest, OpEvaluateInt) {
	Op* Op1 = new Op(1);
	EXPECT_EQ(1.0, Op1->evaluate());
}

TEST(CompositeTest, OpEvaluateDouble) {
	Op* Op1 = new Op(1.0);
	EXPECT_EQ(1.0, Op1->evaluate());
}

TEST(CompositeTest, OpEvaluateNegative) {
	Op* Op1 = new Op(-1); 
	EXPECT_EQ(-1, Op1->evaluate());
} 

//TEST(CompositeTest, Op  
int main(int argc, char**argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
