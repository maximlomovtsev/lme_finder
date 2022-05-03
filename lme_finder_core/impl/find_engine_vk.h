#pragma once

#include <interfaces/find_engine.h>

namespace lme
{
namespace finder
{
namespace core
{

class FindEngineVK : public FindEngine
{
public:
    std::string Find(const std::string& request) override;
};

} // namespace core
} // namespace finder
} // namespace lme