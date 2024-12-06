#pragma once
#include "cnn.h";
#include "rnn.h";
#include "dnn.h";
#include "factory.h"
class factory_impl : public factory_i
{
public:
	explicit factory_impl() {}
	virtual ~factory_impl() = default;

	virtual nn_i* creat_nn(const char* name) override
	{
		if (name == nullptr) return nullptr;
		const char* conf_from_somewhere = "hello man";

		auto str_name = std::string(name);
		if (str_name == "dnn")
			return new dnn(conf_from_somewhere);
		else if(str_name == "rnn")
			return new rnn(conf_from_somewhere);
		else if (str_name == "cnn")
			return new cnn(conf_from_somewhere);

		return nullptr;
	}
};