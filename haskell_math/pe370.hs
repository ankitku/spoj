--for faster execution compile using->  ghc -O2 -fllvm -fforce-recomp
main = print $ sum [1 | a<-[1..500000],b<-[1..a],c<-[1..b], a+b+c<=1000000, b^2==a*c]
