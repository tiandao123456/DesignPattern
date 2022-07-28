#pragma once
//��������ж��ֵ������ɹ�ѡ��
//ǰ�������
//DataType���������������
template<typename DataType>
class ForwardIterator
{
private:
	DataType* data;
public:
	ForwardIterator(DataType* parameter) :data(parameter) {}
	//ǰconst:����ֵ���ܱ��޸�
	//��const:���ܶԳ�Ա�������иĶ�
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

