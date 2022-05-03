#pragma once

#include <interfaces/find_engine.h>
#include <model/engine_type.h>

#include <stdint.h>
#include <string>
#include <memory>

namespace lme
{
namespace finder
{
namespace core
{

struct Finder
{
    virtual ~Finder() = default;

    virtual std::shared_ptr<FindEngine> GetEngine(const EngineType engineType) = 0;
};

} // namespace core
} // namespace finder
} // namespace lme