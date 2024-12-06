#pragma once
#include "nn.h"
#include <string>
#include <iostream>

using namespace::std;
class cnn :public nn_i
{
public:
	explicit cnn(const char* conf) :m_conf(conf)
	{
	}
	virtual ~cnn() = default;
	virtual int train(const char* data, size_t data_size) override
	{
		cout << "train cnn" << endl;
		return 0;
	}
	virtual int forward(const char* model, size_t model_size) override
	{
		cout << "forward  cnn" << endl;
		return 0;
	}
private:
	std::string m_conf;
};
