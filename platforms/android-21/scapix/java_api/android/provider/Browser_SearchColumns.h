// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_BROWSER_SEARCHCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_BROWSER_SEARCHCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class Browser_SearchColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::Browser_SearchColumns>
{
	static constexpr fixed_string class_name = "android/provider/Browser$SearchColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::BaseColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_BROWSER_SEARCHCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_BROWSER_SEARCHCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_BROWSER_SEARCHCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::Browser_SearchColumns : public jni::object_base<"android/provider/Browser$SearchColumns",
	java::lang::Object,
	android::provider::BaseColumns>
{
public:

	static jni::ref<java::lang::String> DATE() { return get_static_field<"DATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SEARCH() { return get_static_field<"SEARCH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> URL() { return get_static_field<"URL", jni::ref<java::lang::String>>(); }

	static jni::ref<android::provider::Browser_SearchColumns> new_object() { return base_::new_object(); }

protected:

	Browser_SearchColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_BROWSER_SEARCHCOLUMNS
