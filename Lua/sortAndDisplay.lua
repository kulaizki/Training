function sortAndDisplay(arr)
    table.sort(arr)
    for i,v in ipairs(arr) do print(v) end
end

arr = {4, 1, 8, 9}
sortAndDisplay(arr)
