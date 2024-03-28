-- This is the file which will handle connecting to the db

local function connDB()
    

    local luasql = require "luasql.postgres"

    local env = assert(luasql.postgres())

    local dbname = "bank"
    local username = "root"
    local password = "root"
    local port = "5429"

    local con, err = env:connect("bank", "root", "root", "localhost", "5429")

    -- check if connection is successful
    if not con then
        print("Error In Connect Script", err)

    else
        print("Connected to DB - conn_db.lua")

        return con 
    end

    -- env:close()
end

return connDB



