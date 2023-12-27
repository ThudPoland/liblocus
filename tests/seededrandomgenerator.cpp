#include <gtest/gtest.h>

#include "random/seededrandomgenerator.hpp"

TEST (BasicIntegerSeededRandomGeneratorTest, BasicSeededRandomGeneratorSuite)
{
    const uint64_t seed = 0;
    const int64_t min = -20;
    const int64_t max = 20;

    Locus::SeededRandomGenerator generator1(seed);

    ASSERT_EQ(generator1.getRandomInteger(min, max), -14);
    ASSERT_EQ(generator1.getRandomInteger(min, max), 20);
    ASSERT_EQ(generator1.getRandomInteger(min, max), -19);
    ASSERT_EQ(generator1.getRandomInteger(min, max), 4);

    Locus::SeededRandomGenerator generator2(seed);

    ASSERT_EQ(generator2.getRandomInteger(min, max), -14);
    ASSERT_EQ(generator2.getRandomInteger(min, max), 20);
    ASSERT_EQ(generator2.getRandomInteger(min, max), -19);
    ASSERT_EQ(generator2.getRandomInteger(min, max), 4);

    Locus::SeededRandomGenerator generator3(seed);
    Locus::SeededRandomGenerator generator4(seed);

    for(int counter = 0; counter < 100; counter++)
    {
        ASSERT_EQ(generator3.getRandomInteger(min, max), generator4.getRandomInteger(min, max));
    }
}

TEST (BasicDoubleSeededRandomGeneratorTest, BasicSeededRandomGeneratorSuite)
{
    const uint64_t seed = 0;
    const double min = -20.0;
    const double max = 20.0;

    Locus::SeededRandomGenerator generator1(seed);

    ASSERT_DOUBLE_EQ(generator1.getRandomDouble(min, max), -13.608265465181566);
    ASSERT_DOUBLE_EQ(generator1.getRandomDouble(min, max), 19.685808385193148);
    ASSERT_DOUBLE_EQ(generator1.getRandomDouble(min, max), -18.417238966205375);
    ASSERT_DOUBLE_EQ(generator1.getRandomDouble(min, max), 3.899786507786871);

    Locus::SeededRandomGenerator generator2(seed);

    ASSERT_DOUBLE_EQ(generator2.getRandomDouble(min, max), -13.608265465181566);
    ASSERT_DOUBLE_EQ(generator2.getRandomDouble(min, max), 19.685808385193148);
    ASSERT_DOUBLE_EQ(generator2.getRandomDouble(min, max), -18.417238966205375);
    ASSERT_DOUBLE_EQ(generator2.getRandomDouble(min, max), 3.899786507786871);

    Locus::SeededRandomGenerator generator3(seed);
    Locus::SeededRandomGenerator generator4(seed);

    for(int counter = 0; counter < 100; counter++)
    {
        ASSERT_DOUBLE_EQ(generator3.getRandomDouble(min, max), generator4.getRandomDouble(min, max));
    }
}
