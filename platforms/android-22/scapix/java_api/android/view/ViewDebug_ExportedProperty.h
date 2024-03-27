// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_EXPORTEDPROPERTY_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_EXPORTEDPROPERTY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class ViewDebug_ExportedProperty; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::ViewDebug_ExportedProperty>
{
	static constexpr fixed_string class_name = "android/view/ViewDebug$ExportedProperty";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_EXPORTEDPROPERTY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_EXPORTEDPROPERTY)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_EXPORTEDPROPERTY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/ViewDebug_FlagToString.h>
#include <scapix/java_api/android/view/ViewDebug_IntToString.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::ViewDebug_ExportedProperty : public jni::object_base<"android/view/ViewDebug$ExportedProperty",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jboolean resolveId() { return call_method<"resolveId", jboolean>(); }
	jni::ref<jni::array<android::view::ViewDebug_IntToString>> mapping() { return call_method<"mapping", jni::ref<jni::array<android::view::ViewDebug_IntToString>>>(); }
	jni::ref<jni::array<android::view::ViewDebug_IntToString>> indexMapping() { return call_method<"indexMapping", jni::ref<jni::array<android::view::ViewDebug_IntToString>>>(); }
	jni::ref<jni::array<android::view::ViewDebug_FlagToString>> flagMapping() { return call_method<"flagMapping", jni::ref<jni::array<android::view::ViewDebug_FlagToString>>>(); }
	jboolean deepExport() { return call_method<"deepExport", jboolean>(); }
	jni::ref<java::lang::String> prefix() { return call_method<"prefix", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> category() { return call_method<"category", jni::ref<java::lang::String>>(); }
	jboolean formatToHexString() { return call_method<"formatToHexString", jboolean>(); }
	jboolean hasAdjacentMapping() { return call_method<"hasAdjacentMapping", jboolean>(); }

protected:

	ViewDebug_ExportedProperty(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_EXPORTEDPROPERTY
