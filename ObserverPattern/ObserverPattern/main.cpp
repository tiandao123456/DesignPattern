#include <iostream>
#include "ChinesePublisher.h"
#include "englishPublisher.h"
#include "Observer.h"

int main()
{
	Publisher* chinesePublisher = new ChinesePublisher;
	Publisher* englishPublisher = new EnglishPublisher;

	//1、2订阅中文作业，3订阅英文作业
	Observer* observer1 = new Observer(chinesePublisher, 1);
	Observer* observer2 = new Observer(chinesePublisher, 2);
	Observer* observer3 = new Observer(englishPublisher, 3);

	//2增加订阅英文作业
	observer2->AddSubscribe(englishPublisher);
	englishPublisher->Notify("完成英语课本第三章课后单词背诵");

	chinesePublisher->Notify("完成语文课本第一章课后练习1~12");
	observer1->RemoveMeFromList(chinesePublisher);
	chinesePublisher->Notify("完成语文课本第二章课后练习3~14");
	observer1->AddSubscribe(englishPublisher);

	observer2->RemoveMeFromList(chinesePublisher);
	observer2->RemoveMeFromList(englishPublisher);

	observer2->RemoveMeFromList(englishPublisher);


	return 0;
}