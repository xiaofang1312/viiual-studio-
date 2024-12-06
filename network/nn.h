#ifndef _NN_H_
#define _NN_H_
class nn_i
{
public:
	virtual ~nn_i() {}

	virtual int train(const char* data,size_t data_size) = 0;
	virtual int forward(const char* model, size_t model_size) = 0;
};
#endif