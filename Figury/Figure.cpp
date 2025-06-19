//
// Created by Rafal Nowak on 28/05/2022.
//

#include "Figure.h"

Figure::Figure(string name)
{
    m_name = name;
}

string Figure::Name() const
{
    return m_name;
}