#ifndef __OCEAN_H_
#define __OCEAN_H_
#include <string>

class Ocean
{
public:
	Ocean();
	~Ocean();

	void SetName(std::string name);
	void SetType(std::string type);
	void SetWidth(int width);
	void SetLength(int length);
	void SetDepth(int depth);
	std::string GetName();
	std::string GetType();
	int GetVolume();

private:
	std::string name;
	std::string type;
	int width;
	int length;
	int depth;

	int sum;
};

#endif

