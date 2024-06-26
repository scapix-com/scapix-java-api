// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_PINNEDPOSITIONS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_PINNEDPOSITIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_PinnedPositions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_PinnedPositions>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$PinnedPositions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_PINNEDPOSITIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_PINNEDPOSITIONS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_PINNEDPOSITIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentResolver.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_PinnedPositions : public jni::object_base<"android/provider/ContactsContract$PinnedPositions",
	java::lang::Object>
{
public:

	static jint DEMOTED() { return get_static_field<"DEMOTED", jint>(); }
	static jint UNPINNED() { return get_static_field<"UNPINNED", jint>(); }

	static jni::ref<android::provider::ContactsContract_PinnedPositions> new_object() { return base_::new_object(); }
	static void undemote(jni::ref<android::content::ContentResolver> contentResolver, jlong contactId) { return call_static_method<"undemote", void>(contentResolver, contactId); }
	static void pin(jni::ref<android::content::ContentResolver> contentResolver, jlong contactId, jint p3) { return call_static_method<"pin", void>(contentResolver, contactId, p3); }

protected:

	ContactsContract_PinnedPositions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_PINNEDPOSITIONS
