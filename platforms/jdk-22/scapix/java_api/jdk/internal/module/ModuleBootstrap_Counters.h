// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEBOOTSTRAP_COUNTERS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEBOOTSTRAP_COUNTERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class ModuleBootstrap_Counters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::ModuleBootstrap_Counters>
{
	static constexpr fixed_string class_name = "jdk/internal/module/ModuleBootstrap$Counters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEBOOTSTRAP_COUNTERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEBOOTSTRAP_COUNTERS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEBOOTSTRAP_COUNTERS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::module::ModuleBootstrap_Counters : public jni::object_base<"jdk/internal/module/ModuleBootstrap$Counters",
	java::lang::Object>
{
public:


protected:

	ModuleBootstrap_Counters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEBOOTSTRAP_COUNTERS
