#include "TestRuleOnCode.h"
#include "rules/custom/NYMethodNamingRule.cpp"

TEST(NYMethodNamingRuleTest, PropertyTest)
{
    NYMethodNamingRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("n y method naming", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(NYMethodNamingRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
