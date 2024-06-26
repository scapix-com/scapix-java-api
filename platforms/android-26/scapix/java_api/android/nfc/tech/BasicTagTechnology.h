// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/nfc/tech/TagTechnology.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NFC_TECH_BASICTAGTECHNOLOGY_FWD
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_BASICTAGTECHNOLOGY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::nfc::tech { class BasicTagTechnology; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::nfc::tech::BasicTagTechnology>
{
	static constexpr fixed_string class_name = "android/nfc/tech/BasicTagTechnology";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::nfc::tech::TagTechnology>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_BASICTAGTECHNOLOGY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NFC_TECH_BASICTAGTECHNOLOGY)
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_BASICTAGTECHNOLOGY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/nfc/Tag.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class android::nfc::tech::BasicTagTechnology : public jni::object_base<"android/nfc/tech/BasicTagTechnology",
	java::lang::Object,
	android::nfc::tech::TagTechnology>
{
public:

	jni::ref<android::nfc::Tag> getTag() { return call_method<"getTag", jni::ref<android::nfc::Tag>>(); }
	jboolean isConnected() { return call_method<"isConnected", jboolean>(); }
	void connect() { return call_method<"connect", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	BasicTagTechnology(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_BASICTAGTECHNOLOGY
