// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/ContactsContract_DeletedContactsColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DELETEDCONTACTS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DELETEDCONTACTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_DeletedContacts; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_DeletedContacts>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$DeletedContacts";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::ContactsContract_DeletedContactsColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DELETEDCONTACTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DELETEDCONTACTS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DELETEDCONTACTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_DeletedContacts : public jni::object_base<"android/provider/ContactsContract$DeletedContacts",
	java::lang::Object,
	android::provider::ContactsContract_DeletedContactsColumns>
{
public:

	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }
	static jlong DAYS_KEPT_MILLISECONDS() { return get_static_field<"DAYS_KEPT_MILLISECONDS", jlong>(); }


protected:

	ContactsContract_DeletedContacts(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DELETEDCONTACTS
