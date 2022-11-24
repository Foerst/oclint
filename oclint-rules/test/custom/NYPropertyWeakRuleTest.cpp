#include "TestRuleOnCode.h"
#include "rules/custom/NYPropertyWeakRule.cpp"

TEST(NYPropertyWeakRuleTest, PropertyTest)
{
    NYPropertyWeakRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("n y property weak", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(NYPropertyWeakRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
