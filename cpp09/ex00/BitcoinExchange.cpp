/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:49:16 by gothmane          #+#    #+#             */
/*   Updated: 2024/01/02 12:10:35 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

std::map<int, std::pair<std::string, std::string> > BitcoinExchange::getInput()
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

bool ft_check_date_digits(std::string date)
{
    size_t i = 0;
    int year = 0 , month = 0 , day = 0;
    int spliter = 0;
    char ys[4];
    char ms[4];
    char ds[4];

    for(; i < date.size(); i++)
    {
        if (i > 0 && date[i] == '-')
            spliter++;
        else if (spliter == 0)
        {
            ys[year] = date[i];
            year++;
            ys[year] = 0;
        }
        else if (spliter == 1)
        {
            ms[month] = date[i];
            month++;
            ms[month] = 0;
        }
        else if (spliter == 2)
        {
            ds[day] = date[i];
            day++;
            ds[day] = 0;
        }
    }
    if (spliter == 2 && year == 4 && month == 2 && day == 2)
    {
        if ((std::string(ms) == "00" || std::string(ds) == "00" || std::string(ys) == "0000" || std::atoi(ys) < 2008 || std::atoi(ms) > 12 || std::atoi(ds) > 31 ) )
            return (false);
        return (true);
    }
    return (false);
}

bool isDateFormatValid(const std::string &date)
{
    // struct tm tm;

    // char *checker = strptime(date.c_str(), "%Y-%m-%d", &tm);
    // if (checker == NULL)
    //     return (false);
    if (ft_check_date_digits(date) == true)
        return (true);
    return (false);
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
        return "";
    return (--it)->first; 
}

size_t ft_isNumber(std::string nbr)
{
    size_t size = 0;
    int point = 0;
    for (size_t i = 0; i < nbr.size(); i++)
    {
        if (i == 0 && (nbr[0] == '-' || nbr [0] == '+'))
            size++;
        else if (nbr[i] == '.' && (nbr[i - 1] >= '0' &&  nbr[i - 1] <= '9') 
            && (nbr[i + 1] && nbr[i + 1] >= '0' &&  nbr[i + 1] <= '9'))
        {
            point++;
            size++;
        }
        else if ((nbr[i] >= '0' &&  nbr[i] <= '9'))
            size++;
    }
    if (size == nbr.size() && point <= 1)
        return (1);
    return (2);
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
            if (i == 0 && line != "date | value")
            {
                std::cout << "\033[1;31mCheck ur first line first !" << "\033[0m" << "\n";
                exit(1);
            }
            else if (i > 0)
            {
                std::string date = line;
                if (date.find('|') != MAX_VALUE)
                {
                    date = date.substr(0, date.find("|") - 1);
                    std::string it = line.substr((line.find("|") + 2), line.size());

                    if (ft_isNumber(it) == 2)
                        std::cerr << "\033[1;31mError: [" << it << "] is not a Number.\033[0m\n" ;
                    else if (!isDateFormatValid(date))
                        std::cerr << "\033[1;31mError: date format not valid.\033[0m" << std::endl;
                    else if (std::strtod(it.c_str(), NULL) > 1000)
                        std::cerr << "\033[1;31mError: too large a number.\033[0m" << std::endl;
                    else if (std::strtod(it.c_str(), NULL) < 0)
                        std::cerr << "\033[1;31mError: not a positive number.\033[0m" << std::endl;
                    else
                    {
                        std::map< std::string,  std::string >::iterator it = data.begin();
                        int check = 0;
                        while (it != data.end())
                        {
                            if (it->first == date)
                            {
                                std::cout <<  "\033[1;35m" << date << "\033[0m" << " => " <<  line.substr((line.find("|") + 2), line.size()) << 
                                   " = \033[1;32m" << std::strtod(it->second.c_str(), NULL) * std::strtod(line.substr((line.find("|") + 2), line.size()).c_str(), NULL) << "\033[0m" << std::endl;
                                check = 1;
                            }
                            ++it;
                        }
                        if (check == 0)
                        {
                            std::map< std::string,  std::string >::iterator it = data.begin();
                            while (it != data.end())
                            {
                                if (it->first == findClosestLowerDate(data, date))
                                    std::cout <<  "\033[1;34m" << date << "\033[0m" << " => " << line.substr((line.find("|") + 2), line.size())  << 
                                        " = \033[1;32m" << std::strtod(it->second.c_str(), NULL) * std::strtod(line.substr((line.find("|") + 2), line.size()).c_str(), NULL) << "\033[0m" << std::endl;
                                ++it;
                            }
                        }
                    }
                    std::pair<int, std::pair<std::string, std::string> > pr = std::make_pair(i, std::make_pair(date, it));
                    input.insert(pr);
                }
                else
                {
                    if (line == "\0")
                        std::cerr << "\033[1;31mError: don't insert any empty line\033[0m\n";
                    else
                        std::cerr << "\033[1;31mError: bad input => " << date << "\033[0m" << std::endl;
                }
            }
            i++;
        }
        if (line == "\0" && i == 0)
            std::cout << "Empty file !\n";
    }
}
