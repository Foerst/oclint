#include "TestRuleOnCode.h"
#include "rules/custom/NYIfCheckRule.cpp"

TEST(NYIfCheckRuleTest, PropertyTest)
{
    NYIfCheckRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("n y if check", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(NYIfCheckRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
