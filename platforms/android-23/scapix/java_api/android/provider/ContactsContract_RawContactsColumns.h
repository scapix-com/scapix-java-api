// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTSCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTSCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_RawContactsColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_RawContactsColumns>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$RawContactsColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTSCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTSCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTSCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_RawContactsColumns : public jni::object_base<"android/provider/ContactsContract$RawContactsColumns",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACCOUNT_TYPE_AND_DATA_SET() { return get_static_field<"ACCOUNT_TYPE_AND_DATA_SET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> AGGREGATION_MODE() { return get_static_field<"AGGREGATION_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTACT_ID() { return get_static_field<"CONTACT_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA_SET() { return get_static_field<"DATA_SET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DELETED() { return get_static_field<"DELETED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RAW_CONTACT_IS_READ_ONLY() { return get_static_field<"RAW_CONTACT_IS_READ_ONLY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RAW_CONTACT_IS_USER_PROFILE() { return get_static_field<"RAW_CONTACT_IS_USER_PROFILE", jni::ref<java::lang::String>>(); }


protected:

	ContactsContract_RawContactsColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTSCOLUMNS
