// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_CONTROL_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_CONTROL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ResourceBundle_Control; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ResourceBundle_Control>
{
	static constexpr fixed_string class_name = "java/util/ResourceBundle$Control";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_CONTROL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_CONTROL)
#define SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_CONTROL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/ResourceBundle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::ResourceBundle_Control : public jni::object_base<"java/util/ResourceBundle$Control",
	java::lang::Object>
{
public:

	static jni::ref<java::util::List> FORMAT_CLASS() { return get_static_field<"FORMAT_CLASS", jni::ref<java::util::List>>(); }
	static jni::ref<java::util::List> FORMAT_DEFAULT() { return get_static_field<"FORMAT_DEFAULT", jni::ref<java::util::List>>(); }
	static jni::ref<java::util::List> FORMAT_PROPERTIES() { return get_static_field<"FORMAT_PROPERTIES", jni::ref<java::util::List>>(); }
	static jlong TTL_DONT_CACHE() { return get_static_field<"TTL_DONT_CACHE", jlong>(); }
	static jlong TTL_NO_EXPIRATION_CONTROL() { return get_static_field<"TTL_NO_EXPIRATION_CONTROL", jlong>(); }

	static jni::ref<java::util::ResourceBundle_Control> getControl(jni::ref<java::util::List> formats) { return call_static_method<"getControl", jni::ref<java::util::ResourceBundle_Control>>(formats); }
	static jni::ref<java::util::ResourceBundle_Control> getNoFallbackControl(jni::ref<java::util::List> formats) { return call_static_method<"getNoFallbackControl", jni::ref<java::util::ResourceBundle_Control>>(formats); }
	jni::ref<java::util::List> getCandidateLocales(jni::ref<java::lang::String> baseName, jni::ref<java::util::Locale> locale) { return call_method<"getCandidateLocales", jni::ref<java::util::List>>(baseName, locale); }
	jni::ref<java::util::List> getFormats(jni::ref<java::lang::String> baseName) { return call_method<"getFormats", jni::ref<java::util::List>>(baseName); }
	jni::ref<java::util::Locale> getFallbackLocale(jni::ref<java::lang::String> baseName, jni::ref<java::util::Locale> locale) { return call_method<"getFallbackLocale", jni::ref<java::util::Locale>>(baseName, locale); }
	jni::ref<java::util::ResourceBundle> newBundle(jni::ref<java::lang::String> baseName, jni::ref<java::util::Locale> locale, jni::ref<java::lang::String> format, jni::ref<java::lang::ClassLoader> loader, jboolean reload) { return call_method<"newBundle", jni::ref<java::util::ResourceBundle>>(baseName, locale, format, loader, reload); }
	jlong getTimeToLive(jni::ref<java::lang::String> baseName, jni::ref<java::util::Locale> locale) { return call_method<"getTimeToLive", jlong>(baseName, locale); }
	jboolean needsReload(jni::ref<java::lang::String> baseName, jni::ref<java::util::Locale> locale, jni::ref<java::lang::String> format, jni::ref<java::lang::ClassLoader> loader, jni::ref<java::util::ResourceBundle> bundle, jlong loadTime) { return call_method<"needsReload", jboolean>(baseName, locale, format, loader, bundle, loadTime); }
	jni::ref<java::lang::String> toBundleName(jni::ref<java::lang::String> baseName, jni::ref<java::util::Locale> locale) { return call_method<"toBundleName", jni::ref<java::lang::String>>(baseName, locale); }
	jni::ref<java::lang::String> toResourceName(jni::ref<java::lang::String> bundleName, jni::ref<java::lang::String> suffix) { return call_method<"toResourceName", jni::ref<java::lang::String>>(bundleName, suffix); }

protected:

	ResourceBundle_Control(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_CONTROL
