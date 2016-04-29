#include "lib.h"

int Gaussian_elimination(const Eigen::MatrixXi h, const Eigen::VectorXi v, int in) {
	Eigen::MatrixXi Ht = h.transpose();
	assert(in < Ht.rows());
	Ht.block(in, 0, 1, Ht.cols()) = v.transpose();
	for (int i = 0; i < Ht.rows(); i++) {
		int j = 0;
		while (j < Ht.cols() && Ht(i, j) == 0) j++;
		for (int k = i + 1; k < Ht.rows(); k++)
		if (j < Ht.cols() && Ht(k, j) != 0) {
			Ht.block(k, 0, 1, Ht.cols()) += Ht.block(i, 0, 1, Ht.cols());
			Ht.block(k, 0, 1, Ht.cols()) -= (Ht.block(k, 0, 1, Ht.cols()) / 2) * 2;
		}
	}
	int result = 0;
	for (int i = 0; i < Ht.rows(); i++)
	if (Ht.block(i, 0, 1, Ht.cols()) != Eigen::VectorXi(Ht.cols()).setZero().transpose())
		++result;
	return result;
}

Eigen::VectorXi sum(const Eigen::MatrixXi h, const std::vector<int> & ind) {
	Eigen::VectorXi result = Eigen::VectorXi(h.rows()).setZero();
	for (int i = 0; i < ind.size(); i++) {
		result += h.block(0, ind[i], h.rows(), 1);
		result -= (result / 2) * 2;
	}
	return result;
}