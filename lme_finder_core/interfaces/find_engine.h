#pragma once

#include <string>

namespace lme
{
namespace finder
{
namespace core
{

struct FindEngine
{
    virtual ~FindEngine() = default;

    virtual std::string Find(const std::string& request) = 0;
};

} // namespace core
} // namespace finder
} // namespace lme