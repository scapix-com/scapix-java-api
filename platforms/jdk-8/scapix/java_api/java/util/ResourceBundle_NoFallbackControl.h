// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ResourceBundle_SingleFormatControl.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_NOFALLBACKCONTROL_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_NOFALLBACKCONTROL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ResourceBundle_NoFallbackControl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ResourceBundle_NoFallbackControl>
{
	static constexpr fixed_string class_name = "java/util/ResourceBundle$NoFallbackControl";
	using base_classes = std::tuple<scapix::java_api::java::util::ResourceBundle_SingleFormatControl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_NOFALLBACKCONTROL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_NOFALLBACKCONTROL)
#define SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_NOFALLBACKCONTROL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ResourceBundle_NoFallbackControl : public jni::object_base<"java/util/ResourceBundle$NoFallbackControl",
	java::util::ResourceBundle_SingleFormatControl>
{
public:

	jni::ref<java::util::Locale> getFallbackLocale(jni::ref<java::lang::String> p1, jni::ref<java::util::Locale> p2) { return call_method<"getFallbackLocale", jni::ref<java::util::Locale>>(p1, p2); }

protected:

	ResourceBundle_NoFallbackControl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_NOFALLBACKCONTROL