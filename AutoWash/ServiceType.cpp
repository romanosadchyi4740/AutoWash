#include "ServiceType.h"

ServiceType::ServiceType()
{
}

ServiceType::ServiceType(Service service)
{
	this->service = service;

	switch (service) {
	case EXTERIOR_WASH:
		this->cost = 250;
	case INTERIOR_WASH:
		this->cost = 350;
	case CHEMICAL_CLEANING:
		this->cost = 1800;
	}
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