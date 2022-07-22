#include "EnglishPublisher.h"
#include "Observer.h"
void EnglishPublisher::AddObserver(ObserverBase* parameter)
{
	observerList.push_back(parameter);
	std::cout << "ѧ��" << parameter->GetNum() << "�Ѷ���Ӣ����ҵ" << std::endl;
}

void EnglishPublisher::RemoveObserver(ObserverBase* parameter)
{
	if (observerList.empty())
	{
		std::cout << "error:�����б�Ϊ�ղ�û����" << std::endl;
		return;
	}
	std::list<ObserverBase*>::iterator begin = observerList.begin();
	while (begin != observerList.end())
	{
		if (*begin == parameter)
		{
			observerList.remove(parameter);
			std::cout << "ѧ��" << parameter->GetNum() << "��ȡ������Ӣ����ҵ" << std::endl;
			return;
		}
		++begin;
	}
	std::cout << "��û�ж���Ӣ����ҵ" << std::endl;
	return;
}

void EnglishPublisher::Notify(const std::string homework)
{
	std::cout << "����Ӣ����ҵ��Ŀǰ�ܹ���" << observerList.size() << "��ѧ��" << std::endl;

	std::list<ObserverBase*>::iterator begin = observerList.begin();
	while (begin != observerList.end())
	{
		(*begin)->update(homework);
		++begin;
	}
}