#pragma once
//后向迭代器
template<typename DataType>
class BackwardIterator
{
private:
	DataType* data;
public:
	BackwardIterator(DataType* parameter) :data(parameter) {}
	//前const:返回值不能被修改
	//后const:不能对成员变量进行改动
	const DataType& operator*() const
	{
		return *data;
	}
	bool operator!=(const BackwardIterator& parameter) const
	{
		return data != parameter.data;
	}
	BackwardIterator operator++()
	{
		--this->data;
		return BackwardIterator(this->data);
	}
};

