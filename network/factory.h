#pragma once
//下面只使用了指针，所以这里声明一下就可以，可以不用包含头文件
class nn_i;
class factory_i
{
public:
	virtual ~factory_i() = default;
	virtual nn_i* creat_nn(const char* name) = 0;
};