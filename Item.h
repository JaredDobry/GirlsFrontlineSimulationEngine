#pragma once
#include <Stats.h>
namespace TypeLibrary
{
	class Item
	{
	public:
		Item();
		~Item();

		virtual void AffectStats(Stats& inRef);
	};

	//Default in-game items
	class ItemScope : public Item
	{
	public:
		ItemScope();
		ItemScope(double critRate);
		~ItemScope();

		double GetCritRate() const;

		void SetCritRate(double critRate);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_critRate;
	};

	class ItemHolo : public Item
	{
	public:
		ItemHolo();
		ItemHolo(double accuracy, double damage, double rateOfFire);
		~ItemHolo();

		double GetAccuracy() const;
		double GetDamage() const;
		double GetRateOfFire() const;

		void SetAccuracy(double accuracy);
		void SetDamage(double damage);
		void SetRateOfFire(double rateOfFire);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_accuracy;
		double m_damage;
		double m_rateOfFire;
	};

	class ItemRedDot : public Item
	{
	public:
		ItemRedDot();
		ItemRedDot(double accuracy, double rateOfFire);
		~ItemRedDot();

		double GetAccuracy() const;
		double GetRateOfFire() const;

		void SetAccuracy(double accuracy);
		void SetRateOfFire(double rateOfFire);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_accuracy;
		double m_rateOfFire;
	};

	class ItemNightVision : public Item
	{
	public:
		ItemNightVision();
		ItemNightVision(double nightVision);
		~ItemNightVision();

		double GetNightVision() const;

		void SetNightVision(double nightVision);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_nightVision;
	};

	class ItemAPAmmo : public Item
	{
	public:
		ItemAPAmmo();
		ItemAPAmmo(double armorPiercing);
		~ItemAPAmmo();

		double GetArmorPiercing() const;

		void SetArmorPiercing(double armorPiercing);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_armorPiercing;
	};

	class ItemHPAmmo : public Item
	{
	public:
		ItemHPAmmo();
		ItemHPAmmo(double damage, double armorPiercing);
		~ItemHPAmmo();

		double GetDamage() const;
		double GetArmorPiercing() const;

		void SetDamage(double damage);
		void SetArmorPiercing(double armorPiercing);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_damage;
		double m_armorPiercing;
	};

	class ItemBuckshot : public Item
	{
	public:
		ItemBuckshot();
		ItemBuckshot(double damage, double critDamage);
		~ItemBuckshot();

		double GetDamage() const;
		double GetCritDamage() const;

		void SetDamage(double damage);
		void SetCritDamage(double critDamage);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_damage;
		double m_critDamage;
	};

	class ItemSlug : public Item
	{
	public:
		ItemSlug();
		ItemSlug(double damage, double critDamage);
		~ItemSlug();

		double GetDamage() const;
		double GetCritDamage() const;

		void SetDamage(double damage);
		void SetCritDamage(double critDamage);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_damage;
		double m_critDamage;
	};

	class ItemHVAmmo : public Item
	{
	public:
		ItemHVAmmo();
		ItemHVAmmo(double damage);
		~ItemHVAmmo();

		double GetDamage() const;

		void SetDamage(double damage);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_damage;
	};

	class ItemExoskeleton : public Item
	{
	public:
		ItemExoskeleton();
		ItemExoskeleton(double evasion);
		ItemExoskeleton(double evasion, double damage);
		~ItemExoskeleton();

		double GetDamage() const;
		double GetEvasion() const;

		void SetDamage(double damage);
		void SetEvasion(double evasion);

		virtual void AffectStats(Stats& inRef) override;
	private:
		double m_evasion;
		double m_damage;
	};

	class ItemArmorPlate : public Item
	{
	public:
		ItemArmorPlate();
		ItemArmorPlate(double armor, double evasion);
		~ItemArmorPlate();

		double GetArmor() const;
		double GetEvasion() const;

		void SetArmor(double armor);
		void SetEvasion(double evasion);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_evasion;
		double m_armor;
	};

	class ItemSuppresor : public Item
	{
	public:
		ItemSuppresor();
		ItemSuppresor(double critRate, double evasion);
		~ItemSuppresor();

		double GetCritRate() const;
		double GetEvasion() const;

		void SetCritRate(double critRate);
		void SetEvasion(double evasion);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_critRate;
		double m_evasion;
	};

	class ItemAmmoBox : public Item
	{
	public:
		ItemAmmoBox();
		ItemAmmoBox(double rounds, double evasion);
		~ItemAmmoBox();

		double GetRounds() const;
		double GetEvasion() const;

		void SetRounds(double rounds);
		void SetEvasion(double evasion);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_evasion;
		double m_rounds;
	};

	class ItemCloak : public Item
	{
	public:
		ItemCloak();
		ItemCloak(double critDamage, double moveSpeed);
		~ItemCloak();

		double GetCritDamage() const;
		double GetMoveSpeed() const;

		void SetCritDamage(double critDamage);
		void SetMoveSpeed(double moveSpeed);

		virtual void AffectStats(Stats& inRef) override;

	private:
		double m_critDamage;
		double m_moveSpeed;
	};

}