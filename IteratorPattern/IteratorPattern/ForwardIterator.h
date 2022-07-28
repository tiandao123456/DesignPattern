#pragma once
//针对容器有多种迭代器可供选择
//前向迭代器
//DataType代表基本数据类型
template<typename DataType>
class ForwardIterator
{
private:
	DataType* data;
public:
	ForwardIterator(DataType* parameter) :data(parameter) {}
	//前const:返回值不能被修改
	//后const:不能对成员变量进行改动
	const DataType& operator*() const
	{
		return *data;
	}
	bool operator!=(const ForwardIterator& parameter) const
	{
		return data != parameter.data;
	}
	ForwardIterator operator++()
	{
		++this->data;
		return *this;
	}
};

