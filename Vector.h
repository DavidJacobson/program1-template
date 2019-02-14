#include <cstdio>

class Vector{

public:
	~Vector();
	void insert(int index, Planet *p);
	Planet * read(int index);
	bool remove(int index);
	unsigned size();
private:
	int temp;
};
