// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SYSTEMMODULESMAP_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SYSTEMMODULESMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class SystemModulesMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::SystemModulesMap>
{
	static constexpr fixed_string class_name = "jdk/internal/module/SystemModulesMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SYSTEMMODULESMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SYSTEMMODULESMAP)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SYSTEMMODULESMAP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::module::SystemModulesMap : public jni::object_base<"jdk/internal/module/SystemModulesMap",
	java::lang::Object>
{
public:


protected:

	SystemModulesMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SYSTEMMODULESMAP
