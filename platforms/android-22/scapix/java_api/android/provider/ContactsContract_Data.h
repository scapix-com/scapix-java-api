// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/ContactsContract_DataColumnsWithJoins.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATA_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_Data; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_Data>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$Data";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::ContactsContract_DataColumnsWithJoins>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATA)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_Data : public jni::object_base<"android/provider/ContactsContract$Data",
	java::lang::Object,
	android::provider::ContactsContract_DataColumnsWithJoins>
{
public:

	static jni::ref<java::lang::String> CONTENT_TYPE() { return get_static_field<"CONTENT_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<java::lang::String> EXTRA_ADDRESS_BOOK_INDEX() { return get_static_field<"EXTRA_ADDRESS_BOOK_INDEX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_ADDRESS_BOOK_INDEX_COUNTS() { return get_static_field<"EXTRA_ADDRESS_BOOK_INDEX_COUNTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_ADDRESS_BOOK_INDEX_TITLES() { return get_static_field<"EXTRA_ADDRESS_BOOK_INDEX_TITLES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VISIBLE_CONTACTS_ONLY() { return get_static_field<"VISIBLE_CONTACTS_ONLY", jni::ref<java::lang::String>>(); }

	static jni::ref<android::net::Uri> getContactLookupUri(jni::ref<android::content::ContentResolver> resolver, jni::ref<android::net::Uri> dataUri) { return call_static_method<"getContactLookupUri", jni::ref<android::net::Uri>>(resolver, dataUri); }

protected:

	ContactsContract_Data(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATA