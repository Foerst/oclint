#include "TestRuleOnCode.h"
#include "rules/custom/NYClassPrefixRuleRule.cpp"

TEST(NYClassPrefixRuleRuleTest, PropertyTest)
{
    NYClassPrefixRuleRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("n y class prefix rule", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(NYClassPrefixRuleRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
