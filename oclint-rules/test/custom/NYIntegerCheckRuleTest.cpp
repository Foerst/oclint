#include "TestRuleOnCode.h"
#include "rules/custom/NYIntegerCheckRule.cpp"

TEST(NYIntegerCheckRuleTest, PropertyTest)
{
    NYIntegerCheckRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("n y integer check", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(NYIntegerCheckRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
