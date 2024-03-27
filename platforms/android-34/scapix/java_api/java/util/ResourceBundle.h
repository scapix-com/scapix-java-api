// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ResourceBundle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ResourceBundle>
{
	static constexpr fixed_string class_name = "java/util/ResourceBundle";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE)
#define SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/ResourceBundle_Control.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::ResourceBundle : public jni::object_base<"java/util/ResourceBundle",
	java::lang::Object>
{
public:

	using Control = ResourceBundle_Control;

	static jni::ref<java::util::ResourceBundle> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getBaseBundleName() { return call_method<"getBaseBundleName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getString(jni::ref<java::lang::String> key) { return call_method<"getString", jni::ref<java::lang::String>>(key); }
	jni::ref<jni::array<java::lang::String>> getStringArray(jni::ref<java::lang::String> key) { return call_method<"getStringArray", jni::ref<jni::array<java::lang::String>>>(key); }
	jni::ref<java::lang::Object> getObject(jni::ref<java::lang::String> key) { return call_method<"getObject", jni::ref<java::lang::Object>>(key); }
	jni::ref<java::util::Locale> getLocale() { return call_method<"getLocale", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::ResourceBundle> getBundle(jni::ref<java::lang::String> baseName) { return call_static_method<"getBundle", jni::ref<java::util::ResourceBundle>>(baseName); }
	static jni::ref<java::util::ResourceBundle> getBundle(jni::ref<java::lang::String> baseName, jni::ref<java::util::ResourceBundle_Control> control) { return call_static_method<"getBundle", jni::ref<java::util::ResourceBundle>>(baseName, control); }
	static jni::ref<java::util::ResourceBundle> getBundle(jni::ref<java::lang::String> baseName, jni::ref<java::util::Locale> locale) { return call_static_method<"getBundle", jni::ref<java::util::ResourceBundle>>(baseName, locale); }
	static jni::ref<java::util::ResourceBundle> getBundle(jni::ref<java::lang::String> baseName, jni::ref<java::util::Locale> targetLocale, jni::ref<java::util::ResourceBundle_Control> control) { return call_static_method<"getBundle", jni::ref<java::util::ResourceBundle>>(baseName, targetLocale, control); }
	static jni::ref<java::util::ResourceBundle> getBundle(jni::ref<java::lang::String> baseName, jni::ref<java::util::Locale> locale, jni::ref<java::lang::ClassLoader> loader) { return call_static_method<"getBundle", jni::ref<java::util::ResourceBundle>>(baseName, locale, loader); }
	static jni::ref<java::util::ResourceBundle> getBundle(jni::ref<java::lang::String> baseName, jni::ref<java::util::Locale> targetLocale, jni::ref<java::lang::ClassLoader> loader, jni::ref<java::util::ResourceBundle_Control> control) { return call_static_method<"getBundle", jni::ref<java::util::ResourceBundle>>(baseName, targetLocale, loader, control); }
	static void clearCache() { return call_static_method<"clearCache", void>(); }
	static void clearCache(jni::ref<java::lang::ClassLoader> loader) { return call_static_method<"clearCache", void>(loader); }
	jni::ref<java::util::Enumeration> getKeys() { return call_method<"getKeys", jni::ref<java::util::Enumeration>>(); }
	jboolean containsKey(jni::ref<java::lang::String> key) { return call_method<"containsKey", jboolean>(key); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }

protected:

	ResourceBundle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE
