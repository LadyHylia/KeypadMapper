function Initialize()


    local current_profile = SKIN:GetVariable("CurrentProfile")
    

    -- Specify the path and name of the output file
    local output_file = SKIN:MakePathAbsolute("Settings\Profiles\#CurrentProfile#\Bindings.ahk")

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
