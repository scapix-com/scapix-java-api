// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/ContactsContract_BaseSyncColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_SYNCCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_SYNCCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_SyncColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_SyncColumns>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$SyncColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::ContactsContract_BaseSyncColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_SYNCCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_SYNCCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_SYNCCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_SyncColumns : public jni::object_base<"android/provider/ContactsContract$SyncColumns",
	java::lang::Object,
	android::provider::ContactsContract_BaseSyncColumns>
{
public:

	static jni::ref<java::lang::String> ACCOUNT_NAME() { return get_static_field<"ACCOUNT_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCOUNT_TYPE() { return get_static_field<"ACCOUNT_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DIRTY() { return get_static_field<"DIRTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SOURCE_ID() { return get_static_field<"SOURCE_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VERSION() { return get_static_field<"VERSION", jni::ref<java::lang::String>>(); }


protected:

	ContactsContract_SyncColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_SYNCCOLUMNS