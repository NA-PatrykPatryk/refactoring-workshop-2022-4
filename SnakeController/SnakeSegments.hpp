#pragma once

#include <list>
#include <algorithm>

#include "SnakeInterface.hpp"

class SnakeSegments
{
public:
struct Segment
    {
        int x;
        int y;
    };
public:
    SnakeSegments(std::list<Segment>& segments);

    bool isSegmentAtPosition(int x, int y) const;

private:
    std::list<Segment>& s_segments;
};