#include <iostream>
#include <string>
using namespace std;

enum WeaponType
{
	None = -1,
	Pistol,
	Rifle,
	Shotgun,
	GranadeLauncher,
	Count
};

struct Weapon
{
	WeaponType m_enum;
	string m_weaponTypeName;
};

static Weapon WeaponList[WeaponType::Count];

int main()
{
	for (int i = 0; i < WeaponType::Count; ++i)
	{
		WeaponList[i].m_enum = (WeaponType)i;
		
		switch ( (WeaponType)i )
		{
		case WeaponType::Pistol :
			WeaponList[i].m_weaponTypeName = "Pistol";
		break;
		case WeaponType::Rifle:
			WeaponList[i].m_weaponTypeName = "Rifle";
			break;
		case WeaponType::Shotgun :
			WeaponList[i].m_weaponTypeName = "Shotgun";
			break;
		case WeaponType::GranadeLauncher:
			WeaponList[i].m_weaponTypeName = "Granade Launcher";
			break;
		default:
			WeaponList[i].m_weaponTypeName = "";
			break;
		}
	}

	WeaponType MainPlayerWeapon = WeaponType::None;
	
	for (int i = 0; i < WeaponType::Count; ++i)
	{
		cout << "Weapon Tye: " << WeaponList[i].m_weaponTypeName << endl;
	}

	return 0;
}