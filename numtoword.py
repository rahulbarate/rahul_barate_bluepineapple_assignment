def numToWord(num):
    cnt = 0
    finalStrList = []
    while(num != 0):
        str = getOneChunkStr(int(num % 1000))
        if str != "":
            str = str + millionToDecillion[cnt]
        cnt = cnt + 1
        num = int(num / 1000)
        finalStrList.append(str)
    # print("")
    finalStrList = finalStrList[::-1]
    if len(finalStrList) == 0:
        print("zero")
    else:
        for i in finalStrList:
            print(i, end="")


def getOneChunkStr(num):
    onesDigit = int(num % 10)
    tensDigit = int((num % 100)/10)
    hundreadsDigit = int(num / 100)

    onesStr = ""
    tensStr = ""
    hundreadsStr = ""
    finalStr = ""

    if tensDigit >= 1:
        if tensDigit > 1:
            tensStr = getTensStr(tensDigit)
        else:
            if onesDigit == 0:
                tensStr = zeroToTen[10]
            else:
                tensStr = elevenToNineteen[onesDigit]
    if onesDigit >= 1 and tensDigit != 1:
        onesStr = getOnesStr(onesDigit)
    if hundreadsDigit >= 1:
        hundreadsStr = getOnesStr(hundreadsDigit)+" " + hundread

    finalStr = hundreadsStr + tensStr + onesStr

    return finalStr


def getTensStr(tensDigit):
    return twentyToNinety[tensDigit]


def getOnesStr(onesDigit):
    return zeroToTen[onesDigit]


zeroToTen = [" zero ", " one ", " two ", " three ", " four ",
             " five ", " six ", " seven ", " eight ", " nine ", " ten "]

elevenToNineteen = ["", " eleven ", " twelve ", " thirteen ", " fourteen ",
                    " fifteen ", " sixeen ", " seventeen ", " eighteen ", " nineteen "]
twentyToNinety = ["", "", " twenty ", " thirty ", " fourty ",
                  " fifty ", " sixty ", " seventy ", " eighty ", " ninety "]
hundread = " hundread "

millionToDecillion = ["", " thousand ", " million ", " billion ", " trillion ", " quadrillion ",
                      " sextillion ", " septillion ", " octillion ", " nonillion ", " decillion "]


def main():
    num = int(input("Enter Number : "))
    numToWord(num)


main()
