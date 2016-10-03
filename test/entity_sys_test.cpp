// External headers
#include "gmock/gmock.h"

// Tested header
#include "entity_system.hpp"

/*----------------------------------------------------------------------------*/
/*                             USING DECLARATIONS                             */
/*----------------------------------------------------------------------------*/

using ::testing::Eq;

/*----------------------------------------------------------------------------*/
/*                                SIMPLE TESTS                                */
/*----------------------------------------------------------------------------*/

TEST(EntitySystem, EntitySystemRunningProperly) {
    using namespace game;

    class test_ent : public Entity
    {
    public:
        test_ent(EntitySystem &_entitySystem, int _num)
            : Entity(_entitySystem), number(_num)
        {
        }

    public:
        void update(std::chrono::duration<double> dt)
        {
            number++;
        }

        int getNumber()
        {
            return number;
        }

    private:
        int number;
    };

    EntitySystem ent_system("Test Entity System");

    test_ent ent1(ent_system, 5);
    test_ent ent2(ent_system, 2);
    ent_system.run();
    test_ent ent3(ent_system, 6);
    test_ent ent4(ent_system, 1);

    ASSERT_THAT(ent3.getNumber(), Eq(6));
    ASSERT_THAT(ent4.getNumber(), Eq(1));

    ASSERT_THAT(&ent3, Eq(ent_system.getEntity(ent3.getEntityId())));
    ASSERT_THAT(&ent4, Eq(ent_system.getEntity(ent4.getEntityId())));

    ASSERT_THAT(ent1.getNumber(), Eq(6));
    ASSERT_THAT(ent2.getNumber(), Eq(3));
}
