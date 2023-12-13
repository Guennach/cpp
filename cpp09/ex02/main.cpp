/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:17:42 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/11 19:41:03 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <utility>

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
std::vector<int> ft_swap_pair(int start, int end, std::vector<int> nbrs, int size_pair)
{
    std::vector<int> new_vec;

    for (int i = 0; i <= start - size_pair; i++)
        new_vec.push_back(nbrs[i]);
    for (int i = start + 1; i <= end; i++)
        new_vec.push_back(nbrs[i]);
    for (int i = (start - size_pair) + 1; i <= start; i++)
        new_vec.push_back(nbrs[i]);
    size_t i = end + 1;
    for (; i < nbrs.size() - size_pair; i++)
    {
        new_vec.push_back(nbrs[i]);
        // std::cout << "hna kanhet rest = " << nbrs[i] << std::endl;
    }
    std::vector <int> rest;

    for (; i < nbrs.size(); i++)
    {
        rest.push_back(nbrs[i]);
    }
    // std::cout << start << std::endl;
    // std::cout << end << std::endl;
    // std::cout << "##################" << std::endl;
    // std::cout << size_pair << std::endl;
    // std::cout << end + 1 << std::endl;
    // std::cout << nbrs.size() << std::endl;
    // std::cout << "##################" << std::endl;
    // new_vec = nbrs;
    std::cout << "#####PAIR#####" << std::endl;
    ft_print(new_vec);
    std::cout << "#####rest#####" << std::endl;
    ft_print(rest);
    std::cout << "#####SIZE PAIR####" << std::endl;
    std::cout << size_pair << std::endl;
    return (new_vec);
}



std::vector<int> sort_nd_swap(std::vector<int> nbrs, int size_pair, int size)
{
    std::vector<int> new_pair;
    std::vector<int> rest;
    int step = (size_pair / 2);
    (void)size;
    new_pair = nbrs;
    size_t i;
    for (i = (step - 1); i < new_pair.size() - step; i += step)
    {
        if (new_pair[i] > new_pair[i + step])
        {
            // std::cout << "IN SWAP" << std::endl;
            new_pair = ft_swap_pair(i, i + step, new_pair, step);
            // std::cout << "Swapped !" << std::endl;
        }
        i += step;
    }
 
    // std::vector<int> neuve;
    // if (i != new_pair.size())
    // {
    //     for (; i < new_pair.size(); i++)
    //     {
    //         rest.push_back(new_pair[i]);
    //     }
    //     std::cout << "#####REST#####" << std::endl;
    //     ft_print(rest);
        
    //     for (size_t i = 0; i < (new_pair.size() - step); i++)
    //     {
    //         neuve.push_back(new_pair[i]);
    //     }
    //     // std::cout << new_pair.size() - step << std::endl;
    //     // ft_print(rest);
    //     std::cout << size_pair << std::endl;
    //     new_pair = neuve;
    // }

    // std::cout << "I = " << i << " Size = " << new_pair.size() << std::endl;
    // std::cout << "NBR OF PAIRS = " << i % 2 << std::endl;
 
    return (new_pair);
}

// int ft_match_pair(std::vector<int> nbrs, int size_pair)
// {
//     for (size_t i = 0; i < nbrs.size(); i++);
// }

void merge_nd_sort_algo(std::vector<int> nbrs, int size_pair, int size)
{
    std::vector<int> rest;

    nbrs = sort_nd_swap(nbrs, size_pair, size);
    size_pair *= 2;
    if ((nbrs.size() / size_pair) != 0)
        merge_nd_sort_algo(nbrs, size_pair, size);
}

void swap_nd_sort(std::vector<std::pair<int, int>> &pr, int n)
{
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; ++i)
    {
        if (pr[i].second > pr[i + 1].second)
        {
            std::pair<int, int> temp = pr[i];
            pr[i] = pr[i + 1];
            pr[i + 1] = temp;
        }
    }

    swap_nd_sort(pr, n - 1);
}

std::vector<std::pair<int, int>> ft_sort_pairs(std::vector<std::pair<int, int>> pr)
{
    swap_nd_sort(pr, pr.size());
    return pr;
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

        std::vector<std::pair<int, int>> pairs;
        std::vector<int> nbr_vv;
        size_t size = 2;

        merge_nd_sort_algo(nbrs, size, 0);
        // ft_print(nbr_vv);
        // if (size == 2)
        // {

        // for (size_t i = 0; i < nbrs.size() - 1; i += 2)
        // {
        //     std::pair<int, int> pair;
        //     if (nbrs[i] < nbrs[i + 1])
        //     {
        //         pair.first = nbrs[i];
        //         pair.second = nbrs[i + 1];
        //     }
        //     else
        //     {
        //         pair.first = nbrs[i + 1];
        //         pair.second = nbrs[i];
        //     }
        //     pairs.push_back(pair);
        // }
        // }
        // pairs = ft_sort_pairs(pairs);
        // std::cout << "##### Sorted Chain of Pairs ####" << std::endl;
        // for (const auto &pair : pairs)
        // {
        //     std::cout << "( " << pair.first << " , " << pair.second << " ) ";
        // }
        // std::cout << std::endl;
        // std::vector<int> main_chain;
        // std::vector<int> pend;

        // for (size_t i = 0; i < pairs.size(); i++)
        // {
        //     if (i == 0)
        //     {
        //         main_chain.push_back(pairs[i].first);
        //         main_chain.push_back(pairs[i].second);
        //     }
        //     else
        //     {
        //         if (pairs[i].first > pairs[i].second)
        //         {
        //             main_chain.push_back(pairs[i].first);
        //             pend.push_back(pairs[i].second);
        //         }
        //         else
        //         {
        //             main_chain.push_back(pairs[i].second);
        //             pend.push_back(pairs[i].first);
        //         }
        //     }
        // }
        // std::cout << "#### Main Chain ####" << std::endl;
        // for (size_t i = 0; i < main_chain.size(); i++)
        // {
        //     std::cout << main_chain[i] << " ";
        // }
        // std::cout << std::endl;
        // std::cout << "#### Pend Chain ####" << std::endl;
        // for (size_t i = 0; i < pend.size(); i++)
        // {
        //     std::cout << pend[i] << " ";
        // }
        // std::cout << std::endl;
        // while ((size) <= nbrs.size())
        // {
        //     if (size == 2)
        //     {
        //         for (size_t i = 0; i < nbrs.size() - 1; i += 2)
        //         {
        //             std::pair<int, int> pair;
        //             if (nbrs[i] < nbrs[i + 1])
        //             {
        //                 pair.first = nbrs[i];
        //                 pair.second = nbrs[i + 1];
        //             }
        //             else
        //             {
        //                 pair.first = nbrs[i];
        //                 pair.second = nbrs[i + 1];
        //             }
        //             pairs.push_back(pair);
        //         }
        //     }
        //     // pairs = split_into_pairs(nbrs, size, pairs);
        //     size *= 2;
        // }
        i = 0;
    }
    return (0);
}