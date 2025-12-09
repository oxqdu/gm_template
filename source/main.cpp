#include <GarrysMod/Lua/Interface.h>

namespace global
{
	static void Initialize(GarrysMod::Lua::ILuaBase* LUA)
	{
		LUA->CreateTable();

		LUA->PushString("template 1.0.0");
		LUA->SetField(-2, "Version");

		// version num follows LuaJIT style, xxyyzz
		LUA->PushNumber(10000);
		LUA->SetField(-2, "VersionNum");

		LUA->Push(-1);
		LUA->SetField(GarrysMod::Lua::INDEX_GLOBAL, "template");
	};

	static void Deinitialize(GarrysMod::Lua::ILuaBase* LUA)
	{
		LUA->PushNil();
		LUA->SetField(GarrysMod::Lua::INDEX_GLOBAL, "template");
	};
};

GMOD_MODULE_OPEN()
{
	global::Initialize(LUA);
	return 1;
};

GMOD_MODULE_CLOSE()
{
	global::Deinitialize(LUA);
	return 0;
};
