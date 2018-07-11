/*
 * BatteryAccess.cc
 *
 *  Created on: Aug 26, 2009
 *      Author: Karl Wessel
 */

#include "BatteryAccess.h"
#include <cassert>
#include "FindModule.h"
#include "BatteryStats.h"

BatteryAccess::BatteryAccess():
	BaseModule(),
	battery(NULL),
	deviceID(-1)
{}

BatteryAccess::BatteryAccess(unsigned stacksize):
	BaseModule(stacksize),
	battery(NULL),
	deviceID(-1)
{}

void BatteryAccess::registerWithBattery(const std::string& name, int numAccounts)
{
	//battery = FindModule<BaseBattery*>::findSubModule(findHost()); // deprecated command
    //battery = FindModule<BaseBattery*>::findSubModule(findHost()); //JINSERT este codigo estava comentado
    cModule *host = inet::getContainingNode(this);
    battery = FindModule<BaseBattery*>::findSubModule(host); //JINSERT

    validate = true;  //JINSERT verificar se tem necessidade

    std::cout << ">> BatteryAccess::registerWithBattery: " << host << endl; //JINSERT

	if(!battery) {
		//opp_warning("No battery module defined!");
	    throw cException("No battery module defined!");
	} else {
		deviceID = battery->registerDevice(name, numAccounts);
		std::cout << ">> BatteryAccess::registerWithBattery::deviceID: " << deviceID << endl; //JINSERT
	}
}

void BatteryAccess::draw(DrawAmount& amount, int account)
{
	if(!battery)
		return;

	battery->draw(deviceID, amount, account);

	std::cout << ">> BatteryAccess::draw::deviceID: " << deviceID << endl; //JINSERT
}

void BatteryAccess::drawCurrent(double amount, int account)
{
	if(!battery)
		return;

	DrawAmount val(DrawAmount::CURRENT, amount);
	battery->draw(deviceID, val, account);

	std::cout << ">> BatteryAccess::drawCurrent::deviceID: " << deviceID << endl; //JINSERT
}

void BatteryAccess::drawEnergy(double amount, int account)
{
	if(!battery)
		return;

	DrawAmount val(DrawAmount::ENERGY, amount);
	battery->draw(deviceID, val, account);

	std::cout << ">> BatteryAccess::drawEnergy::deviceID: " << deviceID << endl; //JINSERT
}
