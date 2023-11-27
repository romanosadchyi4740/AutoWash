#include "ServiceType.h"

ServiceType::ServiceType()
{
}

ServiceType::ServiceType(Service service, int cost)
{
	this->service = service;
	this->cost = cost;
}

ServiceType::~ServiceType()
{
}

Service ServiceType::getService()
{
	return this->service;
}

int ServiceType::getCost()
{
	return this->cost;
}

void ServiceType::setService(Service service)
{
	this->service = service;
}

void ServiceType::setCost(int cost)
{
	this->cost = cost;
}