#pragma once
//����ֻʹ����ָ�룬������������һ�¾Ϳ��ԣ����Բ��ð���ͷ�ļ�
class nn_i;
class factory_i
{
public:
	virtual ~factory_i() = default;
	virtual nn_i* creat_nn(const char* name) = 0;
};