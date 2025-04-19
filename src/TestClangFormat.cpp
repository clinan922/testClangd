#include "TestClangFormat.h"
#include <ranges>

template <typename T>
concept Addable = requires(T a, T b) { a + b; };

void Example::process(std::vector<int> &vec)
{
    for (auto &x: vec)
    {
        if (x % 2 == 0) { x *= 2; }
    }
}
Example::~Example()
{
    delete m_data;
}