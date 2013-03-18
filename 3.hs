p3 :: Integer -> Integer
p3 x = last $ filter (isPrime) (first ++ second)
	where 
	first = [n | n <- 2:[3,5..sqrt' x], x `mod` n == 0]
	second = [ x `div` n | n <- first]

isPrime :: Integer -> Bool
isPrime x = null xs
	where xs = take 1 [n | n <- 2:[3,5..sqrt' x], x `mod` n == 0]
	
sqrt' :: Integer -> Integer
sqrt' = ceiling . sqrt . (fromIntegral :: Integer -> Double)
