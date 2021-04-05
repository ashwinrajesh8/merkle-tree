# merkle-tree
C++ implementation of a self balancing merkle tree

## Sample Input
Below we push a series of encrypted strings as hash pointers for our initial leaf nodes
~~~
    leaves.push_back(new Node(hash_sha256("ashwin")));
    leaves.push_back(new Node(hash_sha256("rajesh")));
    leaves.push_back(new Node(hash_sha256("mastercard 1000 2342 6513 1347")));
    leaves.push_back(new Node(hash_sha256("!@(@#)E&")));
    leaves.push_back(new Node(hash_sha256("ajosdhuhsdioa adsijd asjiod q9p0ad a.")));
    leaves.push_back(new Node(hash_sha256("hi Dr. Fontenot, this about to be encrypted")));
    leaves.push_back(new Node(hash_sha256("test01234")));
    leaves.push_back(new Node(hash_sha256("7846546521")));
    leaves.push_back(new Node(hash_sha256("CS 3353 IS THE BEST CLASS EVER!! YAY!")));
    leaves.push_back(new Node(hash_sha256("asd970123+_?>?< f")));
    leaves.push_back(new Node(hash_sha256("MY LOCATION: 16.8409° N, 96.1735° E")));
    leaves.push_back(new Node(hash_sha256("op_) 4654asd21")));
    leaves.push_back(new Node(hash_sha256("12893 d970123+_qweawdf")));
~~~

## Sample Output
Notice how the hashes are combined to form the root, if any aspect of the original strings we encrypted were changed, we would end up with an entirely different root hash.
~~~
C:\Users\Ashwi\OneDrive\Documents\GitHub\merkle-tree\cmake-build-debug\merkle_tree.exe
c1a50a0300c4f57ee29dcaf0a3d41c1d0d09ee8bfb4dd5f8515df1c8cf46bfac
973d7f9efc06ba81112bceb8205309ff0f49c303c28914a1dcf143d86a1b15b4
ee45405e8d2b294ea3e9d2b80375c2a1dac1c07359d139029f9fb32702663050
cffac2954b0d3bb974070c8160ced63599438cf0d69bcfb5027d8ce268ae2c01
76ce7e9f23b3c1e8940addf5b22b86a85bfb824ef249e785e0377b7228fbc2bf
365dfcdb94e616c21989617c21bfa60715f80aa8bc06021c03b293670fb62739
8fa675cc452a44a9ca2816714f005640c53432b391b71f51f9a6cdd170eb623c
a5cf1aba29c602c28945b92a3028ce908ceff4148be20d06b3267ba5329d49fa
7d2753ea606afe34ccfa934b0c512e355e1f90f3b422ef8d768f926916d712db
65a6cde9598daf34eeef1ddb61bc95484aebe8088ac8c0757a20977ff7eb83c6
a54de05fe55060609f1f49b288f53d935319a2ea13140d552c77de017d9a4f01
9b6df9398983b1f4b9624d5bc2f712a187e5cb75f7ef3893a021c46dd092f094
a85f492c19143b93c5a01ca1215a6fe6afec9a994865caa4fcca4d62c976ff32

db390adf26462d4ff48dd1f0fda601ea25134bb9b51cabe0a52a2b8af04cf888
0fa2474375287c1b6612644ebbd92828ab889616114596270072ad53cd5ac38e
47642dbf43ca580f79a631caa74768fb03bae304bf55c75131004d2fdf384beb
9e0c636d20872ff7a81b84515e2b5820df11db713b1fc2bbafc9543d55df5528
fa4167751dfb1e137ecb9607cf579624acc05d1cf4cf8d5c50864cfafb636f9c
c38543e1172818c989e124e3a088a73dd07d633b38695ff127ea7cd63fcf579b
a85f492c19143b93c5a01ca1215a6fe6afec9a994865caa4fcca4d62c976ff32

09e9713eb2a088efb31332e0f2026b96cb06158e765df1f52ff62da79e80571f
13316bc7b6416d5257c2808bd1eff357de992ccb2b607007fa8eeed8c22cce50
b54377aeb4b82f45ec1bf1cf6396330fe0fc9e8a66ec3b6b5ae0f55a841563f5
a85f492c19143b93c5a01ca1215a6fe6afec9a994865caa4fcca4d62c976ff32

5a5069f56187b69a45012ee5c823c2d23a5e3355b39132ee4d5e9c906edf0a56
4ac30ed9ca8e919374b6defe5246e9b3203fb7d2fc795d1b4ceee0db15ee18c1

30d5dbf1147b30cb46181320de2ccb2d35034f1fa391ff192a79e9bf8995d935
                c
                 9
             d
                 e
                 c
             0
         0
                 7
                 3
             4
                 8
                 a
             9
         1
     5
                 7
                 6
             f
                 a
                 9
             c
         b
         a
     4
 3
 Tree deleted

Process finished with exit code 0

~~~

## Usage
Run `sudo make && make clean` to compile and `./main` to run. Sample data is located in `src/main.cpp`.  


Code Credit: https://github.com/sputnik1458/merkle-tree