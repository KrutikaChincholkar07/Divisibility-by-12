num = int(input("Enter a number: "))

# check divisibility by 3
temp = num
digit_sum = 0
while temp > 0:
    digit_sum += temp % 10
    temp //= 10

div3 = (digit_sum % 3 == 0)

# check divisibility by 4
div4 = (num % 100) % 4 == 0

if div3 and div4:
    print(num, "is divisible by 12")
else:
    print(num, "is not divisible by 12")
