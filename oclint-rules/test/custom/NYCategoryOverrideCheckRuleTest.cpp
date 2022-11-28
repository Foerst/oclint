#include "TestRuleOnCode.h"
#include "rules/custom/NYCategoryOverrideCheckRule.cpp"

TEST(NYCategoryOverrideCheckRuleTest, PropertyTest)
{
    NYCategoryOverrideCheckRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("n y category override check", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(NYCategoryOverrideCheckRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
