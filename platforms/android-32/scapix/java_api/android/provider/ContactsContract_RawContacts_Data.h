// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_DataColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DATA_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_RawContacts_Data; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_RawContacts_Data>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$RawContacts$Data";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::BaseColumns, scapix::java_api::android::provider::ContactsContract_DataColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DATA)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_RawContacts_Data : public jni::object_base<"android/provider/ContactsContract$RawContacts$Data",
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::ContactsContract_DataColumns>
{
public:

	static jni::ref<java::lang::String> CONTENT_DIRECTORY() { return get_static_field<"CONTENT_DIRECTORY", jni::ref<java::lang::String>>(); }


protected:

	ContactsContract_RawContacts_Data(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DATA
