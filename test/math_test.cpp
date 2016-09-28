// External headers
#include "gmock/gmock.h"

// Tested header
#include "math.hpp"

/*----------------------------------------------------------------------------*/
/*                             USING DECLARATIONS                             */
/*----------------------------------------------------------------------------*/

using ::testing::Eq;

/*----------------------------------------------------------------------------*/
/*                                SIMPLE TESTS                                */
/*----------------------------------------------------------------------------*/

TEST(vector2, StoringNumbersCorrectly) {
    math::vector2i v1(3, 5);
    math::vector2i v2(v1);
    math::vector2i v3(v2);

    v3.x--;
    v3.y++;

    ASSERT_THAT(v1.x, Eq(3));
    ASSERT_THAT(v1.y, Eq(5));
    
    ASSERT_THAT(v2.x, Eq(3));
    ASSERT_THAT(v2.y, Eq(5));

    ASSERT_THAT(v3.x, Eq(2));
    ASSERT_THAT(v3.y, Eq(6));
}

TEST(vector2, OperatorsWorkingCorrectly) {
    math::vector2i v1(3, 5);
    math::vector2i v2(8, 12);

    math::vector2i sum = v1 + v2;
    math::vector2i sub = v1 - v2;
    int dot = v1*v2;
    math::vector2i mul_s = v1*3;
    math::vector2i div_s = v1/2;

    math::vector2i self_sum = v1;
    math::vector2i self_sum_ret = self_sum += v2;
    
    math::vector2i self_sub = v1;
    math::vector2i self_sub_ret = self_sub -= v2;

    math::vector2i self_mul_s = v1;
    math::vector2i self_mul_s_ret = self_mul_s *= 3;
    
    math::vector2i self_div_s = v1;
    math::vector2i self_div_s_ret = self_div_s /= 2;

    ASSERT_THAT(sum.x, Eq(11));
    ASSERT_THAT(sum.y, Eq(17));
    
    ASSERT_THAT(sub.x, Eq(-5));
    ASSERT_THAT(sub.y, Eq(-7));

    ASSERT_THAT(dot, Eq(84));
    
    ASSERT_THAT(mul_s.x, Eq(9));
    ASSERT_THAT(mul_s.y, Eq(15));
    
    ASSERT_THAT(div_s.x, Eq(1));
    ASSERT_THAT(div_s.y, Eq(2));
    
    ASSERT_THAT(self_sum.x, Eq(11));
    ASSERT_THAT(self_sum.y, Eq(17));
    
    ASSERT_THAT(self_sum_ret.x, Eq(11));
    ASSERT_THAT(self_sum_ret.y, Eq(17));
    
    ASSERT_THAT(self_sub.x, Eq(-5));
    ASSERT_THAT(self_sub.y, Eq(-7));
    
    ASSERT_THAT(self_sub_ret.x, Eq(-5));
    ASSERT_THAT(self_sub_ret.y, Eq(-7));
    
    ASSERT_THAT(self_mul_s.x, Eq(9));
    ASSERT_THAT(self_mul_s.y, Eq(15));
    
    ASSERT_THAT(self_mul_s_ret.x, Eq(9));
    ASSERT_THAT(self_mul_s_ret.y, Eq(15));
    
    ASSERT_THAT(self_div_s.x, Eq(1));
    ASSERT_THAT(self_div_s.y, Eq(2));
    
    ASSERT_THAT(self_div_s_ret.x, Eq(1));
    ASSERT_THAT(self_div_s_ret.y, Eq(2));
}
