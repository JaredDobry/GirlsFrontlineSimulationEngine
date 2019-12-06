#include "Item.h"
namespace TypeLibrary
{
	Item::Item() 
	{
	}

	Item::~Item() 
	{
	}

	void Item::AffectStats(Stats& inRef) 
	{
	}

	ItemScope::ItemScope() :
	m_critRate(0.0)
	{
	}

	ItemScope::ItemScope(double critRate) :
		m_critRate(critRate)
	{
	}

	ItemScope::~ItemScope()
	{
	}

	double ItemScope::GetCritRate() const
	{
		return m_critRate;
	}

	void ItemScope::SetCritRate(double critRate)
	{
		m_critRate = critRate;
	}

	void ItemScope::AffectStats(Stats& inRef)
	{
		inRef.SetCritRate(inRef.GetCritRate() + m_critRate);
	}

	ItemHolo::ItemHolo() :
		m_accuracy(0.0),
		m_damage(0.0),
		m_rateOfFire(0.0)
	{
	}

	ItemHolo::ItemHolo(double accuracy, double damage, double rateOfFire) :
		m_accuracy(accuracy),
		m_damage(damage),
		m_rateOfFire(rateOfFire)
	{
	}

	ItemHolo::~ItemHolo()
	{
	}

	double ItemHolo::GetAccuracy() const
	{
		return m_accuracy;
	}

	double ItemHolo::GetDamage() const
	{
		return m_damage;
	}

	double ItemHolo::GetRateOfFire() const
	{
		return m_rateOfFire;
	}

	void ItemHolo::SetAccuracy(double accuracy)
	{
		m_accuracy = accuracy;
	}

	void ItemHolo::SetDamage(double damage)
	{
		m_damage = damage;
	}

	void ItemHolo::SetRateOfFire(double rateOfFire)
	{
		m_rateOfFire = rateOfFire;
	}

	void ItemHolo::AffectStats(Stats& inRef)
	{
		inRef.SetAccuracy(inRef.GetAccuracy() + m_accuracy);
		inRef.SetDamage(inRef.GetDamage() + m_damage);
		inRef.SetRateOfFire(inRef.GetRateOfFire() + m_rateOfFire);
	}

	ItemRedDot::ItemRedDot() :
		m_accuracy(0.0),
		m_rateOfFire(0.0)
	{
	}

	ItemRedDot::ItemRedDot(double accuracy, double rateOfFire) :
		m_accuracy(accuracy),
		m_rateOfFire(rateOfFire)
	{
	}

	ItemRedDot::~ItemRedDot()
	{
	}

	double ItemRedDot::GetAccuracy() const
	{
		return m_accuracy;
	}

	double ItemRedDot::GetRateOfFire() const
	{
		return m_rateOfFire;
	}

	void ItemRedDot::SetAccuracy(double accuracy)
	{
		m_accuracy = accuracy;
	}

	void ItemRedDot::SetRateOfFire(double rateOfFire)
	{
		m_rateOfFire = rateOfFire;
	}

	void ItemRedDot::AffectStats(Stats& inRef)
	{
		inRef.SetAccuracy(inRef.GetAccuracy() + m_accuracy);
		inRef.SetRateOfFire(inRef.GetRateOfFire() + m_rateOfFire);
	}

	ItemNightVision::ItemNightVision() :
		m_nightVision(0.0)
	{
	}

	ItemNightVision::ItemNightVision(double nightVision) :
		m_nightVision(nightVision)
	{
	}

	ItemNightVision::~ItemNightVision()
	{
	}

	double ItemNightVision::GetNightVision() const
	{
		return m_nightVision;
	}

	void ItemNightVision::SetNightVision(double nightVision)
	{
		m_nightVision = nightVision;
	}

	void ItemNightVision::AffectStats(Stats& inRef)
	{
		inRef.SetNightAccuracy(inRef.GetNightAccuracy() + m_nightVision);
	}

	ItemAPAmmo::ItemAPAmmo() :
		m_armorPiercing(0.0)
	{
	}

	ItemAPAmmo::ItemAPAmmo(double armorPiercing) :
		m_armorPiercing(armorPiercing)
	{
	}

	ItemAPAmmo::~ItemAPAmmo()
	{
	}

	double ItemAPAmmo::GetArmorPiercing() const
	{
		return m_armorPiercing;
	}

	void ItemAPAmmo::SetArmorPiercing(double armorPiercing)
	{
		m_armorPiercing = armorPiercing;
	}

