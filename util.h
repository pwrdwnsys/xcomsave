#ifndef UTIL_H
#define UTIL_H

#include <memory>

#ifdef _DEBUG
#define DBG(msg, ...) fprintf(stderr, msg, __VA_ARGS__)
#else
#define DBG(msg, ...)
#endif

unsigned int crc32b(const unsigned char *message, long len);

std::string iso8859_1toutf8(const std::string& in);
std::string utf8toiso8859_1(const std::string& in);

std::string toHex(const unsigned char *data, size_t dataLen);
std::unique_ptr<unsigned char[]> fromHex(const std::string& str);

std::string property_kind_to_string(XComProperty::Kind kind);

#endif // UTIL_H
