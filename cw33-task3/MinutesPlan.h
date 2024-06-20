#pragma once
#include "Plan.h"

namespace Mobile {
	class MinutesPlan : public Plan
	{
	protected:
		float priceOfMinute;
	public:
		MinutesPlan();
		MinutesPlan(string name, float priceOfMinute);

		void setPriceOfMinute(float priceOfMinute);
		float getPriceOfMinute() const;

		virtual void showInfo() const override;
		virtual double calcPrice(int seconds) const override;
	};
}

