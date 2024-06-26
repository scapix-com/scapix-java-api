// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/ContactsContract_DataColumnsWithJoins.h>
#include <scapix/java_api/android/provider/ContactsContract_CommonDataKinds_CommonColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_RELATION_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_RELATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_CommonDataKinds_Relation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_CommonDataKinds_Relation>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$CommonDataKinds$Relation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::ContactsContract_DataColumnsWithJoins, scapix::java_api::android::provider::ContactsContract_CommonDataKinds_CommonColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_RELATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_RELATION)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_RELATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_CommonDataKinds_Relation : public jni::object_base<"android/provider/ContactsContract$CommonDataKinds$Relation",
	java::lang::Object,
	android::provider::ContactsContract_DataColumnsWithJoins,
	android::provider::ContactsContract_CommonDataKinds_CommonColumns>
{
public:

	static jni::ref<java::lang::String> CONTENT_ITEM_TYPE() { return get_static_field<"CONTENT_ITEM_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_ADDRESS_BOOK_INDEX() { return get_static_field<"EXTRA_ADDRESS_BOOK_INDEX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_ADDRESS_BOOK_INDEX_COUNTS() { return get_static_field<"EXTRA_ADDRESS_BOOK_INDEX_COUNTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_ADDRESS_BOOK_INDEX_TITLES() { return get_static_field<"EXTRA_ADDRESS_BOOK_INDEX_TITLES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jint TYPE_ASSISTANT() { return get_static_field<"TYPE_ASSISTANT", jint>(); }
	static jint TYPE_BROTHER() { return get_static_field<"TYPE_BROTHER", jint>(); }
	static jint TYPE_CHILD() { return get_static_field<"TYPE_CHILD", jint>(); }
	static jint TYPE_DOMESTIC_PARTNER() { return get_static_field<"TYPE_DOMESTIC_PARTNER", jint>(); }
	static jint TYPE_FATHER() { return get_static_field<"TYPE_FATHER", jint>(); }
	static jint TYPE_FRIEND() { return get_static_field<"TYPE_FRIEND", jint>(); }
	static jint TYPE_MANAGER() { return get_static_field<"TYPE_MANAGER", jint>(); }
	static jint TYPE_MOTHER() { return get_static_field<"TYPE_MOTHER", jint>(); }
	static jint TYPE_PARENT() { return get_static_field<"TYPE_PARENT", jint>(); }
	static jint TYPE_PARTNER() { return get_static_field<"TYPE_PARTNER", jint>(); }
	static jint TYPE_REFERRED_BY() { return get_static_field<"TYPE_REFERRED_BY", jint>(); }
	static jint TYPE_RELATIVE() { return get_static_field<"TYPE_RELATIVE", jint>(); }
	static jint TYPE_SISTER() { return get_static_field<"TYPE_SISTER", jint>(); }
	static jint TYPE_SPOUSE() { return get_static_field<"TYPE_SPOUSE", jint>(); }

	static jint getTypeLabelResource(jint type) { return call_static_method<"getTypeLabelResource", jint>(type); }
	static jni::ref<java::lang::CharSequence> getTypeLabel(jni::ref<android::content::res::Resources> res, jint type, jni::ref<java::lang::CharSequence> label) { return call_static_method<"getTypeLabel", jni::ref<java::lang::CharSequence>>(res, type, label); }

protected:

	ContactsContract_CommonDataKinds_Relation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_RELATION
