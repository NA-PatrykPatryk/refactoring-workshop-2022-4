#include "SnakeSegments.hpp"

SnakeSegments::SnakeSegments(std::list<Segment>& segments)
    : s_segments(segments)
    {}

bool SnakeSegments::isSegmentAtPosition(int x, int y) const
{
    return s_segments.end() !=  std::find_if(s_segments.cbegin(), s_segments.cend(),
        [x, y](auto const& segment){ return segment.x == x and segment.y == y; });
}