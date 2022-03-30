#pragma once

#include <list>
#include <algorithm>

class SnakeSegments
{
public:
struct Segment
    {
        int x;
        int y;
    };

    bool isSegmentAtPosition(int x, int y) const;

    std::list<Segment> m_segments;
};