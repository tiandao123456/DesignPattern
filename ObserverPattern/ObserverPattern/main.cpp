#include <iostream>
#include "ChinesePublisher.h"
#include "englishPublisher.h"
#include "Observer.h"

int main()
{
	Publisher* chinesePublisher = new ChinesePublisher;
	Publisher* englishPublisher = new EnglishPublisher;

	//1��2����������ҵ��3����Ӣ����ҵ
	Observer* observer1 = new Observer(chinesePublisher, 1);
	Observer* observer2 = new Observer(chinesePublisher, 2);
	Observer* observer3 = new Observer(englishPublisher, 3);

	//2���Ӷ���Ӣ����ҵ
	observer2->AddSubscribe(englishPublisher);
	englishPublisher->Notify("���Ӣ��α������¿κ󵥴ʱ���");

	chinesePublisher->Notify("������Ŀα���һ�¿κ���ϰ1~12");
	observer1->RemoveMeFromList(chinesePublisher);
	chinesePublisher->Notify("������Ŀα��ڶ��¿κ���ϰ3~14");
	observer1->AddSubscribe(englishPublisher);

	observer2->RemoveMeFromList(chinesePublisher);
	observer2->RemoveMeFromList(englishPublisher);

	observer2->RemoveMeFromList(englishPublisher);


	return 0;
}