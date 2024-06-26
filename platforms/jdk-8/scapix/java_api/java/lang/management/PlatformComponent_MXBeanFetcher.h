// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_PLATFORMCOMPONENT_MXBEANFETCHER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_PLATFORMCOMPONENT_MXBEANFETCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::management { class PlatformComponent_MXBeanFetcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::management::PlatformComponent_MXBeanFetcher>
{
	static constexpr fixed_string class_name = "java/lang/management/PlatformComponent$MXBeanFetcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_PLATFORMCOMPONENT_MXBEANFETCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_PLATFORMCOMPONENT_MXBEANFETCHER)
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_PLATFORMCOMPONENT_MXBEANFETCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::management::PlatformComponent_MXBeanFetcher : public jni::object_base<"java/lang/management/PlatformComponent$MXBeanFetcher",
	java::lang::Object>
{
public:

	jni::ref<java::util::List> getMXBeans() { return call_method<"getMXBeans", jni::ref<java::util::List>>(); }

protected:

	PlatformComponent_MXBeanFetcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_PLATFORMCOMPONENT_MXBEANFETCHER
