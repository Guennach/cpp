/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:07:02 by gothmane          #+#    #+#             */
/*   Updated: 2024/01/03 20:28:21 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>

int nbrCmp = 0;

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

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

bool cmp(std::vector<int> s1, std::vector<int> s2)
{
    nbrCmp++;
    return (s1.back() < s2.back());
}

void rev_recur(std::vector<int> &nbrs, int size_pair, std::vector<int> &rest_vc)
{
    std::vector<std::vector<int> > vicis;
    std::vector<std::vector<int> > mChain;
    std::vector<std::vector<int> > mPend;

    //Loop through size of nbrs and inc with (size_pair / 2)
    for (size_t i = 0; i < nbrs.size();)
    {
        std::vector<int> tmp;
        for (size_t j = 0; j < (size_t)(size_pair / 2); j++)
            tmp.push_back(nbrs[i + j]);
        i += (size_pair / 2);
        vicis.push_back(tmp);
    }
    // create main chain and pend
    for (size_t i = 0; i < vicis.size(); i++)
    {
        if (i % 2 != 0)
            mChain.push_back(vicis[i]);
        else if (i % 2 == 0)
            mPend.push_back(vicis[i]);
    }
    
    //Push the rest if it s found to Pend Chain
    if (rest_vc.size())
        mPend.push_back(rest_vc);

    // Insert first element from pend to main chain
    mChain.insert(mChain.begin(), mPend.front());

    // JaocbSthall algo
    unsigned int seq[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731,
                             5461, 10923, 21845, 43691, 87381, 174763, 349525};
    size_t one = 1;
    size_t two = 0;
    size_t sum = 0;
    size_t counter_seq = 0;
    for (size_t kr = 1; kr < mPend.size(); kr++)
    {
        one = seq[counter_seq + 1];
        two = seq[counter_seq] + 1; 
        if (one > mPend.size())
            one = mPend.size();
        if (two > one)
            break;
        std::vector<std::vector<int> >::iterator it;
        while (one >= two) 
        {
            it = std::lower_bound(mChain.begin(), mChain.begin() + (one + sum), mPend[one - 1], cmp);
            mChain.insert(it, mPend[one - 1]);
            sum++;
            one--;
        }
        counter_seq++;
    }

    nbrs.clear();
    for (size_t i = 0; i < mChain.size(); i++)
    {
        for (size_t j = 0; j < mChain[i].size(); j++)
            nbrs.push_back(mChain[i][j]);
    }
}

std::vector<int> sort_nd_swap(std::vector<int> &nbrs, int size_pair, std::vector<int> &rest_vici)
{
    std::vector<std::pair<std::vector<int>, std::vector<int> > > vici;
    std::vector<int> left_vici;  // left vector of the pair (vici left pair)
    std::vector<int> right_vici; // right vector of the pair (vici right pair)
    std::vector<int> new_pair;   // stores the new pairs
    int step = (size_pair / 2);  // size of each pair | ex : (size_pair = 4) (step = 2) (left = 2 | right = 2)
    int rest = nbrs.size() % size_pair;
    size_t j_a = 0;
    int i_b = 0;

    for (size_t i = 0; i < nbrs.size() - rest;)
    {
        int clone_step = 0;
        left_vici.clear();
        right_vici.clear();
        // Push left vector inside the pair
        for (; clone_step < step; clone_step++)
            left_vici.push_back(nbrs[i++]);
        clone_step = 0;
        // Push right vector inside the pair
        for (; clone_step < step; clone_step++)
            right_vici.push_back(nbrs[i++]);
        // Count number of compares
        nbrCmp++;
        // Swap if the back (last nbr) in the left pair > than right pair
        if (left_vici.back() > right_vici.back())
            swap(right_vici, left_vici);
        // Make pair object and pushe it in the main vector
        vici.push_back(std::make_pair(left_vici, right_vici));
    }

    // loop through the main vector and push each number that is considered as a pair to the vector<int>
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

    // Now we go through the rest and push it in a rest vector (Gonna get stored in stack frame as we will go through things recursively)
    for (size_t i = nbrs.size() - rest; i < nbrs.size(); i++)
        rest_vici.push_back(nbrs[i]);
    return (new_pair);
}

void merge_nd_sort_algo(std::vector<int> &nbrs, int size_pair)
{
    std::vector<int> rest;

    nbrs = sort_nd_swap(nbrs, size_pair, rest);
    size_pair *= 2;
    // Repeat the process recursively till (size of vector / size of pair) == 0
    if ((nbrs.size() / size_pair) != 0)
        merge_nd_sort_algo(nbrs, size_pair);
    rev_recur(nbrs, size_pair / 2, rest);
}

// DEQUE CODE PART

int nbrCmpDeq = 0;

void ft_print_deque(std::deque<int> vr)
{
    for (size_t i = 0; i < vr.size(); i++)
        std::cout << vr[i] << " ";
    std::cout << std::endl;
}

bool cmp_deq(std::deque<int> s1, std::deque<int> s2)
{
    nbrCmpDeq++;
    return (s1.back() < s2.back());
}

void rev_recur_deq(std::deque<int> &nbrs, int size_pair, std::deque<int> &rest_vc)
{
    std::deque<std::deque<int> > vicis;
    std::deque<std::deque<int> > mChain;
    std::deque<std::deque<int> > mPend;

    for (size_t i = 0; i < nbrs.size();)
    {
        std::deque<int> tmp;
        for (size_t j = 0; j < (size_t)(size_pair / 2); j++)
            tmp.push_back(nbrs[i + j]);
        i += (size_pair / 2);
        vicis.push_back(tmp);
    }
    // create main chain and pend
    for (size_t i = 0; i < vicis.size(); i++)
    {
        if (i % 2 != 0)
            mChain.push_back(vicis[i]);
        else if (i % 2 == 0)
            mPend.push_back(vicis[i]);
    }
    if (rest_vc.size())
        mPend.push_back(rest_vc);

    // Insert first element from pend to main chain
    mChain.insert(mChain.begin(), mPend.front());

    // JaocbSthall algo
    unsigned int seq[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525};
    size_t one = 1;
    size_t two = 0;
    size_t sum = 0;
    size_t counter_seq = 0;
    for (size_t kr = 1; kr < mPend.size(); kr++)
    {
        one = seq[counter_seq + 1];
        two = seq[counter_seq] + 1;
        if (one > mPend.size())
            one = mPend.size();
        if (two > one)
            break;
        std::deque<std::deque<int> >::iterator it;
        while (one >= two)
        {
            it = std::lower_bound(mChain.begin(), mChain.begin() + (one + sum), mPend[one - 1], cmp_deq);
            mChain.insert(it, mPend[one - 1]);
            sum++;
            one--;
        }
        counter_seq++;
    }

    nbrs.clear();
    for (size_t i = 0; i < mChain.size(); i++)
    {
        for (size_t j = 0; j < mChain[i].size(); j++)
            nbrs.push_back(mChain[i][j]);
    }
}


std::deque<int> sort_nd_swap_deq(std::deque<int> &nbrs, int size_pair, std::deque<int> &rest_vici)
{
    std::deque<int> new_pair;
    std::deque<std::pair<std::deque<int>, std::deque<int> > > vici;
    std::deque<int> left_vici;
    std::deque<int> right_vici;
    int step = (size_pair / 2);
    int rest = nbrs.size() % size_pair;
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
        nbrCmpDeq++;
        if (left_vici.back() > right_vici.back())
            swap(right_vici, left_vici);
        vici.push_back(std::make_pair(left_vici, right_vici));
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
    return (new_pair);
}

void merge_nd_sort_algo_deq(std::deque<int> &nbrs, int size_pair, int size)
{
    std::deque<int> rest;

    nbrs = sort_nd_swap_deq(nbrs, size_pair, rest);
    size_pair *= 2;
    if ((nbrs.size() / size_pair) != 0)
        merge_nd_sort_algo_deq(nbrs, size_pair, size);
    rev_recur_deq(nbrs, size_pair / 2, rest);
}

size_t ft_isNumber(std::string nbr)
{
    size_t size = 0;
    int point = 0;
    int sign = 0;

    for (size_t i = 0; i < nbr.size(); i++)
    {
        if (i == 0 && (nbr[0] == '-' || nbr [0] == '+'))
        {
            size++;
            sign = 1;
        }
        else if (nbr[i] == '.' && (nbr[i - 1] >= '0' &&  nbr[i - 1] <= '9') 
            && (nbr[i + 1] && nbr[i + 1] >= '0' &&  nbr[i + 1] <= '9'))
        {
            point++;
            size++;
        }
        else if ((nbr[i] >= '0' &&  nbr[i] <= '9'))
            size++;
    }
    if ((size == 1 && sign == 1))
        return (2);
    else if ((size == nbr.size() && point <= 1))
        return (1);
    return (2);
}

// END DEQUE
int main(int ac, char **av)
{
    if (ac > 1)
    {
        size_t size = 2;    // size to of pair (n*2)
        int i = 1;

        std::vector<int> nbrs; // vector list
        std::deque<int> nbrsdeq; // deque list

        for (; i < ac; i++)
        {
            if (ft_isNumber(std::string(av[i])) != 1 || std::atoi(av[i]) < 0)
            {
                std::cout << "Error" << std::endl;
                exit(1);
            }
            nbrs.push_back(std::atoi(av[i]));
            nbrsdeq.push_back(std::atoi(av[i]));
        }

        std::cout << "\033[1;31mBefore: \033[0m";
        for (size_t i = 0; i < nbrs.size(); i++)
            std::cout << nbrs[i] << " ";

        //Start time of sort
        clock_t start_l1 = clock();

        //Perform logic of sorting for vector container
        merge_nd_sort_algo(nbrs, size);

        //End time of sort
        clock_t end_l1 = clock();

        //calculation and convertion to microseconds
        double duration_l1 = (double)((end_l1 - start_l1)) * 100  / CLOCKS_PER_SEC;


        // deq algo

        //Start time of sort
        clock_t start_l2 = clock();

        //Perform logic of sorting for deque container
        merge_nd_sort_algo_deq(nbrsdeq, size, 0);

        //End time of sort
        clock_t end_l2 = clock();

        //calculation and convertion to microseconds
        double duration_l2 = (double)((end_l2 - start_l2)) * 100 / CLOCKS_PER_SEC;

        //Printing the vector list
        std::cout << "\n";
        std::cout << "\033[1;31mAfter: \033[0m";
        // std::cout << "\n";
        ft_print(nbrs);

        //Printing time infos
        std::cout << "Time to process a range of " << nbrs.size() << " elements with std::vector : \033[1;45m" << duration_l1 << "\033[0m"
                  << " us" << std::endl;
        std::cout << "Time to process a range of " << nbrs.size() << " elements with std::deque : \033[1;46m" << duration_l2 << "\033[0m"
                  << " us" << std::endl;

        //Printing Number of comparisons
        // std::cout << "\n\n";
        // std::cout << "Number of comparisons: \033[1;42m" << nbrCmp << "\033[0m" << std::endl;
        // std::cout << "\n";
    }
    return (0);
}