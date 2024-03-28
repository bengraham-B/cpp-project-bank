local connDB = require("db_conn")


local function insertRecord(details, amount, type_, name)
    -- Connect to DB
    local con, err = connDB()

    if not con then
        print("500", err)
        return

    end
        
    local sql = string.format("INSERT INTO transaction (details, amount, type, name) VALUES ('%s', '%s', '%s', '%s')", details, amount, type_, name )

    local res, err = con:execute(sql)

    if not res then
        print("Error", err)
    else
        print("success", res)
    end

    con:close()
end

local data = {details="test", amount=69, type_="debit", name="Ben"}
print(data.details)

insertRecord("test", 69, "debit", "Same")
