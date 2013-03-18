p6 :: Integer -> Integer
p6 x = squareOfSum(x) - sumOfSquares(x)

squareOfSum :: Integer -> Integer
squareOfSum x = (^2) $ sum [0..x]

sumOfSquares :: Integer -> Integer
sumOfSquares x = sum [n^2 | n <- [0..x]]
