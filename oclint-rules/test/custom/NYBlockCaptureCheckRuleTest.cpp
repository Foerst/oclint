#include "TestRuleOnCode.h"
#include "rules/custom/NYBlockCaptureCheckRule.cpp"

TEST(NYBlockCaptureCheckRuleTest, PropertyTest)
{
    NYBlockCaptureCheckRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("n y block capture check", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(NYBlockCaptureCheckRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
