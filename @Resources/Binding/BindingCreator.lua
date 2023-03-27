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
