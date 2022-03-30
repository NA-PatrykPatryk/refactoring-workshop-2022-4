#include "SnakeSegments.hpp"

SnakeSegments::SnakeSegments(std::list<Segment>& segments, Snake::Direction& direction)
    : s_segments(segments), s_currentDirection(direction)
    {}

bool SnakeSegments::isSegmentAtPosition(int x, int y) const
{
    return s_segments.end() !=  std::find_if(s_segments.cbegin(), s_segments.cend(),
        [x, y](auto const& segment){ return segment.x == x and segment.y == y; });
}

SnakeSegments::Segment SnakeSegments::calculateNewHead() const
{
    SnakeSegments::Segment const& currentHead = s_segments.front();

    SnakeSegments::Segment newHead;
    newHead.x = currentHead.x + (isHorizontal(s_currentDirection) ? isPositive(s_currentDirection) ? 1 : -1 : 0);
    newHead.y = currentHead.y + (isVertical(s_currentDirection) ? isPositive(s_currentDirection) ? 1 : -1 : 0);

    return newHead;
}