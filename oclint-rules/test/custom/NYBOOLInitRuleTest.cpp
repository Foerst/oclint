#include "TestRuleOnCode.h"
#include "rules/custom/NYBOOLInitRule.cpp"

TEST(NYBOOLInitRuleTest, PropertyTest)
{
    NYBOOLInitRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("n y b o o l init", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(NYBOOLInitRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
