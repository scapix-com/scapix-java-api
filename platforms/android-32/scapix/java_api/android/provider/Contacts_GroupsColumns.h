// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_GROUPSCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_GROUPSCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class Contacts_GroupsColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::Contacts_GroupsColumns>
{
	static constexpr fixed_string class_name = "android/provider/Contacts$GroupsColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_GROUPSCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_GROUPSCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_GROUPSCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::Contacts_GroupsColumns : public jni::object_base<"android/provider/Contacts$GroupsColumns",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NOTES() { return get_static_field<"NOTES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SHOULD_SYNC() { return get_static_field<"SHOULD_SYNC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYSTEM_ID() { return get_static_field<"SYSTEM_ID", jni::ref<java::lang::String>>(); }


protected:

	Contacts_GroupsColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTS_GROUPSCOLUMNS
