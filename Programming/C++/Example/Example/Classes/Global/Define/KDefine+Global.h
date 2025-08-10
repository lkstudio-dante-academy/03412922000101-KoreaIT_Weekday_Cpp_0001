#pragma once

#include <iostream>
#include <cassert>
#include <string>
#include <memory>
#include <random>

// 메모리 관리
#define SAFE_DELETE(TARGET)					if((TARGET) != nullptr) { delete (TARGET); (TARGET) = nullptr; }
#define SAFE_DELETE_ARRAY(TARGET)			if((TARGET) != nullptr) { delete[] (TARGET); (TARGET) = nullptr; }
