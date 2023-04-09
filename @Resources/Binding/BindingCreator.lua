-- Variables
    print("Hi!")
-- Define a table
local myTable = {"", "banana", "orange"}

local keyboard = {
    ["escape"] = 1,
    ["f1"] = 2,
    ["f2"] = 3,
    ["f3"] = 4,
    ["f4"] = 5,
    ["f5"] = 6,
    ["f6"] = 7,
    ["f7"] = 8,
    ["f8"] = 9,
    ["f9"] = 10,
    ["f10"] = 11,
    ["f11"] = 12,
    ["f12"] = 13,
    ["printscreen"] = 14,
    ["scrolllock"] = 15,
    ["pause"] = 16,
    ["tilde"] = 17,
    ["1"] = 18,
    ["2"] = 19,
    ["3"] = 20,
    ["4"] = 21,
    ["5"] = 22,
    ["6"] = 23,
    ["7"] = 24,
    ["8"] = 25,
    ["9"] = 26,
    ["0"] = 27,
    ["minus"] = 28,
    ["equals"] = 29,
    ["backspace"] = 30,
    ["insert"] = 31,
    ["home"] = 32,
    ["pageup"] = 33,
    ["numlock"] = 34,
    ["numpaddivide"] = 35,
    ["numpadmultiply"] = 36,
    ["numpadminus"] = 37,
    ["tab"] = 38,
    ["q"] = 39,
    ["w"] = 40,
    ["e"] = 41,
    ["r"] = 42,
    ["t"] = 43,
    ["y"] = 44,
    ["u"] = 45,
    ["i"] = 46,
    ["o"] = 47,
    ["p"] = 48,
    ["delete"] = 52,
    ["end"] = 53,
    ["pagedown"] = 54,
    ["numpadplus"] = 58,
    ["capslock"] = 59,
    ["a"] = 60,
    ["s"] = 61,
    ["d"] = 62,
    ["f"] = 63,
    ["g"] = 64,
    ["h"] = 65,
    ["j"] = 66,
    ["k"] = 67,
    ["l"] = 68,
    ["semicolon"] = 69,
    ["apostrophe"] = 70,
    ["enter"] = 71,
    ["leftshift"] = 75,
    ["z"] = 76,
    ["x"] = 77,
    ["c"] = 78,
    ["v"] = 79,
    ["b"] = 80,
    ["n"] = 81,
    ["m"] = 82,
    ["comma"] = 83,
    ["period"] = 84,
    ["slash"] = 85,
    ["rightshift"] = 86,
    [ "leftalt" ] = 86,
    [ "space" ] = 87,
    [ "rightalt" ] = 88,
    [ "function" ] = 89,
    [ "leftwin" ] = 90,
    [ "rightwin" ] = 91,
    [ "menu" ] = 92,
    [ "rightctrl" ] = 93,
    [ "numpad0" ] = 94,
    [ "numpadperiod" ] = 95,
    [ "numpadenter" ] = 96,
    [ "numpad1" ] = 97,
    [ "numpad2" ] = 98,
    [ "numpad3" ] = 99,
    [ "numpad4" ] = 100,
    [ "numpad5" ] = 101,
    [ "numpad6" ] = 102,
    [ "numpad7" ] = 103,
    [ "numpad8" ] = 104,
    [ "numpad9" ] = 105,
    [ "leftbracket" ] = 106,
    [ "backslash" ] = 107,
    [ "rightbracket" ] = 108,
    [ "quote" ] = 109,
    ["F13"] = 110,
    ["F14"] = 111,
    ["F15"] = 112,
    ["F16"] = 113,
    ["F17"] = 114,
    ["F18"] = 115,
    ["F19"] = 116,
    ["F20"] = 117,
    ["F21"] = 117,
    ["F22"] = 119,
    ["F23"] = 120,
    ["F24"] = 121
}

-- create the tables
local SpecialKeys = {
    ["escape"] = 1,
    ["tab"] = 38,
    ["capslock"] = 59,
    [ "rightctrl" ] = 93,
    [ "rightalt" ] = 88,
    [ "function" ] = 89,
    [ "leftwin" ] = 90,
    [ "rightwin" ] = 91,
}


local Keys = {}
local KeyTable = { SpecialKeys = SpecialKeys, Keys = Keys }

-- add a key to the table based on its case
addKeyToTable("A", true, keyTable) -- adds "A" to the uppercaseKeys table
addKeyToTable("a", false, keyTable) -- adds "a" to the lowercaseKeys table

function Initialize()


    local current_profile = SKIN:GetVariable("CurrentProfile")
    
	-- Specify the path and name of the output file
    local output_file = SKIN:MakePathAbsolute("Settings\Profiles\#CurrentProfile#\Bindings.ahk")
	
    -- Open the file for reading
    local file = io.open(output_file, "r")

    -- Read the contents of the file into a table
    local lines = {}
    for line in file:lines() do
        table.insert(lines, line)
    end

    -- Modify the line you want to change
    lines[3] = "This is the new content for line 3"

    -- Close the file
    file:close()

    -- Reopen the file for writing
    file = io.open(output_file, "w")

    -- Write the modified contents back to the file
    file:write(table.concat(lines, "\n"))

    -- Close the file again
    file:close()



    

    -- Open the file in write mode
    local file = io.open(output_file, "w")

    -- Write the key bindings for each variable that is "true"
    if SKIN:GetVariable("A") == "true" then
        file:write("a::Send {A}\n")
    end

    if SKIN:GetVariable("B") == "true" then
        file:write("b::Send {B}\n")
    end

    if SKIN:GetVariable("C") == "true" then
        file:write("c::Send {C}\n")
    end

    -- Repeat for the rest of the alphabet...

    -- Close the file
    file:close()
end


function addKeyToTable(CurrentKey, targetTable)

-- Loop through the table and check if the value is present
for _, value in ipairs(myTable) do
    if value == myValue then
        targetTable.SpecialKeys[Currentkey] = true
      break
    if 
    end
  end

    
end








function DoTheThing(CurrentKey, IsSpecial, TargetTable)
    if IsSpecial then
        targetTable.SpecialKeys[Currentkey] = true
    else
        targetTable.Keys[key] = true
    end
end

