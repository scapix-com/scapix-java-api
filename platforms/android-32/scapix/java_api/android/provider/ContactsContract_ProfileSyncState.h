// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/SyncStateContract_Columns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_PROFILESYNCSTATE_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_PROFILESYNCSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_ProfileSyncState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_ProfileSyncState>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$ProfileSyncState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::SyncStateContract_Columns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_PROFILESYNCSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_PROFILESYNCSTATE)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_PROFILESYNCSTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/accounts/Account.h>
#include <scapix/java_api/android/content/ContentProviderClient.h>
#include <scapix/java_api/android/content/ContentProviderOperation.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/util/Pair.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_ProfileSyncState : public jni::object_base<"android/provider/ContactsContract$ProfileSyncState",
	java::lang::Object,
	android::provider::SyncStateContract_Columns>
{
public:

	static jni::ref<java::lang::String> CONTENT_DIRECTORY() { return get_static_field<"CONTENT_DIRECTORY", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }

	static jni::ref<jni::array<jbyte>> get(jni::ref<android::content::ContentProviderClient> provider, jni::ref<android::accounts::Account> account) { return call_static_method<"get", jni::ref<jni::array<jbyte>>>(provider, account); }
	static jni::ref<android::util::Pair> getWithUri(jni::ref<android::content::ContentProviderClient> provider, jni::ref<android::accounts::Account> account) { return call_static_method<"getWithUri", jni::ref<android::util::Pair>>(provider, account); }
	static void set(jni::ref<android::content::ContentProviderClient> provider, jni::ref<android::accounts::Account> account, jni::ref<jni::array<jbyte>> data) { return call_static_method<"set", void>(provider, account, data); }
	static jni::ref<android::content::ContentProviderOperation> newSetOperation(jni::ref<android::accounts::Account> account, jni::ref<jni::array<jbyte>> data) { return call_static_method<"newSetOperation", jni::ref<android::content::ContentProviderOperation>>(account, data); }

protected:

	ContactsContract_ProfileSyncState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_PROFILESYNCSTATE