	void ItemAPAmmo::AffectStats(Stats& inRef)
	{
		inRef.SetArmorPiercing(inRef.GetArmorPiercing() + m_armorPiercing);
	}

	ItemHPAmmo::ItemHPAmmo() :
		m_damage(0.0),
		m_armorPiercing(0.0)
	{
	}

	ItemHPAmmo::ItemHPAmmo(double damage, double armorPiercing) :
		m_damage(damage),
		m_armorPiercing(armorPiercing)
	{
	}

	ItemHPAmmo::~ItemHPAmmo()
	{
	}

	double ItemHPAmmo::GetDamage() const
	{
		return m_damage;
	}

	double ItemHPAmmo::GetArmorPiercing() const
	{
		return m_armorPiercing;
	}

	void ItemHPAmmo::SetDamage(double damage)
	{
		m_damage = damage;
	}

	void ItemHPAmmo::SetArmorPiercing(double armorPiercing)
	{
		m_armorPiercing = armorPiercing;
	}

	void ItemHPAmmo::AffectStats(Stats& inRef)
	{
		inRef.SetDamage(inRef.GetDamage() + m_damage);
		inRef.SetArmorPiercing(inRef.GetArmorPiercing() + m_armorPiercing);
	}

	ItemBuckshot::ItemBuckshot() :
		m_damage(0.0),
		m_critDamage(0.0)
	{
	}

	ItemBuckshot::ItemBuckshot(double damage, double critDamage) :
		m_damage(damage),
		m_critDamage(critDamage)
	{
	}

	ItemBuckshot::~ItemBuckshot()
	{
	}

	double ItemBuckshot::GetDamage() const
	{
		return m_damage;
	}

	double ItemBuckshot::GetCritDamage() const
	{
		return m_critDamage;
	}

	void ItemBuckshot::SetDamage(double damage)
	{
		m_damage = damage;
	}

	void ItemBuckshot::SetCritDamage(double critDamage)
	{
		m_critDamage = critDamage;
	}

	void ItemBuckshot::AffectStats(Stats& inRef)
	{
		inRef.SetDamage(inRef.GetDamage() + m_damage);
		inRef.SetCritDamage(inRef.GetCritDamage() + m_critDamage);
	}

	ItemSlug::ItemSlug() :
		m_damage(0.0),
		m_critDamage(0.0)
	{
	}

	ItemSlug::ItemSlug(double damage, double critDamage) :
		m_damage(damage),
		m_critDamage(critDamage)
	{
	}

	ItemSlug::~ItemSlug()
	{
	}

	double ItemSlug::GetDamage() const
	{
		return m_damage;
	}
	double ItemSlug::GetCritDamage() const
	{
		return m_critDamage;
	}
	void ItemSlug::SetDamage(double damage)
	{
		m_damage = damage;
	}

	void ItemSlug::SetCritDamage(double critDamage)
	{
		m_critDamage = critDamage;
	}

	void ItemSlug::AffectStats(Stats& inRef)
	{
		inRef.SetDamage(inRef.GetDamage() + m_damage);
		inRef.SetCritDamage(inRef.GetCritDamage() + m_critDamage);
	}

	ItemHVAmmo::ItemHVAmmo() :
		m_damage(0.0)
	{
	}

	ItemHVAmmo::ItemHVAmmo(double damage) :
		m_damage(damage)
	{
	}

	ItemHVAmmo::~ItemHVAmmo()
	{
	}

	double ItemHVAmmo::GetDamage() const
	{
		return m_damage;
	}

	void ItemHVAmmo::SetDamage(double damage)
	{
		m_damage = damage;
	}

	void ItemHVAmmo::AffectStats(Stats& inRef)
	{
		inRef.SetDamage(inRef.GetDamage() + m_damage);
	}

	ItemExoskeleton::ItemExoskeleton() :
		m_damage(0.0),
		m_evasion(0.0)
	{
	}

	ItemExoskeleton::ItemExoskeleton(double evasion) :
		m_damage(0.0),
		m_evasion(evasion)
	{
	}

	ItemExoskeleton::ItemExoskeleton(double evasion, double damage) :
		m_damage(damage),
		m_evasion(evasion)
	{
	}

	ItemExoskeleton::~ItemExoskeleton()
	{
	}

	double ItemExoskeleton::GetDamage() const
	{
		return m_damage;
	}

	double ItemExoskeleton::GetEvasion() const
	{
		return m_evasion;
	}

