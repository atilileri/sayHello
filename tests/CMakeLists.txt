find_package(GTest REQUIRED)

add_executable(SpeakerTest
    SpeakerTest.cpp
)

target_link_libraries(SpeakerTest
    PRIVATE
    Speaker
    GTest::GTest
    GTest::Main
)

add_test(SpeakerTest SpeakerTest)