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

TEST(vector2, ShouldStoreNumbersCorrectly) {
    math::vector2i v(3, 5);

    ASSERT_THAT(v.x, Eq(3));
    ASSERT_THAT(v.y, Eq(5));
}
