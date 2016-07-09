# Calculate leap year and print it
for year in range (1950,2050):
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        print (str(year), "is a leap-year")
