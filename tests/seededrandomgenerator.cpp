#include <gtest/gtest.h>

#include "seededrandomgenerator.hpp"

TEST (BasicSeededRandomGeneratorTest, BasicSeededRandomGeneratorSuite)
{
    const uint64_t seed = 0;
    const int64_t min = -20;
    const int64_t max = 20;

    SeededRandomGenerator generator1(seed);

    ASSERT_EQ(generator1.getRandomInteger(min, max), -14);
    ASSERT_EQ(generator1.getRandomInteger(min, max), 20);
    ASSERT_EQ(generator1.getRandomInteger(min, max), -19);
    ASSERT_EQ(generator1.getRandomInteger(min, max), 4);

    SeededRandomGenerator generator2(seed);

    ASSERT_EQ(generator2.getRandomInteger(min, max), -14);
    ASSERT_EQ(generator2.getRandomInteger(min, max), 20);
    ASSERT_EQ(generator2.getRandomInteger(min, max), -19);
    ASSERT_EQ(generator2.getRandomInteger(min, max), 4);

    SeededRandomGenerator generator3(seed);
    SeededRandomGenerator generator4(seed);

    for(int counter = 0; counter < 100; counter++)
    {
        ASSERT_EQ(generator3.getRandomInteger(min, max), generator4.getRandomInteger(min, max));
    }
}
