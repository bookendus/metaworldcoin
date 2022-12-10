#pragma once

#include <mw/exceptions/MWCException.h>
#include <mw/util/StringUtil.h>

#define ThrowInsufficientFunds(msg) throw InsufficientFundsException(msg, __FUNCTION__)
#define ThrowInsufficientFunds_F(msg, ...) throw InsufficientFundsException(StringUtil::Format(msg, __VA_ARGS__), __FUNCTION__)

class InsufficientFundsException : public MWCException
{
public:
    InsufficientFundsException(const std::string& message, const std::string& function)
        : MWCException("InsufficientFundsException", message, function)
    {

    }
};