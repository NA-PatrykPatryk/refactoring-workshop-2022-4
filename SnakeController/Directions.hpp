#pragma once
#include "SnakeInterface.hpp"

bool isHorizontal(Snake::Direction direction)
{
    return Snake::Direction_LEFT == direction or Snake::Direction_RIGHT == direction;
}

bool isVertical(Snake::Direction direction)
{
    return Snake::Direction_UP == direction or Snake::Direction_DOWN == direction;
}

bool isPositive(Snake::Direction direction)
{
    return (isVertical(direction) and Snake::Direction_DOWN == direction)
        or (isHorizontal(direction) and Snake::Direction_RIGHT == direction);
}

bool perpendicular(Snake::Direction dir1, Snake::Direction dir2)
{
    return isHorizontal(dir1) == isVertical(dir2);
}