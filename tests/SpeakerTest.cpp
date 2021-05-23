#include "Speaker.h"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(SpeakerTest, atilileri) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect outputs to be equal.
    EXPECT_EQ("Hi atilileri", sayHi("atilileri"));
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

// some longer tests for duration
TEST(SpeakerTest, longTest) {
    for (int i=0; i<100000; ++i)
    {
        // Expect outputs to be equal.
        EXPECT_EQ("Hi atililerialkan" + std::to_string(i), sayHi("atililerialkan" + std::to_string(i)));
    }
}

