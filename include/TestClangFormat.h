#pragma once
#include <vector>

class Example
{
public:
    Example(int val):
        m_data(new int(val))
    {}
    void process(std::vector<int> &vec);
    ~Example();

private:
    int *m_data;
};
