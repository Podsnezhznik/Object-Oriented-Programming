#pragma once
#include <cstdarg>
#include <vector>
#include "Edge.h"

class Face
{
private:
	std::vector<Edge> edges;

public:
	Face(const int count, ...);
	void SetByCoordinates(const int count, ...);
	std::vector<Edge> GetCoordinates();
};

