// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/nfc/tech/TagTechnology.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NFC_TECH_NDEF_FWD
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_NDEF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::nfc::tech { class Ndef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::nfc::tech::Ndef>
{
	static constexpr fixed_string class_name = "android/nfc/tech/Ndef";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::nfc::tech::TagTechnology>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_NDEF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NFC_TECH_NDEF)
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_NDEF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/nfc/NdefMessage.h>
#include <scapix/java_api/android/nfc/Tag.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::nfc::tech::Ndef : public jni::object_base<"android/nfc/tech/Ndef",
	java::lang::Object,
	android::nfc::tech::TagTechnology>
{
public:

	static jni::ref<java::lang::String> MIFARE_CLASSIC() { return get_static_field<"MIFARE_CLASSIC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NFC_FORUM_TYPE_1() { return get_static_field<"NFC_FORUM_TYPE_1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NFC_FORUM_TYPE_2() { return get_static_field<"NFC_FORUM_TYPE_2", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NFC_FORUM_TYPE_3() { return get_static_field<"NFC_FORUM_TYPE_3", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NFC_FORUM_TYPE_4() { return get_static_field<"NFC_FORUM_TYPE_4", jni::ref<java::lang::String>>(); }

	static jni::ref<android::nfc::tech::Ndef> get(jni::ref<android::nfc::Tag> tag) { return call_static_method<"get", jni::ref<android::nfc::tech::Ndef>>(tag); }
	jni::ref<android::nfc::NdefMessage> getCachedNdefMessage() { return call_method<"getCachedNdefMessage", jni::ref<android::nfc::NdefMessage>>(); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jint getMaxSize() { return call_method<"getMaxSize", jint>(); }
	jboolean isWritable() { return call_method<"isWritable", jboolean>(); }
	jni::ref<android::nfc::NdefMessage> getNdefMessage() { return call_method<"getNdefMessage", jni::ref<android::nfc::NdefMessage>>(); }
	void writeNdefMessage(jni::ref<android::nfc::NdefMessage> msg) { return call_method<"writeNdefMessage", void>(msg); }
	jboolean canMakeReadOnly() { return call_method<"canMakeReadOnly", jboolean>(); }
	jboolean makeReadOnly() { return call_method<"makeReadOnly", jboolean>(); }
	jboolean isConnected() { return call_method<"isConnected", jboolean>(); }
	jni::ref<android::nfc::Tag> getTag() { return call_method<"getTag", jni::ref<android::nfc::Tag>>(); }
	void close() { return call_method<"close", void>(); }
	void connect() { return call_method<"connect", void>(); }

protected:

	Ndef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_NDEF