#include <Esp.h>

// https://blog.haruncetin.com.tr/

// This source file captures the platform dependent code.
// This version was tested with ESP32 WROOM core for Arduino

#if defined(ARDUINO_ARCH_ESP32)

size_t getTotalAvailableMemory()
{
  return heap_caps_get_free_size(MALLOC_CAP_8BIT);
}

size_t getLargestAvailableBlock()
{
  return heap_caps_get_largest_free_block(MALLOC_CAP_8BIT);
}

#endif