rsi = float(input("Enter RSI value: "))
print()
ema = input("Above or Below 30m EMA?\nInput [A] for Above [B] for Below: ")

if ema == 'A' and rsi < 35: 
    print("\nYou should look for Long Positions")
elif ema == 'B' and rsi > 65:
    print("\nYou should look for Short Positions")
else:
    print("\nYou should wait until RSI hits less than 35 or greater than 65")