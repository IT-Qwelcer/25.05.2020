#include "Ocean.h"
#include <iostream>
#include <string>

Ocean::Ocean()
{
	name = "";
	type = "";
	width = 0;
	length = 0;
	depth = 0;
	sum = 0;
}

Ocean::~Ocean()
{
}

void Ocean::SetName(std::string name)
{
	this->name = name;
}

void Ocean::SetType(std::string type)
{
	this->type = type;
}

void Ocean::SetWidth(int width)
{
	this->width = width;
}

void Ocean::SetLength(int length)
{
	this->length = length;
}

void Ocean::SetDepth(int depth)
{
	this->depth = depth;
}

std::string Ocean::GetName()
{
	return name;
}

std::string Ocean::GetType()
{
	return type;
}

int Ocean::GetVolume()
{
	sum = width * length * depth;
	return sum;
}
