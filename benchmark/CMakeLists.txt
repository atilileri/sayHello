find_package(benchmark REQUIRED)

add_executable(SpeakerBench
    SpeakerBench.cpp
)

target_link_libraries(SpeakerBench
    PRIVATE
    Speaker
    benchmark::benchmark
)