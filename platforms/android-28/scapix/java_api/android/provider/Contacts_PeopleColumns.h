// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_PEOPLECOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_PEOPLECOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class Contacts_PeopleColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::Contacts_PeopleColumns>
{
	static constexpr fixed_string class_name = "android/provider/Contacts$PeopleColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_PEOPLECOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_PEOPLECOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_PEOPLECOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::Contacts_PeopleColumns : public jni::object_base<"android/provider/Contacts$PeopleColumns",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> CUSTOM_RINGTONE() { return get_static_field<"CUSTOM_RINGTONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISPLAY_NAME() { return get_static_field<"DISPLAY_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LAST_TIME_CONTACTED() { return get_static_field<"LAST_TIME_CONTACTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NOTES() { return get_static_field<"NOTES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PHONETIC_NAME() { return get_static_field<"PHONETIC_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PHOTO_VERSION() { return get_static_field<"PHOTO_VERSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SEND_TO_VOICEMAIL() { return get_static_field<"SEND_TO_VOICEMAIL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STARRED() { return get_static_field<"STARRED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TIMES_CONTACTED() { return get_static_field<"TIMES_CONTACTED", jni::ref<java::lang::String>>(); }


protected:

	Contacts_PeopleColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_PEOPLECOLUMNS
