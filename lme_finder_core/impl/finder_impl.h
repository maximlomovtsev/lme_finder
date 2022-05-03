#pragma once

#include <interfaces/finder.h>

#include <map>

namespace lme
{
namespace finder
{
namespace core
{

class FinderImpl : public Finder
{
public:
    FinderImpl();

    std::shared_ptr<FindEngine> GetEngine(const EngineType engineType) override;

private:
    std::map<EngineType, std::shared_ptr<FindEngine>> engines_;
};

} // namespace core
} // namespace finder
} // namespace lme