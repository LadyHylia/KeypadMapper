--------variables-------

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

-- Table of modifier keys
 hotkeyModifiers = {
    ["Ctrl"] = "^",
    ["Shift"] = "+",
    ["Alt"] = "!",
    ["Win"] = "#",
    ["Bitwise AND"] = "&",
    ["Tilde"] = "~",
    ["Left Winkey"] = "<#>",
    ["Left Ctrl"] = "<^>",
    ["Left Alt"] = "<!>",
    ["Left Shift"] = "<+>",
    ["Right Shift"] = "<=>",
    ["Right Winkey"] = "<^#>",
    ["Right Alt"] = "<^!>",
    ["Right Ctrl"] = "<^+>",
  }


  current_profile = SKIN:GetVariable("CurrentProfile")

-- Specify the path and name of the hotkey binding file
 output_file = SKIN:MakePathAbsolute("Settings\Profiles\#CurrentProfile#\Bindings.ahk")


modkeys = {}

normalkeys = {}


function addKeyToTable(CurrentKey) -- checks what type of key the current working key is and places it in the proper table
-- Loop through the table and check if the value is present
for _, value in ipairs(hotkeyModifiers) do
  if value == hotkeyModifiers then
    table.insert(modkeys, value) -- add the value to the table containing modifier keys
  else
    table.insert(normalkeys, value) -- add the value to the table containing normal keys
    break
  end
end
end


function editBindingScript(BindingType, BindingIndex, BindingMode) --opens the profile's Bindings.ahk file and adds/modifies the current working hotkey
     -- Open the file for reading
     local file = io.open(output_file, "r")
    local LineToEdit = 
     -- Read the contents of the file into a table
     local lines = {}
     for line in file:lines() do
         table.insert(lines, line)
     end
 
     -- Modify the line you want to change
     lines[BindingIndex] = "This is the new content for line 3"
 
     -- Close the file
     file:close()
 
     -- Reopen the file for writing
     file = io.open(output_file, "w")
 
     -- Write the modified contents back to the file
     file:write(table.concat(lines, "\n"))
 
     -- Close the file again
     file:close()
end



-- Requires: tbl is a table containing strings; str is a string.
-- Effects : returns true if tbl contains str, false otherwise.
local function find_string_in(tbl, str)
    for _, element in ipairs(tbl) do
        if (element == str) then
            return true
        end
    end
    return false
end

local t = {"hello", "there", "friend"}
print(find_string_in(t, "friend"))
print(find_string_in(t, "goodbye"))