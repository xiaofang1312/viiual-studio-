#include "nn.h"
#include "factory.h"
#include "factory_impl.h"

#include <iostream>

int main()
{
	int ret = 0;
	factory_i* fct = new factory_impl();
	auto nn = fct->creat_nn("dnn");

	const char* data_from_somewhere = "ABCD";
		ret = nn->train(data_from_somewhere, strlen(data_from_somewhere));
		if (ret != 0)
			cout << "fail to train" << endl;

	const char* model_from_somewhere = "k=10,b=20";
	ret = nn->forward(model_from_somewhere, strlen(model_from_somewhere));
	if (ret != 0)
		cout << "fail to model" << endl;

	delete nn;nn = nullptr;
	delete fct;fct = nullptr;

	return 0;
}
