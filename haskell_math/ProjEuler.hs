module ProjEuler
where
import GS
import Data.List

pandigital19 n = ("123456789"==(sort $ show n ))

fibPan n = (pandigital19 a) && (pandigital19 b)
	where
	a = n `mod` 1000000000
	b = read (take 9 (show n))::Int
proj104 = snd $ head $ dropWhile (\(x,y)-> (not.fibPan) x) (zip fibonacci [1..]) 


quadprimes a b = length $ takeWhile prime $ takeWhile (>0) $ map (\x-> x^2+a*x+b) [0..]
proj27 = foldl (\x y-> if (snd x>snd y) then x else y) (0,0) [(a*b,quadprimes a b) | a<-[-1000,-999 .. 1000],b<-[-1000,-999 .. 1000]]

proj24 = sort [read x :: Int | x<- (permutations "0123456789")] !! 999999

intrt p = length $  [(a,b,c)| a<-[1..p],b<-[1..a],c<-[1..b], a^2 == b^2 + c^2, a+b+c ==p]
proj39 = foldl (\x y-> if (snd x> snd y) then x else y) (0,0) [(p,intrt p) | p<-[1..1000]]


rInt :: String -> Integer
rInt = read

iscube n = foldl (&&) True $map (divides 3) $ map length $(group.sort) $ factors n
proj62 =  [c | c<- (filter iscube [1..]), length (filter (==True) $map iscube $map rInt (permutations $ show c)) >= 5]
