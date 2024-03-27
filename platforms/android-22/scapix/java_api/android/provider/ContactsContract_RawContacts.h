// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_RawContactsColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_ContactOptionsColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_ContactNameColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_SyncColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_RawContacts; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_RawContacts>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$RawContacts";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::BaseColumns, scapix::java_api::android::provider::ContactsContract_RawContactsColumns, scapix::java_api::android::provider::ContactsContract_ContactOptionsColumns, scapix::java_api::android::provider::ContactsContract_ContactNameColumns, scapix::java_api::android::provider::ContactsContract_SyncColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/content/EntityIterator.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/provider/ContactsContract_RawContacts_DisplayPhoto.h>
#include <scapix/java_api/android/provider/ContactsContract_RawContacts_StreamItems.h>
#include <scapix/java_api/android/provider/ContactsContract_RawContacts_Entity.h>
#include <scapix/java_api/android/provider/ContactsContract_RawContacts_Data.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_RawContacts : public jni::object_base<"android/provider/ContactsContract$RawContacts",
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::ContactsContract_RawContactsColumns,
	android::provider::ContactsContract_ContactOptionsColumns,
	android::provider::ContactsContract_ContactNameColumns,
	android::provider::ContactsContract_SyncColumns>
{
public:

	using DisplayPhoto = ContactsContract_RawContacts_DisplayPhoto;
	using StreamItems = ContactsContract_RawContacts_StreamItems;
	using Entity = ContactsContract_RawContacts_Entity;
	using Data = ContactsContract_RawContacts_Data;

	static jint AGGREGATION_MODE_DEFAULT() { return get_static_field<"AGGREGATION_MODE_DEFAULT", jint>(); }
	static jint AGGREGATION_MODE_DISABLED() { return get_static_field<"AGGREGATION_MODE_DISABLED", jint>(); }
	static jint AGGREGATION_MODE_IMMEDIATE() { return get_static_field<"AGGREGATION_MODE_IMMEDIATE", jint>(); }
	static jint AGGREGATION_MODE_SUSPENDED() { return get_static_field<"AGGREGATION_MODE_SUSPENDED", jint>(); }
	static jni::ref<java::lang::String> CONTENT_ITEM_TYPE() { return get_static_field<"CONTENT_ITEM_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTENT_TYPE() { return get_static_field<"CONTENT_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }

	static jni::ref<android::net::Uri> getContactLookupUri(jni::ref<android::content::ContentResolver> resolver, jni::ref<android::net::Uri> rawContactUri) { return call_static_method<"getContactLookupUri", jni::ref<android::net::Uri>>(resolver, rawContactUri); }
	static jni::ref<android::content::EntityIterator> newEntityIterator(jni::ref<android::database::Cursor> cursor) { return call_static_method<"newEntityIterator", jni::ref<android::content::EntityIterator>>(cursor); }

protected:

	ContactsContract_RawContacts(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS
