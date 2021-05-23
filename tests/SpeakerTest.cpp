#include "Speaker.h"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(SpeakerTest, atilileri) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect outputs to be equal.
    EXPECT_EQ("Hi atilile", sayHi("atilileri")); // insterted failure here for demonstration purposes.
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

// part 2
TEST(SpeakerTest, test2) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect outputs to be equal.
    EXPECT_EQ("Hi atililerialkan", sayHi("atililerialkan"));
    // Expect equality.
    EXPECT_EQ(7 * 3, 21);
}

