#pragma once
#include "ForwardIterator.h"
#include "BackwardIterator.h"
template<typename DataType>
class Container
{
private:
	DataType* data;
	unsigned len;

public:

	using forwardIterator = ForwardIterator<DataType>;
	using backwardIterator = BackwardIterator<DataType>;

	Container(DataType* parameter,unsigned len)
	{
		data = parameter;
		this->len = len;
	}
	forwardIterator begin() const
	{
		return forwardIterator(data);
	}
	backwardIterator rbegin() const
	{
		return backwardIterator(data + len - 1);
	}
	forwardIterator end() const
	{
		return forwardIterator(data + len);
	}
	backwardIterator rend() const
	{
		return backwardIterator(data - 1);
	}
};
