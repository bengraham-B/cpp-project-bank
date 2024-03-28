#ifndef INSERT_TRANSACTION.H
#define INSERT_TRANSACTION.H

#include <lua.hpp>
#include <LuaBridge/LuaBridge.h>
#include <string>

using namespace std;

bool insertTransaction(string& details, int amount, const string& type_, const string& name){
    
    // Creating the Lua state
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);

    //Load and execute the scripts
    luaL_dofile(L, "lua/insert_transaction.lua");

    //Get the Lua function
    luabridge::luaRef insertRecordFunc - luabridge::getGlobal(L, "insertRecord");

    // Call the Lua Function and pass data
    bool success = insertRecord(details, amount, type_, name);

    // Close Lua state
    lua_close(L);

    return success;
}


#endif
