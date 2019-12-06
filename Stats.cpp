#include "Stats.h"

TypeLibrary::Stats::Stats() :
	m_damage(0.0),
	m_accuracy(0.0),
	m_evasion(0.0),
	m_rateOfFire(0.0),
	m_mobility(0.0),
	m_health(0.0),
	m_armor(0.0),
	m_ammo(0.0),
	m_ration(0.0),
	m_nightAccuracy(0.0),
	m_critRate(0.0),
	m_critDamage(0.0),
	m_armorPiercing(0.0),
	m_rounds(0.0)
{
}

TypeLibrary::Stats::Stats(const Stats& copy)
{
	m_accuracy = copy.GetAccuracy();
	m_ammo = copy.GetAmmo();
	m_armor = copy.GetArmor();
	m_damage = copy.GetDamage();
	m_evasion = copy.GetEvasion();
	m_health = copy.GetHealth();
	m_mobility = copy.GetMobility();
	m_rateOfFire = copy.GetRateOfFire();
	m_ration = copy.GetRation();
	m_nightAccuracy = copy.GetNightAccuracy();
	m_critRate = copy.GetCritRate();
	m_critDamage = copy.GetCritDamage();
	m_armorPiercing = copy.GetArmorPiercing();
	m_rounds = copy.GetRounds();

}

TypeLibrary::Stats::~Stats() {}

double TypeLibrary::Stats::GetDamage() const
{
	return m_damage;
}

double TypeLibrary::Stats::GetAccuracy() const
{
	return m_accuracy;
}

double TypeLibrary::Stats::GetEvasion() const
{
	return m_evasion;
}

double TypeLibrary::Stats::GetRateOfFire() const
{
	return m_rateOfFire;
}

double TypeLibrary::Stats::GetMobility() const
{
	return m_mobility;
}

double TypeLibrary::Stats::GetHealth() const
{
	return m_health;
}

double TypeLibrary::Stats::GetArmor() const
{
	return m_armor;
}

double TypeLibrary::Stats::GetAmmo() const
{
	return m_ammo;
}

double TypeLibrary::Stats::GetRation() const
{
	return m_ration;
}

double TypeLibrary::Stats::GetNightAccuracy() const
{
	return m_nightAccuracy;
}

double TypeLibrary::Stats::GetCritRate() const
{
	return m_critRate;
}

double TypeLibrary::Stats::GetCritDamage() const
{
	return m_critDamage;
}

double TypeLibrary::Stats::GetArmorPiercing() const
{
	return m_armorPiercing;
}

double TypeLibrary::Stats::GetRounds() const
{
	return m_rounds;
}

void TypeLibrary::Stats::SetDamage(double damage)
{
	m_damage = damage;
}

void TypeLibrary::Stats::SetAccuracy(double accuracy)
{
	m_accuracy = accuracy;
}

void TypeLibrary::Stats::SetEvasion(double evasion)
{
	m_evasion = evasion;
}

void TypeLibrary::Stats::SetRateOfFire(double rateOfFire)
{
	m_rateOfFire = rateOfFire;
}

void TypeLibrary::Stats::SetMobility(double mobility)
{
	m_mobility = mobility;
}

void TypeLibrary::Stats::SetHealth(double health)
{
	m_health = health;
}

void TypeLibrary::Stats::SetArmor(double armor)
{
	m_armor = armor;
}

void TypeLibrary::Stats::SetAmmo(double ammo)
{
	m_ammo = ammo;
}

void TypeLibrary::Stats::SetRation(double ration)
{
	m_ration = ration;
}

void TypeLibrary::Stats::SetNightAccuracy(double nightAccuracy) 
{
	m_nightAccuracy = nightAccuracy;
}

void TypeLibrary::Stats::SetCritRate(double critRate) 
{
	m_critRate = critRate;
}

void TypeLibrary::Stats::SetCritDamage(double critDamage) 
{
	m_critDamage = critDamage;
}

void TypeLibrary::Stats::SetArmorPiercing(double armorPiercing) 
{
	m_armorPiercing = armorPiercing;
}

void TypeLibrary::Stats::SetRounds(double rounds) 
{
	m_rounds = rounds;
}
