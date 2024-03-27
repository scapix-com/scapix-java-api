// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_SYNCSTATECONTRACT_HELPERS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_SYNCSTATECONTRACT_HELPERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class SyncStateContract_Helpers; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::SyncStateContract_Helpers>
{
	static constexpr fixed_string class_name = "android/provider/SyncStateContract$Helpers";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_SYNCSTATECONTRACT_HELPERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_SYNCSTATECONTRACT_HELPERS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_SYNCSTATECONTRACT_HELPERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/accounts/Account.h>
#include <scapix/java_api/android/content/ContentProviderClient.h>
#include <scapix/java_api/android/content/ContentProviderOperation.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/util/Pair.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::SyncStateContract_Helpers : public jni::object_base<"android/provider/SyncStateContract$Helpers",
	java::lang::Object>
{
public:

	static jni::ref<android::provider::SyncStateContract_Helpers> new_object() { return base_::new_object(); }
	static jni::ref<jni::array<jbyte>> get(jni::ref<android::content::ContentProviderClient> provider, jni::ref<android::net::Uri> uri, jni::ref<android::accounts::Account> account) { return call_static_method<"get", jni::ref<jni::array<jbyte>>>(provider, uri, account); }
	static void set(jni::ref<android::content::ContentProviderClient> provider, jni::ref<android::net::Uri> uri, jni::ref<android::accounts::Account> account, jni::ref<jni::array<jbyte>> data) { return call_static_method<"set", void>(provider, uri, account, data); }
	static jni::ref<android::net::Uri> insert(jni::ref<android::content::ContentProviderClient> provider, jni::ref<android::net::Uri> uri, jni::ref<android::accounts::Account> account, jni::ref<jni::array<jbyte>> data) { return call_static_method<"insert", jni::ref<android::net::Uri>>(provider, uri, account, data); }
	static void update(jni::ref<android::content::ContentProviderClient> provider, jni::ref<android::net::Uri> uri, jni::ref<jni::array<jbyte>> data) { return call_static_method<"update", void>(provider, uri, data); }
	static jni::ref<android::util::Pair> getWithUri(jni::ref<android::content::ContentProviderClient> provider, jni::ref<android::net::Uri> uri, jni::ref<android::accounts::Account> account) { return call_static_method<"getWithUri", jni::ref<android::util::Pair>>(provider, uri, account); }
	static jni::ref<android::content::ContentProviderOperation> newSetOperation(jni::ref<android::net::Uri> uri, jni::ref<android::accounts::Account> account, jni::ref<jni::array<jbyte>> data) { return call_static_method<"newSetOperation", jni::ref<android::content::ContentProviderOperation>>(uri, account, data); }
	static jni::ref<android::content::ContentProviderOperation> newUpdateOperation(jni::ref<android::net::Uri> uri, jni::ref<jni::array<jbyte>> data) { return call_static_method<"newUpdateOperation", jni::ref<android::content::ContentProviderOperation>>(uri, data); }

protected:

	SyncStateContract_Helpers(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_SYNCSTATECONTRACT_HELPERS
