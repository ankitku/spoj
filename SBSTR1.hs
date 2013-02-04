import System.Environment
import Data.List
import Control.Monad

contains :: String -> String -> Int
contains " " " " = 1
contains a " " = 1
contains " " a  = 0
contains a b
	| (b `isInfixOf` a) = 1
	| otherwise = 0


main = forever $ do	(a:b) <- getArgs
	print $ contains a b
