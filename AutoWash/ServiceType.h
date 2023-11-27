#pragma once
#include "Service.h"
class ServiceType
{
private:
	Service service;
	int cost;
public:
	ServiceType();

	ServiceType(Service service);

	~ServiceType();

	Service getService();

	int getCost();

	void setService(Service service);

	void setCost(int cost);
};