// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/MappedMXBeanType.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_MAPPEDMXBEANTYPE_MAPMXBEANTYPE_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_MAPPEDMXBEANTYPE_MAPMXBEANTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class MappedMXBeanType_MapMXBeanType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::MappedMXBeanType_MapMXBeanType>
{
	static constexpr fixed_string class_name = "sun/management/MappedMXBeanType$MapMXBeanType";
	using base_classes = std::tuple<scapix::java_api::sun::management::MappedMXBeanType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_MAPPEDMXBEANTYPE_MAPMXBEANTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_MAPPEDMXBEANTYPE_MAPMXBEANTYPE)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_MAPPEDMXBEANTYPE_MAPMXBEANTYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::MappedMXBeanType_MapMXBeanType : public jni::object_base<"sun/management/MappedMXBeanType$MapMXBeanType",
	sun::management::MappedMXBeanType>
{
public:


protected:

	MappedMXBeanType_MapMXBeanType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_MAPPEDMXBEANTYPE_MAPMXBEANTYPE
