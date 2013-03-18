p7 :: Integer -> Integer
p7 x = [n | n <- 2: (filter (isPrime) [3,5..])] !! (read (show (x-1)) :: Int)

isPrime :: Integer -> Bool
isPrime x = null xs
        where xs = take 1 [n | n <- 2:[3,5..sqrt' x], x `mod` n == 0]

sqrt' :: Integer -> Integer
sqrt' = ceiling . sqrt . (fromIntegral :: Integer -> Double)
