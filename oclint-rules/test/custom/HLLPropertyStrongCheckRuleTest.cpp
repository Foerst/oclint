#include "TestRuleOnCode.h"
#include "rules/custom/HLLPropertyStrongCheckRule.cpp"

TEST(HLLPropertyStrongCheckRuleTest, PropertyTest)
{
    HLLPropertyStrongCheckRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("h l l property strong check", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(HLLPropertyStrongCheckRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
