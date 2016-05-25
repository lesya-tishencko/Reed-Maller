#include "intruders_channel.h"

error_r1_editor::error_r1_editor(Eigen::VectorXi content, int m) {
	this->content = content;
	this->m = m;
	this->error_count = pow(2, m - 2) - 1;
	srand(time(0));
}

error_r2_editor::error_r2_editor(Eigen::VectorXi content, int m) {
	this->content = content;
	this->m = m;
	this->error_count = pow(2, m - 3) - 1;
	srand(time(0));
}

Eigen::VectorXi error_editor::get_vector_with_error() {
	int count = rand() % error_count;
	Eigen::VectorXi bad_vector = content;
	for (int i = 0; i < count; i++) {
		int ind = rand() % bad_vector.size();
		bad_vector[ind] = bad_vector[ind] == 0 ? 1 : 0;
	}
	return bad_vector;
}