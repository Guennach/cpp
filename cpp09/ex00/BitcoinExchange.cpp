/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:49:16 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/05 15:57:13 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <vector>
#include <sstream>
#include <ctime>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &be)
{
    *this = be;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &be)
{
    if (this != &be)
        this->data = be.data;
    return (*this);
}

std::map<int, std::pair<std::string, std::string>> BitcoinExchange::getInput()
{
    return (this->input);
}

std::map<std::string, std::string> BitcoinExchange::getData()
{
    return (this->data);
}

std::pair<std::string, int> BitcoinExchange::ft_split(std::string line)
{
    // const char *casted = line.c_str();
    std::pair<std::string, int> mp;

    std::cout << line.find(',');
    // Return a default pair if no comma is found
    return mp;
}

bool isDateFormatValid(const std::string &date)
{
    std::istringstream iss(date);
    std::tm tm = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL};
    iss >> std::get_time(&tm, "%Y-%m-%d");
    return !iss.fail();
}

int BitcoinExchange::ft_checkDate_nd_Value(std::string date)
{
    if (isDateFormatValid(date))
        return (1);
    std::cout << "Date format is invalid." << std::endl;
    return 0;
}

void BitcoinExchange::ft_fillmap(std::string nameFile)
{
    std::ifstream in(nameFile);
    int i = 0;

    if (in.is_open())
    {
        std::string line;
        while (std::getline(in, line))
        {
            if (i > 0)
            {
                std::string date = line;
                date = date.substr(0, date.find(","));
                std::string it = line.substr((line.find(",") + 1), line.size());
                // if (ft_checkDate_nd_Value(date) == 0)
                // {
                //     // std::cout << "Key: " << i << ", Value: BREAKED (" << date << ", " << it << ")" << std::endl;
                //     break;
                // }
                std::pair<std::string, std::string> pr = std::make_pair(date, it);
                data.insert(pr);
            }
            i++;
        }
    }
}
const uint64_t MAX_VALUE = 18446744073709551615ULL;

std::string findClosestLowerDate(const std::map<std::string, std::string> &dates, std::string targetDate)
{
    std::map<std::string, std::string>::const_iterator it = dates.lower_bound(targetDate);

    if (it == dates.begin())
    {
        // targetDate is smaller than all dates in the map
        return "";
    }

    // Decrement the iterator to get the closest lower date
    --it;

    return it->first; // Return the date from the pair
}

void BitcoinExchange::ft_fillmap_input(std::string nameFile)
{
    std::ifstream in(nameFile);
    int i = 0;

    if (in.is_open())
    {
        std::string line;
        while (std::getline(in, line))
        {
            if (i > 0)
            {
                std::string date = line;
                if (date.find('|') != MAX_VALUE)
                {
                    date = date.substr(0, date.find("|") - 1);
                    std::string it = line.substr((line.find("|") + 2), line.size());
                    // std::string nbr = it;
                    if (!isDateFormatValid(date))
                    {
                        it = "DATE_ERROR";
                        std::cout << "date error" << std::endl;
                    }
                    else if (std::strtod(it.c_str(), NULL) > 1000)
                    {
                        it = "MAX_INT";
                        std::cout << "Error: too large a number." << std::endl;
                    }
                    else if (std::strtod(it.c_str(), NULL) < 0)
                    {
                        it = "MIN_INT";
                        std::cout << "Error: not a positive number." << std::endl;
                    }
                    else
                    {
                        // std::cout << date << std::endl;
                        auto it = data.begin();
                        int check = 0;
                        while (it != data.end())
                        {
                            if (it->first == date)
                            {
                                std::cout << it->first << " => " <<  line.substr((line.find("|") + 2), line.size()) << 
                                    " = " << std::strtod(it->second.c_str(), NULL) * std::strtod(line.substr((line.find("|") + 2), line.size()).c_str(), NULL)  << std::endl;
                                check = 1;
                            }
                            ++it;
                        }
                        if (check == 0)
                        {
                            auto it = data.begin();
                            while (it != data.end())
                            {
                                if (it->first == findClosestLowerDate(data, date))
                                    std::cout << it->first << " => " << line.substr((line.find("|") + 2), line.size())  << 
                                        " = " << std::strtod(it->second.c_str(), NULL) * std::strtod(line.substr((line.find("|") + 2), line.size()).c_str(), NULL)  << std::endl;
                                ++it;
                            }
                        }
                    }
                    std::pair<int, std::pair<std::string, std::string>> pr = std::make_pair(i, std::make_pair(date, it));
                    input.insert(pr);
                }
                else
                {
                    std::cout << "Error: bad input => " << date << std::endl;
                }
            }
            i++;
        }
    }
}
