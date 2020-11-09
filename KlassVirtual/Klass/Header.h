#pragma once
class Institution
{
public:
	virtual void sbal(float) = 0;
	virtual void student(int) = 0;
	virtual int getstudent() = 0;
	virtual float getbal() = 0;
	virtual void print() = 0;
};

