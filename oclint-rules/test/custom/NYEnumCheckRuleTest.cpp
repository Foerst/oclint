#include "TestRuleOnCode.h"
#include "rules/custom/NYEnumCheckRule.cpp"

TEST(NYEnumCheckRuleTest, PropertyTest)
{
    NYEnumCheckRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("n y enum check", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(NYEnumCheckRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
