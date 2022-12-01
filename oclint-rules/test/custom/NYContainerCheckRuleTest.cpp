#include "TestRuleOnCode.h"
#include "rules/custom/NYContainerCheckRule.cpp"

TEST(NYContainerCheckRuleTest, PropertyTest)
{
    NYContainerCheckRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("n y container check", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(NYContainerCheckRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
