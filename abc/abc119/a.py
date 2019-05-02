from datetime import datetime, date

s = datetime.strptime(input(), '%Y/%m/%d').date()
if s <= date(2019, 4, 30):
    print('Heisei')
else:
    print('TBD')
