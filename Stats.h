#pragma once
namespace TypeLibrary
{
	class Stats
	{
	public:
		Stats();
		Stats(const Stats& copy);
		~Stats();

		double GetDamage() const;
		double GetAccuracy() const;
		double GetEvasion() const;
		double GetRateOfFire() const;
		double GetMobility() const;
		double GetHealth() const;
		double GetArmor() const;
		double GetAmmo() const;
		double GetRation() const;
		double GetNightAccuracy() const;
		double GetCritRate() const;
		double GetCritDamage() const;
		double GetArmorPiercing() const;
		double GetRounds() const;

		void SetDamage(double damage);
		void SetAccuracy(double accuracy);
		void SetEvasion(double evasion);
		void SetRateOfFire(double rateOfFire);
		void SetMobility(double mobility);
		void SetHealth(double health);
		void SetArmor(double armor);
		void SetAmmo(double ammo);
		void SetRation(double ration);
		void SetNightAccuracy(double nightAccuracy);
		void SetCritRate(double critRate);
		void SetCritDamage(double critDamage);
		void SetArmorPiercing(double armorPiercing);
		void SetRounds(double rounds);

	private:
		double m_damage;
		double m_accuracy;
		double m_evasion;
		double m_rateOfFire;
		double m_mobility;
		double m_health;
		double m_armor;
		double m_ammo;
		double m_ration;
		double m_nightAccuracy;
		double m_critRate;
		double m_critDamage;
		double m_armorPiercing;
		double m_rounds;
	};
}
