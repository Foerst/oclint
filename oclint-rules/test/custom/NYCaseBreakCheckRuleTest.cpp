#include "TestRuleOnCode.h"
#include "rules/custom/NYCaseBreakCheckRule.cpp"

TEST(NYCaseBreakCheckRuleTest, PropertyTest)
{
    NYCaseBreakCheckRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("n y case break check", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(NYCaseBreakCheckRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
