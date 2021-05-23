#include <benchmark/benchmark.h>
#include "Speaker.h"

// Define a pseudo benchmark
static void BM_StringCreateCopy(benchmark::State& state)
{
    for (auto _ : state)
    {
        std::string msgToWorld = "hello";
        std::string copy(msgToWorld);
    }
}
// Register the function as a benchmark
BENCHMARK(BM_StringCreateCopy);

// Define another benchmark
static void BM_HiTo1Million(benchmark::State& state)
{
    for (auto _ : state)
    {
        for (int i=0; i<1000000; ++i)
        {
            sayHi("person #" + std::to_string(i));
        }
    }
}
BENCHMARK(BM_HiTo1Million);

BENCHMARK_MAIN();