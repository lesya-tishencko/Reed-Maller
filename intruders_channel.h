#ifndef INTRUDERS_CHANNEL_H
#define INTRUDERS_CHANNEL_H

#include "lib.h"

class error_editor {
protected:
	int m;
	Eigen::VectorXi content;
	int error_count;

public:
	virtual Eigen::VectorXi get_vector_with_error();
};

class error_r1_editor : public error_editor {
public:
	error_r1_editor(const Eigen::VectorXi content, int m);
};

class error_r2_editor : public error_editor {
public:
	error_r2_editor(const Eigen::VectorXi content, int m);
};

#endif