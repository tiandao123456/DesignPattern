#include "AmericanSocket.h"
#include "ChineseSocket.h"
#include "ChineseSocketAdapter.h"
#include "GermanySocket.h"
#include "GermanySocketAdapter.h"
#include "Plug.h"

int main()
{
	std::shared_ptr<Plug> plug(new Plug);

	//美标与德标电压一致,而美标与国标电压不一致
	//创建德国标准的插座
	std::shared_ptr<GermanySocket> germanySocket(new GermanySocket);
	//进行转换，美标转德标
	std::shared_ptr<GermanySocketAdapter> germanySocketAdapter(new GermanySocketAdapter(germanySocket));
	plug->UseAmericanPlug(germanySocketAdapter);

	std::shared_ptr<ChineseSocket> chineseSocket(new ChineseSocket);
	std::shared_ptr<ChineseSocketAdapter> chineseSocketAdapter(new ChineseSocketAdapter(chineseSocket));
	plug->UseAmericanPlug(chineseSocketAdapter);
	
	return 0;
}