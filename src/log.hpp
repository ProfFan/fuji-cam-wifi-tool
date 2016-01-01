#ifndef FUJI_CAM_WIFI_TOOL_LOG_HPP
#define FUJI_CAM_WIFI_TOOL_LOG_HPP

#include <stdio.h>

#define LOG_INFO(str) printf("[INFO] " str "\n")
#define LOG_INFO_FORMAT(fmt, ...) printf("[INFO] " fmt "\n", __VA_ARGS__)

#define LOG_WARN(str) printf("[WARNING] " str "\n")
#define LOG_WARN_FORMAT(fmt, ...) printf("[WARNING] " fmt "\n", __VA_ARGS__)

namespace fcwt {

void print_hex(void const* data, size_t const sizeBytes);
void fatal_error(char const* msg);

} // namespace fcwt

#endif