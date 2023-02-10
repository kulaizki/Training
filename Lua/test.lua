local total = 50

io.write("Enter num1: ")
local num1 = tonumber(io.read())
io.write("Enter num2: ")
local num2 = tonumber(io.read())

if num1 % 2 == 0 then
    total = total + num1
else
    total = total - num1
end

if num2 % 2 == 0 then
    total = total + num2
else
    total = total - num2
end

print(total)