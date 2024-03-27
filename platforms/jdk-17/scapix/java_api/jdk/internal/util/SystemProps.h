// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_SYSTEMPROPS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_SYSTEMPROPS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::util { class SystemProps; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::util::SystemProps>
{
	static constexpr fixed_string class_name = "jdk/internal/util/SystemProps";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_SYSTEMPROPS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_SYSTEMPROPS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_SYSTEMPROPS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/jdk/internal/util/SystemProps_Raw.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::util::SystemProps : public jni::object_base<"jdk/internal/util/SystemProps",
	java::lang::Object>
{
public:

	using Raw = SystemProps_Raw;

	static jni::ref<java::util::Map> initProperties() { return call_static_method<"initProperties", jni::ref<java::util::Map>>(); }

protected:

	SystemProps(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_SYSTEMPROPS