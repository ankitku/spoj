module GS 

where 
import Data.List

divides d n = rem n d == 0

ld :: Integer -> Integer 
ld n = ldf 2 n 

ldf :: Integer -> Integer -> Integer 
ldf k n | divides k n = k 
        | k^2 >  n    = n 
        | otherwise   = ldf (k+1) n

prime0 :: Integer -> Bool
prime0 n | n < 1     = error "not a positive integer"
         | n == 1    = False 
         | otherwise = ld n == n

mnmInt :: [Int] -> Int
mnmInt [] = error "empty list" 
mnmInt [x] = x
mnmInt (x:xs) = min x (mnmInt xs)

min' :: Int -> Int -> Int 
min' x y | x <= y    = x
         | otherwise = y 

average :: [Int] -> Rational
average [] = error "empty list" 
average xs = toRational (sum xs) / toRational (length xs)

sum' :: [Int] -> Int
sum' [] = 0 
sum' (x:xs) = x + sum' xs

length' :: [a] -> Int
length' [] = 0 
length' (x:xs) = 1 + length' xs

prefix :: String -> String -> Bool
prefix [] ys = True
prefix (x:xs) [] = False
prefix (x:xs) (y:ys) = (x==y) && prefix xs ys 

factors :: Integer -> [Integer]
factors n | n < 1     = error "argument not positive"
          | n == 1    = []
          | otherwise = p : factors (div n p) where p = ldp n

numDivisors n =  product (map (+1) (map length $ (group.sort) (factors n) ))

allfactors x = (sort.nub) $ map product $ (subsequences.factors) x

primes0 :: [Integer]
primes0 = filter prime0 [2..]    

ldp :: Integer -> Integer
ldp n = ldpf primes1 n

ldpf :: [Integer] -> Integer -> Integer
ldpf (p:ps) n | rem n p == 0 = p 
              | p^2 > n      = n
              | otherwise    = ldpf ps n

primes1 :: [Integer]
primes1 = 2 : filter prime [3..]

prime :: Integer -> Bool
prime n | n < 1     = error "not a positive integer"
        | n == 1    = False 


        | otherwise = ldp n == n

a = 3
b = 4 
f :: Integer -> Integer -> Integer
f x y = x^2 + y^2

g :: Integer -> Integer 
g x	| x == 0     = 0
	| otherwise = 2 * (g (x-1)) 

h1 :: Integer -> Integer 
h1 0 = 0
h1 x = 2 * (h1 x) 

h2 :: Integer -> Integer 
h2 0 = 0
h2 x = h2 (x+1) 

triangleNumbers = map (\x->sum[1..x]) [1..]

digits n = map (\x -> read [x] :: Int) (show n)

fibonacci = 1:1: zipWith (+) fibonacci (tail fibonacci)

factorial n = product [1..n]

armstrongnumbers = [x | x<-[3..], sum (map factorial $ digits x)==x]

