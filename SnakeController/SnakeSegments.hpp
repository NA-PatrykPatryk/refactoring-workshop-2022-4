#pragma once

#include <list>
#include <algorithm>

#include "SnakeInterface.hpp"
#include "Directions.hpp"

class SnakeSegments
{
public:
struct Segment
    {
        int x;
        int y;
    };
public:
    SnakeSegments(std::list<Segment>& segments, Snake::Direction& direction);

    bool isSegmentAtPosition(int x, int y) const;
    Segment calculateNewHead() const;

private:
    std::list<Segment>& s_segments;
    Snake::Direction& s_currentDirection;
};