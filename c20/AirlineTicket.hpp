#include <cstring>
using namespace std;

class AirlineTicket
{
public:
	double calculatePriceInDollars();
	
	std::string getPassengerName();
	void setPassengerName(std::string name);

	int getNumberOfMiles();
	void setNumberOfMiles(int miles);
	
	bool getHasEliteSuperRewardsStatus();
	void setHasEliteSuperRewardsStatus(bool status);

private:
	std::string m_passengerName{ "Unknown Passenger" };
	int m_numberOfMiles{ 0 };
	bool m_hasEliteSuperRewardsStatus{ false };
};

double AirlineTicket::calculatePriceInDollars()
{
	if (getHasEliteSuperRewardsStatus()) {
		// Elite Super Rewards customers fly for free!
		return 0;
	}

	// The cost of the ticket is the number of miles times 0.1.
	// Real airlines probably have a more complicated formula!
	return getNumberOfMiles() * 0.1;
}

string AirlineTicket::getPassengerName()
{
	return m_passengerName;
}

void AirlineTicket::setPassengerName(string name)
{
	m_passengerName = name;
}

int AirlineTicket::getNumberOfMiles()
{
	return m_numberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int miles)
{
	m_numberOfMiles = miles;
}

bool AirlineTicket::getHasEliteSuperRewardsStatus()
{
	return m_hasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool status)
{
	m_hasEliteSuperRewardsStatus = status;
}
