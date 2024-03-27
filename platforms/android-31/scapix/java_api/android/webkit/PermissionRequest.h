// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_PERMISSIONREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_PERMISSIONREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class PermissionRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::PermissionRequest>
{
	static constexpr fixed_string class_name = "android/webkit/PermissionRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_PERMISSIONREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_PERMISSIONREQUEST)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_PERMISSIONREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::PermissionRequest : public jni::object_base<"android/webkit/PermissionRequest",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> RESOURCE_AUDIO_CAPTURE() { return get_static_field<"RESOURCE_AUDIO_CAPTURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RESOURCE_MIDI_SYSEX() { return get_static_field<"RESOURCE_MIDI_SYSEX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RESOURCE_PROTECTED_MEDIA_ID() { return get_static_field<"RESOURCE_PROTECTED_MEDIA_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RESOURCE_VIDEO_CAPTURE() { return get_static_field<"RESOURCE_VIDEO_CAPTURE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::webkit::PermissionRequest> new_object() { return base_::new_object(); }
	jni::ref<android::net::Uri> getOrigin() { return call_method<"getOrigin", jni::ref<android::net::Uri>>(); }
	jni::ref<jni::array<java::lang::String>> getResources() { return call_method<"getResources", jni::ref<jni::array<java::lang::String>>>(); }
	void grant(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"grant", void>(p1); }
	void deny() { return call_method<"deny", void>(); }

protected:

	PermissionRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_PERMISSIONREQUEST