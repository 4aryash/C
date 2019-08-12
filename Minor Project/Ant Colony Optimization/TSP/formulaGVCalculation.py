def hello():
    x = (GV/(D*T))	
    print(x)

if __name__ == "__main__":
    for i in range(100):
        D = float(input())
        GV = float(input())
        T = float(input())
        hello()
