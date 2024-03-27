// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_INTENTS_INSERT_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_INTENTS_INSERT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_Intents_Insert; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_Intents_Insert>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$Intents$Insert";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_INTENTS_INSERT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_INTENTS_INSERT)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_INTENTS_INSERT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_Intents_Insert : public jni::object_base<"android/provider/ContactsContract$Intents$Insert",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION() { return get_static_field<"ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMPANY() { return get_static_field<"COMPANY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA() { return get_static_field<"DATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EMAIL() { return get_static_field<"EMAIL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EMAIL_ISPRIMARY() { return get_static_field<"EMAIL_ISPRIMARY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EMAIL_TYPE() { return get_static_field<"EMAIL_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FULL_MODE() { return get_static_field<"FULL_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IM_HANDLE() { return get_static_field<"IM_HANDLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IM_ISPRIMARY() { return get_static_field<"IM_ISPRIMARY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IM_PROTOCOL() { return get_static_field<"IM_PROTOCOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JOB_TITLE() { return get_static_field<"JOB_TITLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NOTES() { return get_static_field<"NOTES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PHONE() { return get_static_field<"PHONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PHONETIC_NAME() { return get_static_field<"PHONETIC_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PHONE_ISPRIMARY() { return get_static_field<"PHONE_ISPRIMARY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PHONE_TYPE() { return get_static_field<"PHONE_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> POSTAL() { return get_static_field<"POSTAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> POSTAL_ISPRIMARY() { return get_static_field<"POSTAL_ISPRIMARY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> POSTAL_TYPE() { return get_static_field<"POSTAL_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SECONDARY_EMAIL() { return get_static_field<"SECONDARY_EMAIL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SECONDARY_EMAIL_TYPE() { return get_static_field<"SECONDARY_EMAIL_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SECONDARY_PHONE() { return get_static_field<"SECONDARY_PHONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SECONDARY_PHONE_TYPE() { return get_static_field<"SECONDARY_PHONE_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TERTIARY_EMAIL() { return get_static_field<"TERTIARY_EMAIL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TERTIARY_EMAIL_TYPE() { return get_static_field<"TERTIARY_EMAIL_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TERTIARY_PHONE() { return get_static_field<"TERTIARY_PHONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TERTIARY_PHONE_TYPE() { return get_static_field<"TERTIARY_PHONE_TYPE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::provider::ContactsContract_Intents_Insert> new_object() { return base_::new_object(); }

protected:

	ContactsContract_Intents_Insert(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_INTENTS_INSERT
