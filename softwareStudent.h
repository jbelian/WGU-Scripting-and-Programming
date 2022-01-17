#pragma once
#include "degree.h"
#include "student.h"

class SoftwareStudent : public Student
{
protected:
	Degree degree = SOFTWARE;
public:
	using Student::Student;
	Degree getDegree() override;
};