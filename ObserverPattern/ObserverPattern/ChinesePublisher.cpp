#include "ChinesePublisher.h"
#include "Observer.h"
void ChinesePublisher::AddObserver(ObserverBase* parameter)
{
	observerList.push_back(parameter);
	std::cout <<"学生"<< parameter->GetNum()<<"已订阅语文作业"<<std::endl;
}

void ChinesePublisher::RemoveObserver(ObserverBase* parameter)
{
	if (observerList.empty())
	{
		std::cout << "error:英语列表为空并没有您" << std::endl;
		return;
	}
	std::list<ObserverBase*>::iterator begin = observerList.begin();
	while (begin != observerList.end())
	{
		if (*begin == parameter)
		{
			observerList.remove(parameter);
			std::cout << "学生" << parameter->GetNum() << "已取消订阅语文作业" << std::endl;
			return;
		}
		++begin;
	}
	std::cout << "您没有订阅语文作业" << std::endl;
	return;
}

void ChinesePublisher::Notify(const std::string homework)
{
	std::cout << "订阅语文作业的目前总共有" << observerList.size() << "个学生" << std::endl;

	std::list<ObserverBase*>::iterator begin = observerList.begin();
	while (begin != observerList.end())
	{
		(*begin)->update(homework);
		++begin;
	}
}