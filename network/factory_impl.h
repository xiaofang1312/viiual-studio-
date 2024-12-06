#pragma once
#include "factory.h"

class factory_impl : public factory_i
{
public:
	explicit factory_impl();
	virtual ~factory_impl() = default;

	virtual nn_i* creat_nn(const char* name) override;
};