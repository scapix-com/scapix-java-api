// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_SETTINGSCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_SETTINGSCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class Contacts_SettingsColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::Contacts_SettingsColumns>
{
	static constexpr fixed_string class_name = "android/provider/Contacts$SettingsColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_SETTINGSCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_SETTINGSCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_SETTINGSCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::Contacts_SettingsColumns : public jni::object_base<"android/provider/Contacts$SettingsColumns",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> KEY() { return get_static_field<"KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VALUE() { return get_static_field<"VALUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> _SYNC_ACCOUNT() { return get_static_field<"_SYNC_ACCOUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> _SYNC_ACCOUNT_TYPE() { return get_static_field<"_SYNC_ACCOUNT_TYPE", jni::ref<java::lang::String>>(); }


protected:

	Contacts_SettingsColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_SETTINGSCOLUMNS
