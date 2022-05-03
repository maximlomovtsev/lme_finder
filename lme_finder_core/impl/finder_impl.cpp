#include <impl/finder_impl.h>
#include <impl/find_engine_vk.h>

namespace lme
{
namespace finder
{
namespace core
{

FinderImpl::FinderImpl()
    : engines_{}
{
    engines_.insert(std::make_pair(EngineType::VK, std::make_shared<FindEngineVK>()));
}

std::shared_ptr<FindEngine> FinderImpl::GetEngine(const EngineType engineType)
{
    return engines_.at(engineType);
}

} // namespace core
} // namespace finder
} // namespace lme