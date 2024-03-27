// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ResourceBundle_Control.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_SINGLEFORMATCONTROL_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_SINGLEFORMATCONTROL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ResourceBundle_SingleFormatControl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ResourceBundle_SingleFormatControl>
{
	static constexpr fixed_string class_name = "java/util/ResourceBundle$SingleFormatControl";
	using base_classes = std::tuple<scapix::java_api::java::util::ResourceBundle_Control>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_SINGLEFORMATCONTROL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_SINGLEFORMATCONTROL)
#define SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_SINGLEFORMATCONTROL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ResourceBundle_SingleFormatControl : public jni::object_base<"java/util/ResourceBundle$SingleFormatControl",
	java::util::ResourceBundle_Control>
{
public:

	jni::ref<java::util::List> getFormats(jni::ref<java::lang::String> baseName) { return call_method<"getFormats", jni::ref<java::util::List>>(baseName); }

protected:

	ResourceBundle_SingleFormatControl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_SINGLEFORMATCONTROL
