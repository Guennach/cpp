/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:17:42 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/14 20:08:10 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <utility>


int nbrCmp = 0;
// std::vector<std::pair<std::vector<int>, std::vector<int>>>
// split_into_pairs(std::vector<int> nbrs, int size,
//                  std::vector<std::pair<std::vector<int>, std::vector<int>>> new_pairs)
// {
//     // int counter_pair1 = 0;
//     // int counter_pair2 = 0;
//     int pair_tracker = 0;
//     std::cout << "Size = " << size << std::endl;
//     if (size == 2)
//     {
//         for (size_t i = 0; i < nbrs.size() - 1; i += 2)
//         {
//             std::pair<std::vector<int>, std::vector<int>> pair;
//             pair.first.push_back(nbrs[i]);
//             pair.second.push_back(nbrs[i + 1]);
//             new_pairs.push_back(pair);
//         }
//     }
//     else if (size > 2)
//     {
//         // we need to detect how many pairs we need to create
//         int pairCount = nbrs.size() / size;

//         // return (mergedPairs);
//     }
//     std::cout << "RECURSION DONE !" << std::endl;
//     return (new_pairs);
// }

void ft_swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void ft_print(std::vector<int> vr)
{
    for (size_t i = 0; i < vr.size(); i++)
        std::cout << vr[i] << " ";
    std::cout << std::endl;
}


template<typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

bool cmp(std::vector<int> s1, std::vector<int> s2)
{
    nbrCmp++;
    return (s1.back() < s2.back());
}

void rev_recur(std::vector<int>& nbrs, int size_pair, std::vector<int>& rest_vc)
{
    std::vector<std::vector<int> > vicis; 
    std::vector<std::vector<int> > mChain;
    std::vector<std::vector<int> > mPend;

    std::cout << "befor: \n";
    std::cout << size_pair << std::endl;
    // ft_print(nbrs);
    for (size_t i = 0; i < nbrs.size();)
    {
        std::vector<int> tmp; 
        for (size_t j = 0; j < (size_t)(size_pair / 2); j++)
            tmp.push_back(nbrs[i + j]);
        i += (size_pair / 2);
        vicis.push_back(tmp);
    }

    // for (size_t i = 0; i < vicis.size();i++)
    // {
    //     std::cout << "value: " << std::endl;
    //     for (size_t j = 0; j < vicis[i].size(); j++)
    //         std::cout << vicis[i][j] << " ";
    //     std::cout << std::endl;
    // }


    //create mainChain AND Pend
    // std::vector<
    for (size_t i = 0; i < vicis.size();i++)
    {
        if (i < 2 || i % 2 != 0)
            mChain.push_back(vicis[i]);
        else if (i % 2 == 0)
            mPend.push_back(vicis[i]);
    }
    if (rest_vc.size())
        mPend.push_back(rest_vc);

    std::cout << "---------------------\n";
    std::cout << "mChain: \n";
    for (size_t i = 0; i < mChain.size();i++)
    {
        std::cout << "value: " << std::endl;
        for (size_t j = 0; j < mChain[i].size(); j++)
            std::cout << mChain[i][j] << " ";
        std::cout << std::endl;
    }
    
    std::cout << "---------------------\n";
    std::cout << "mPend: \n";
    for (size_t i = 0; i < mPend.size();i++)
    {
        std::cout << "value: " << std::endl;
        for (size_t j = 0; j < mPend[i].size(); j++)
            std::cout << mPend[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << "---------------------\n";

    unsigned int arr[] = {2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366, 2730, 5462, 10922, 21846, 43690, 87380, 174762, 349524, 699050, 1398102, 2796202, 5592406, 11184810, 22369620, 44739242, 89478484, 178956970, 357913940, 715827882};
    //insert pend to main chain
    int sum = 0, push = 1, a = 0;
    int s = 0;
    for (size_t i = 0; i < mPend.size(); i++)
    {
        sum += arr[i];
        s = sum + push;
        std::vector<std::vector<int> >::iterator it;
        if (s >= (int)mChain.size())
            s = mChain.size();
        it = std::lower_bound(mChain.begin(), mChain.begin() + s, mPend[i], cmp);
        mChain.insert(it, mPend[i]);
        push++;
        // a++;
    }
    // size_t i = 0;
    nbrs.clear();
    for (size_t i = 0; i < mChain.size(); i++)
    {
        for (size_t j = 0; j < mChain[i].size(); j++)
            nbrs.push_back(mChain[i][j]);
    }
    // std::cout << "after: \n";
    // ft_print(nbrs);
}

std::vector<int> sort_nd_swap(std::vector<int>& nbrs, int size_pair, int size, std::vector<int>& rest_vici)
{
    std::vector <int> new_pair;
    std::vector<std::pair<std::vector<int>, std::vector<int> > > vici;
    std::vector<int> left_vici;
    std::vector<int> right_vici;
    int step = (size_pair / 2);
    int tracker = 0;
    int rest = nbrs.size() % size_pair;
    (void) size;
    for (size_t i = 0; i < nbrs.size() - rest;)
    {
        int clone_step = 0;
        left_vici.clear();
        right_vici.clear();
        for (; clone_step < step; clone_step++)
            left_vici.push_back(nbrs[i++]);
        clone_step = 0;
        for (; clone_step < step; clone_step++)
            right_vici.push_back(nbrs[i++]);
        nbrCmp++;
        if (left_vici.back() > right_vici.back())
            swap(right_vici, left_vici);
        vici.push_back(std::make_pair(left_vici, right_vici));
        tracker++;
    }

    size_t j_a = 0;
    int i_b = 0;

    while (j_a < vici.size())
    {
        i_b = 0;
        for (; i_b < step;)
            new_pair.push_back(vici[j_a].first[i_b++]);
        i_b = 0;
        for (; i_b < step;)
            new_pair.push_back(vici[j_a].second[i_b++]);
        j_a++;
    }
    for (size_t i = nbrs.size() - rest; i < nbrs.size(); i++)
        rest_vici.push_back(nbrs[i]);
    std::cout << std::endl;
    std::cout << "############################################" << std::endl;
    std::cout<< "########PAIRS###########" << std::endl;
    ft_print(new_pair);
    std::cout << std::endl;
    std::cout<< "########REST###########" << std::endl;
    ft_print(rest_vici);
    std::cout << "############################################" << std::endl;
    std::cout << "START = " << size_pair << std::endl;
    return (new_pair);
}



void merge_nd_sort_algo(std::vector<int>& nbrs, int size_pair, int size)
{
    std::vector<int> rest;

    nbrs = sort_nd_swap(nbrs, size_pair, size, rest);
    size_pair *= 2;
    std::cout << "nbrCmp: " << nbrCmp << std::endl;
    if ((nbrs.size() / size_pair) != 0)
    {
        merge_nd_sort_algo(nbrs, size_pair, size);
    }
    std::cout << size_pair << std::endl;
    rev_recur(nbrs, size_pair / 2, rest);
}


int main(int ac, char **av)
{
    if (ac > 1)
    {
        std::vector<int> nbrs;
        int i = 1;

        for (; i < ac; i++)
            nbrs.push_back(std::atoi(av[i]));

        std::cout << "##### Nbrs Chain ####" << std::endl;
        for (size_t i = 0; i < nbrs.size(); i++)
            std::cout << nbrs[i] << " ";
        std::cout << std::endl;
        size_t size = 2;

        merge_nd_sort_algo(nbrs, size, 0);
        ft_print(nbrs);
        std::cout << "nbrCmp: " << nbrCmp << std::endl;
    }
    return (0);
}