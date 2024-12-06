#include "factory_impl.h"
#include "cnn.h";
#include "rnn.h";
#include "dnn.h";

factory_impl::factory_impl() {}

nn_i* factory_impl::creat_nn(const char* name)
{
	if (name == nullptr) return nullptr;
	const char* conf_from_somewhere = "hello man";

	auto str_name = std::string(name);
	if (str_name == "dnn")
		return new dnn(conf_from_somewhere);
	else if (str_name == "rnn")
		return new rnn(conf_from_somewhere);
	else if (str_name == "cnn")
		return new cnn(conf_from_somewhere);

	return nullptr;
}
