
SET(BuildNYPropertyCopyCheckRule NYPropertyCopyCheck)
BUILD_DYNAMIC_RULES("${BuildNYPropertyCopyCheckRule}")

SET(BuildNYPropertyStrongCheckRule NYPropertyStrongCheck)
BUILD_DYNAMIC_RULES("${BuildNYPropertyStrongCheckRule}")

SET(BuildNYClassPrefixRule NYClassPrefix)
BUILD_DYNAMIC_RULES("${BuildNYClassPrefixRule}")

SET(BuildNYMethodNamingRule NYMethodNaming)
BUILD_DYNAMIC_RULES("${BuildNYMethodNamingRule}")

SET(BuildNYPropertyWeakRule NYPropertyWeak)
BUILD_DYNAMIC_RULES("${BuildNYPropertyWeakRule}")
