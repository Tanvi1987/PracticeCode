#include <stdio.h>

class InvoiceGenerator
{
	std::vector<Play*> mPlaysList;
	std::vector<Invoice*> mInvoiceList;

	void InvoiceGenerator()
	{
		mPlaysList.clear();

		PlayType* tragedy = new TragedyPlayType();
		PlayType* comedy = new ComedyPlayType();

		Play* hamlet= new Play("Hamlet", tragedy);
		Play* asLike = new Play("As You Like It", comedy);
		Play* othello = new Play("Othello", tragedy);

		mPlaysList.push_back(hamlet);
		mPlaysList.push_back(asLike);
		mPlaysList.push_back(othello);

		mInvoiceList.clear();

		Invoice* invoice = new Invoice("$", "BigCo");
		invoice->AddPlay(hamlet, 55);
		invoice->AddPlay(asLike, 35);
		invoice->AddPlay(othello, 40);

		mInvoiceList.push_back(invoice);
	}

}

class Invoice
{
	private :

	std::string mCustomerName;
	std::vector<InvoiceLineItem*> mLineItems;
	float mTotalAmount;
	std::string mCurrency;

	public :

	explicit Invoice(std::string& currency, std::string mCustomerName) : mTotalAmount(0), mCurrency(currency) , mCustomerName(customerName)
	{
		mLineItems.clear();
	}

	void AddPlay(Play* play, int seats)
	{
		InvoiceLineItem *line = new InvoiceLineItem(play, seats);
		mLineItems.push_back(line);
	}

	void CalculateCost()
	{
		size_t len = mLineItems.length();
		for (size_t i=0; i<len;++i)
		{
			
		}
	}

	void DisplayText() const
	{
		size_t len = mLineItems.length();
		for (size_t i=0; i<len;++i)
		{
			mLineItems->DisplayLineItem(mCurrency);
		}
	}
}

class InvoiceLineItem
{
	Play *mPlay;
	int mNumOfSeats;
	float mAmount;

	void DisplayLineItem(std::string currency)
	{
		cout<<mPlay.playName<<" : "<<currency<<mAmount<<" ("<<mNumOfSeats<<" seats )";
	}
}

class PlayType
{	
	float mBaseAmount;
	int mMinimumAudience;
	int mPerPersonExtraCharge;
	int mVolumeCredits;
	
	explicit PlayType(float baseAmount, int minimumAudience, int perPersonExtraCharge):
		mBaseAmount(baseAmount), mMinimumAudience(minimumAudience), 
		mPerPersonExtraCharge(perPersonExtraCharge). mVolumeCredits(0)
		{}
	
	virtual CalculateCost(int numOfSeats);
}

class Play
{
	private :
	std::string mPlayId;
	std::string mPlayName;
	PlayType* mPlayType;

	public :
	explicit Play(std::string& playId, std::string& playName, PlayType* playType)
	: mPlayId(playId), mPlayName(playName) , mPlayType(playType)
	{
	}
}

int main()
{


}