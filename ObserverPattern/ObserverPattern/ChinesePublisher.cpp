#include "ChinesePublisher.h"
#include "Observer.h"
void ChinesePublisher::AddObserver(ObserverBase* parameter)
{
	observerList.push_back(parameter);
	std::cout <<"ѧ��"<< parameter->GetNum()<<"�Ѷ���������ҵ"<<std::endl;
}

void ChinesePublisher::RemoveObserver(ObserverBase* parameter)
{
	if (observerList.empty())
	{
		std::cout << "error:Ӣ���б�Ϊ�ղ�û����" << std::endl;
		return;
	}
	std::list<ObserverBase*>::iterator begin = observerList.begin();
	while (begin != observerList.end())
	{
		if (*begin == parameter)
		{
			observerList.remove(parameter);
			std::cout << "ѧ��" << parameter->GetNum() << "��ȡ������������ҵ" << std::endl;
			return;
		}
		++begin;
	}
	std::cout << "��û�ж���������ҵ" << std::endl;
	return;
}

void ChinesePublisher::Notify(const std::string homework)
{
	std::cout << "����������ҵ��Ŀǰ�ܹ���" << observerList.size() << "��ѧ��" << std::endl;

	std::list<ObserverBase*>::iterator begin = observerList.begin();
	while (begin != observerList.end())
	{
		(*begin)->update(homework);
		++begin;
	}
}