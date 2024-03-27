// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_SEARCHSNIPPETS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_SEARCHSNIPPETS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_SearchSnippets; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_SearchSnippets>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$SearchSnippets";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_SEARCHSNIPPETS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_SEARCHSNIPPETS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_SEARCHSNIPPETS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_SearchSnippets : public jni::object_base<"android/provider/ContactsContract$SearchSnippets",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> DEFERRED_SNIPPETING_KEY() { return get_static_field<"DEFERRED_SNIPPETING_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SNIPPET() { return get_static_field<"SNIPPET", jni::ref<java::lang::String>>(); }

	static jni::ref<android::provider::ContactsContract_SearchSnippets> new_object() { return base_::new_object(); }

protected:

	ContactsContract_SearchSnippets(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_SEARCHSNIPPETS