	void ItemExoskeleton::SetDamage(double damage)
	{
		m_damage = damage;
	}

	void ItemExoskeleton::SetEvasion(double evasion)
	{
		m_evasion = evasion;
	}

	void ItemExoskeleton::AffectStats(Stats& inRef)
	{
		inRef.SetDamage(inRef.GetDamage() + m_damage);
		inRef.SetEvasion(inRef.GetEvasion() + m_evasion);
	}

	ItemArmorPlate::ItemArmorPlate() :
		m_evasion(0.0),
		m_armor(0.0)
	{
	}

	ItemArmorPlate::ItemArmorPlate(double armor, double evasion) :
		m_evasion(evasion),
		m_armor(armor)
	{
	}

	ItemArmorPlate::~ItemArmorPlate()
	{
	}

	double ItemArmorPlate::GetArmor() const
	{
		return m_armor;
	}

	double ItemArmorPlate::GetEvasion() const
	{
		return m_evasion;
	}

	void ItemArmorPlate::SetArmor(double armor)
	{
		m_armor = armor;
	}

	void ItemArmorPlate::SetEvasion(double evasion)
	{
		m_evasion = evasion;
	}

	void ItemArmorPlate::AffectStats(Stats& inRef)
	{
		inRef.SetArmor(inRef.GetArmor() + m_armor);
		inRef.SetEvasion(inRef.GetEvasion() + m_evasion);
	}

	ItemSuppresor::ItemSuppresor() : 
		m_critRate(0.0),
		m_evasion(0.0)
	{
	}

	ItemSuppresor::ItemSuppresor(double critRate, double evasion) :
		m_critRate(critRate),
		m_evasion(evasion)
	{
	}

	ItemSuppresor::~ItemSuppresor()
	{
	}

	double ItemSuppresor::GetCritRate() const
	{
		return m_critRate;
	}

	double ItemSuppresor::GetEvasion() const
	{
		return m_evasion;
	}

	void ItemSuppresor::SetCritRate(double critRate)
	{
		m_critRate = critRate;
	}

	void ItemSuppresor::SetEvasion(double evasion)
	{
		m_evasion = evasion;
	}

	void ItemSuppresor::AffectStats(Stats& inRef)
	{
		inRef.SetCritRate(inRef.GetCritRate() + m_critRate);
		inRef.SetEvasion(inRef.GetEvasion() + m_evasion);
	}

	ItemAmmoBox::ItemAmmoBox() :
		m_evasion(0.0),
		m_rounds(0.0)
	{
	}

	ItemAmmoBox::ItemAmmoBox(double rounds, double evasion) :
		m_evasion(evasion),
		m_rounds(rounds)
	{
	}

	ItemAmmoBox::~ItemAmmoBox()
	{
	}

	double ItemAmmoBox::GetRounds() const
	{
		return m_rounds;
	}

	double ItemAmmoBox::GetEvasion() const
	{
		return m_evasion;
	}

	void ItemAmmoBox::SetRounds(double rounds)
	{
		m_rounds = rounds;
	}

	void ItemAmmoBox::SetEvasion(double evasion)
	{
		m_evasion = evasion;
	}

	void ItemAmmoBox::AffectStats(Stats& inRef)
	{
		inRef.SetRounds(inRef.GetRounds() + m_rounds);
		inRef.SetEvasion(inRef.GetEvasion() + m_evasion);
	}

	ItemCloak::ItemCloak() :
		m_critDamage(0.0),
		m_moveSpeed(0.0)
	{
	}

	ItemCloak::ItemCloak(double critDamage, double moveSpeed) :
		m_critDamage(0.0),
		m_moveSpeed(moveSpeed)
	{
	}

	ItemCloak::~ItemCloak()
	{
	}

	double ItemCloak::GetCritDamage() const
	{
		return m_critDamage;
	}

	double ItemCloak::GetMoveSpeed() const
	{
		return m_moveSpeed;
	}

	void ItemCloak::SetCritDamage(double critDamage)
	{
		m_critDamage = critDamage;
	}

	void ItemCloak::SetMoveSpeed(double moveSpeed)
	{
		m_moveSpeed = moveSpeed;
	}

	void ItemCloak::AffectStats(Stats& inRef)
	{
		inRef.SetMobility(inRef.GetMobility() + m_moveSpeed);
		inRef.SetCritDamage(inRef.GetCritDamage() + m_critDamage);
	}
}