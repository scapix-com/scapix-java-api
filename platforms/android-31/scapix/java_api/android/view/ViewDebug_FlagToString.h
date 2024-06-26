// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_FLAGTOSTRING_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_FLAGTOSTRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class ViewDebug_FlagToString; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::ViewDebug_FlagToString>
{
	static constexpr fixed_string class_name = "android/view/ViewDebug$FlagToString";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_FLAGTOSTRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_FLAGTOSTRING)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_FLAGTOSTRING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::ViewDebug_FlagToString : public jni::object_base<"android/view/ViewDebug$FlagToString",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jint mask() { return call_method<"mask", jint>(); }
	jint equals() { return call_method<"equals", jint>(); }
	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jboolean outputIf() { return call_method<"outputIf", jboolean>(); }

protected:

	ViewDebug_FlagToString(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_FLAGTOSTRING
