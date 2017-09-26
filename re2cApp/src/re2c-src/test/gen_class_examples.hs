{-
 - Compile: ghc -O2 -W -Wall gen_class_examples.hs
 -
 - This program generates some tests for re2c code point classes.
 - For each test, some code unit sequences are chosen that should
 - be lexed either as code points or as control characters inside
 - of class by re2c. These sequences are permutated.
 -
 - Each permutation gives one class.
 -}
import Data.List (permutations)

charsets :: [(String, [String])]
charsets =
    [ ("class1.i.re",
        [ "-"
        , "-"
        , "\\\\"
        , "\\]"
        , "\\a"
        ])
    , ("class2.i.re",
        [ "-"
        , "-"
        , "\\/"
        , "a"
        , "/"
        ])
    , ("class3.i8.re",
        [ "-"
        , "\\x12"
        , "\\X3456"
        , "\\u7890"
        , "\\U0010FfFf"
        ])
    , ("class4.i.re",
        [ "-"
        , "\\001"
        , "\\123"
        , "\\245"
        , "\\367"
        ])
    ]

neg :: String -> String
neg s = '^' : s

wrap :: String -> String
wrap s = concat ["/*!re2c [", s, "] { act } * { def } */"]

content :: [String] -> String
content chars =
    let ss = map concat $ permutations chars
        ls = map (\s -> unlines $ map wrap [s, neg s]) ss
        header = "autogenerated by gen_class_examples.hs"
    in  unlines $ header : ls

main :: IO ()
main = do
    mapM_ (\ (name, cs) -> writeFile name $ content cs) charsets
