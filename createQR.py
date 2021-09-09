import qrcode
import PIL  
import csv

with open('ez.csv', newline='') as csvfile:
    ss = csv.reader(csvfile, delimiter=',', quotechar='"')
    cnt = 0
    for row in ss:
        if(len(row) <= 2) :
            continue
        print(row[0])
