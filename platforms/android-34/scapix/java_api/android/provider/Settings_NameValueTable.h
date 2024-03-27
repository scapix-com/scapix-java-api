// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_NAMEVALUETABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_NAMEVALUETABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class Settings_NameValueTable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::Settings_NameValueTable>
{
	static constexpr fixed_string class_name = "android/provider/Settings$NameValueTable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::BaseColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_NAMEVALUETABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_NAMEVALUETABLE)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_NAMEVALUETABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::Settings_NameValueTable : public jni::object_base<"android/provider/Settings$NameValueTable",
	java::lang::Object,
	android::provider::BaseColumns>
{
public:

	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VALUE() { return get_static_field<"VALUE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::provider::Settings_NameValueTable> new_object() { return base_::new_object(); }
	static jni::ref<android::net::Uri> getUriFor(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> name) { return call_static_method<"getUriFor", jni::ref<android::net::Uri>>(uri, name); }

protected:

	Settings_NameValueTable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_NAMEVALUETABLE
