-- Variables:


 

-- Table of modifier keys
 local hotkeyModifiers = {
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

-- Value of the current profile the skin is set to
  --local current_profile = SKIN:GetVariable("CurrentProfile")

-- Specify the path and name of the hotkey binding file
 --local output_file = SKIN:MakePathAbsolute('Settings\\Profiles\\#CurrentProfile#\\Bindings.ahk')

-- Specify modifier keys to be used in the hotkey
local modkeys = {}

-- Specify regular keys to be used in the hotkey
local normalkeys = {}

-- Combination of keys to listen for or send, depending on the value of BindingMode
--local output = modkeys.. "" ..normalkeys

--AHK code string snippets






local function addKeyToTable(CurrentKey) -- checks what type of key the current working key is and places it in the proper table
-- Loop through the table and check if the value is present
for _, value in pairs(hotkeyModifiers) do 
  if value == CurrentKey then --check if value is contained within the list of modifier keys
  table.insert(modkeys, 1, CurrentKey) -- add the value to the table containing modifier keys
    print ("key is a modifier")
    return true
  else
    table.insert(normalkeys, 1, CurrentKey) -- add the value to the table containing normal keys
    print("Key is normal")
    return false
  end
end
end

print(modkeys[1])
print(normalkeys[1])

local function editBindingScript(BindingType, BindingIndex, BindingMode) --opens the profile's Bindings.ahk file and adds/modifies the current working hotkey
     -- Open the file for reading
     local file = io.open(output_file, "r")

     local ahkFile = {}

     local LineToEdit = (BindingIndex + 1)

     for Line in file:ahkFile() do
         table.insert(ahkFile, line)
     end
 
     -- Modify the line you want to change
     ahkFile[BindingIndex] = output
 
     -- Close the file
     file:close()
 
     -- Reopen the file for writing
     file = io.open(output_file, "w")
 
     -- Write the modified contents back to the file
     file:write(table.concat(ahkFile, "\n"))
 
     -- Close the file again
     file:close()
end

--local function find_string_in(file, BindingIndex)
  --for _, element in ipairs(file) do
    --  if (element == BindingIndex) then
 --         return true
      --else
        --  return false
      --end
  --end
 
--end

-- Requires: tbl is a table containing strings; str is a string.
-- Effects : returns true if tbl contains str, false otherwise.


--local t = {"hello", "there", "friend"}
--print(find_string_in(t, "friend"))
--print(find_string_in(t, "goodbye"))

