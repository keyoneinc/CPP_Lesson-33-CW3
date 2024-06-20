#pragma once
#include "Plan.h"

namespace Mobile {
	class SecondsPlan : public Plan
	{
	protected:
		float priceOfSecond;
	public:
		SecondsPlan();
		SecondsPlan(string name, float priceOfSecond);

		void setPriceOfSecond(float priceOfSecond);
		float getPriceOfSecond() const;

		virtual void showInfo() const override;
		virtual double calcPrice(int seconds) const override;

	};
}



