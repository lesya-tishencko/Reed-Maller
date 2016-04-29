#ifndef STEGO_H
#define STEGO_H

#include "lib.h"

std::vector<bool> binary(unsigned value, int count_num);
unsigned decimal(const Eigen::VectorXi & x, bool source = false);

class translator {
protected:
	int size;
	std::wstring text;
	const std::set<char> punctual = std::set<char>() = { '&', ' ', '.', ',', ':', ';', '-', '%', '$', '(', ')', '[', ']', '{', '}', '@', '^', '/', '+', '?', '!', '#', '"', '\n' };
	std::map<char, std::vector<bool>> dictionary_ch_to_vec;
	std::map<std::vector<bool>, char> dictionary_vec_to_ch;
	Eigen::VectorXi message;
	virtual void create_dictionary();
	virtual Eigen::VectorXi translate_text();
	virtual std::wstring translate_vector();

public:
	translator(std::wstring t, int size = 8);
	translator(Eigen::VectorXi & message, int size = 8);
	std::wstring get_text() { return text; }
	Eigen::VectorXi get_message() { return message; }
};

class decrypted_vector {
protected:
	Eigen::MatrixXi matrix_H;
	Eigen::VectorXi encrypted_vector;
	int m;
	virtual Eigen::MatrixXi create_matrix_H();
	decrypted_vector() {}

public:
	virtual Eigen::VectorXi get_decrypted_vector();
};

class decrypted_r2_vector : public decrypted_vector {
protected:
	virtual Eigen::MatrixXi create_matrix_H();
public:
	decrypted_r2_vector() {}
	decrypted_r2_vector(int m, Eigen::VectorXi & encrypted_vector);
};

class decrypted_r1_vector : public decrypted_vector {
public:
	decrypted_r1_vector() {}
	decrypted_r1_vector(int m, Eigen::VectorXi & encrypted_vector);
};

class decrypted_r1_vector_overage : public decrypted_r1_vector{
	virtual Eigen::MatrixXi create_matrix_H();
public:
	decrypted_r1_vector_overage(int m, Eigen::VectorXi & encrypted_vector);
	virtual Eigen::VectorXi get_decrypted_vector();
};

class decrypted_r2_vector_overage : public decrypted_r2_vector {
	virtual Eigen::MatrixXi create_matrix_H();
public:
	decrypted_r2_vector_overage(int m, Eigen::VectorXi & encrypted_vector);
	virtual Eigen::VectorXi get_decrypted_vector();
};

class encrypted_vector {
protected:
    Eigen::MatrixXi matrix_H;
    Eigen::VectorXi start_vector;
	Eigen::VectorXi message;
	int m;
	virtual Eigen::MatrixXi create_matrix_H();
	virtual int weight(const Eigen::VectorXi & v) const;
	virtual std::vector<int> analysis(const Eigen::VectorXi & v) = 0;
	virtual Eigen::VectorXi get_vector_x();
	virtual Eigen::VectorXi get_eps(const std::vector<int> & ind);

public:
	encrypted_vector() {}
	virtual Eigen::VectorXi get_encrypted_vector();
};

class encrypted_r2_vector : public encrypted_vector {
	std::vector<int> ind_uniq();
	virtual Eigen::MatrixXi create_matrix_H();
	virtual std::vector<int> analysis(const Eigen::VectorXi & v);
public:
	encrypted_r2_vector(int m, const Eigen::VectorXi & start, const Eigen::VectorXi & mess);
};

class encrypted_r1_vector : public encrypted_vector {
	virtual std::vector<int> analysis(const Eigen::VectorXi & v);
public:
	encrypted_r1_vector(int param_m, const Eigen::VectorXi & start, const Eigen::VectorXi & message);
};
#endif