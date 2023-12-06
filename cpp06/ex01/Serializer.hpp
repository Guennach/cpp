/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:19:27 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/23 12:18:10 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


struct Data
{
    int idx;
    std::string data_type;
};


class Serializer
{
    private:
        Data* ptr;
        Serializer();
        Serializer(const Serializer &s);
        Serializer& operator=(const Serializer &a);
    public:
        ~Serializer();
        Data* getData();
        static Serializer* Init();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
