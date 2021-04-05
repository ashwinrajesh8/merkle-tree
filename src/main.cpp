#include <iostream>
#include "../include/merkle_tree.h"

int main() {
    std::vector<Node*> leaves;

    //create sample data
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

    // initialize leaves
    for (unsigned int i = 0; i < leaves.size(); i++) {
        leaves[i]->left = NULL;
        leaves[i]->right = NULL;
    }

    MerkleTree *hashTree = new MerkleTree(leaves);
    std::cout << hashTree->root->hash << std::endl;
    hashTree->printTree(hashTree->root, 0);

    for (unsigned int k = 0; k < leaves.size(); k++) {
        delete leaves[k];
    }

    delete hashTree;

    return 0;
}
