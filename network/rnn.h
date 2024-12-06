#pragma once
#pragma once
#include "nn.h"
#include <string>
#include <iostream>

using namespace::std;
class rnn :public nn_i
{
public:
	explicit rnn(const char* conf) :m_conf(conf)
	{
	}
	virtual ~rnn() = default;
	virtual int train(const char* data, size_t data_size) override
	{
		cout << "train rnn" << endl;
		return 0;
	}
	virtual int forward(const char* model, size_t model_size) override
	{
		cout << "forward  rnn" << endl;
		return 0;
	}
private:
	std::string m_conf;
};

