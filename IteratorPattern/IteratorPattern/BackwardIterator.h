#pragma once
//���������
template<typename DataType>
class BackwardIterator
{
private:
	DataType* data;
public:
	BackwardIterator(DataType* parameter) :data(parameter) {}
	//ǰconst:����ֵ���ܱ��޸�
	//��const:���ܶԳ�Ա�������иĶ�
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

