#include <assert.h>

#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>

FUZZ_TEST(const uint8_t *data, size_t size) {
  FuzzedDataProvider fuzzed_data(data, size);
  int my_int = fuzzed_data.ConsumeIntegral<int64_t>();

  assert(my_int != 1234567890);
}
