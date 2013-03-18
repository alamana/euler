-- via informatikr

p2 = sum $ filter even $ takeWhile (<=4000000) fib

fib :: [Int]
fib = 1 : 2 : zipWith (+) fib (tail fib)
