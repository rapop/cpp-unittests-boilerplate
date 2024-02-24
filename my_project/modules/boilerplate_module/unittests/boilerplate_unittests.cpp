#include <boilerplate_module/boilerplate.h>

#include <gtest/gtest.h>

namespace boilerplate_module
{
    struct boilerplate_unittests : public ::testing::Test 
    {
    };

    struct GIVEN_v1_is_10_and_v2_is_1 : public boilerplate_unittests
    {
        const double v1 = 10;
        const double v2 = 1;
        
        boilerplate my_boilerplate{1};
    };

    TEST_F(GIVEN_v1_is_10_and_v2_is_1, THEN_return_11)
    {
        const double expected_result = 11;
        const double actual_result = my_boilerplate.return_sum(v1, v2);
        EXPECT_EQ(expected_result, actual_result);
    }
    
} // namespace boilerplate_module