// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_STREAMITEMSCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_STREAMITEMSCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_StreamItemsColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_StreamItemsColumns>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$StreamItemsColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_STREAMITEMSCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_STREAMITEMSCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_STREAMITEMSCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_StreamItemsColumns : public jni::object_base<"android/provider/ContactsContract$StreamItemsColumns",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACCOUNT_NAME() { return get_static_field<"ACCOUNT_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCOUNT_TYPE() { return get_static_field<"ACCOUNT_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMENTS() { return get_static_field<"COMMENTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTACT_ID() { return get_static_field<"CONTACT_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTACT_LOOKUP_KEY() { return get_static_field<"CONTACT_LOOKUP_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA_SET() { return get_static_field<"DATA_SET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RAW_CONTACT_ID() { return get_static_field<"RAW_CONTACT_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RAW_CONTACT_SOURCE_ID() { return get_static_field<"RAW_CONTACT_SOURCE_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RES_ICON() { return get_static_field<"RES_ICON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RES_LABEL() { return get_static_field<"RES_LABEL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RES_PACKAGE() { return get_static_field<"RES_PACKAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYNC1() { return get_static_field<"SYNC1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYNC2() { return get_static_field<"SYNC2", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYNC3() { return get_static_field<"SYNC3", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYNC4() { return get_static_field<"SYNC4", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TEXT() { return get_static_field<"TEXT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TIMESTAMP() { return get_static_field<"TIMESTAMP", jni::ref<java::lang::String>>(); }


protected:

	ContactsContract_StreamItemsColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_STREAMITEMSCOLUMNS