#include "TestRuleOnCode.h"
#include "rules/custom/HLLPropertyCopyCheckRule.cpp"

TEST(HLLPropertyCopyCheckRuleTest, PropertyTest)
{
    HLLPropertyCopyCheckRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("h l l property copy check", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(HLLPropertyCopyCheckRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
