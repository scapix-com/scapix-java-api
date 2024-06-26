// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DISPLAYPHOTO_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DISPLAYPHOTO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_DisplayPhoto; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_DisplayPhoto>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$DisplayPhoto";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DISPLAYPHOTO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DISPLAYPHOTO)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DISPLAYPHOTO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_DisplayPhoto : public jni::object_base<"android/provider/ContactsContract$DisplayPhoto",
	java::lang::Object>
{
public:

	static jni::ref<android::net::Uri> CONTENT_MAX_DIMENSIONS_URI() { return get_static_field<"CONTENT_MAX_DIMENSIONS_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<java::lang::String> DISPLAY_MAX_DIM() { return get_static_field<"DISPLAY_MAX_DIM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> THUMBNAIL_MAX_DIM() { return get_static_field<"THUMBNAIL_MAX_DIM", jni::ref<java::lang::String>>(); }


protected:

	ContactsContract_DisplayPhoto(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DISPLAYPHOTO
