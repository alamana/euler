p4 :: Int -> Int -> String 
p4 x y = maximum' $ filter (isPal) xs
	where xs = [show (n*m) | n <- [1..x], m <- [1..y]]

isPal :: String -> Bool
isPal [] = True
isPal [x] = True
isPal (x:xs)
	| x == last xs = isPal (init xs)
	| otherwise = False

maximum' :: [String] -> String
maximum' [] = ""
maximum' [x] = x
maximum' (x:xs)
	| a > b = maximum' $ x:(tail xs)
	| otherwise = maximum' xs
	where
	a = read x :: Int
	b = read (head xs) :: Int
