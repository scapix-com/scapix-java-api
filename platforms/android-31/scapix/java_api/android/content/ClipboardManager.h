// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/ClipboardManager.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_CLIPBOARDMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CLIPBOARDMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class ClipboardManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::ClipboardManager>
{
	static constexpr fixed_string class_name = "android/content/ClipboardManager";
	using base_classes = std::tuple<scapix::java_api::android::text::ClipboardManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CLIPBOARDMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_CLIPBOARDMANAGER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CLIPBOARDMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ClipData.h>
#include <scapix/java_api/android/content/ClipDescription.h>
#include <scapix/java_api/android/content/ClipboardManager_OnPrimaryClipChangedListener.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::ClipboardManager : public jni::object_base<"android/content/ClipboardManager",
	android::text::ClipboardManager>
{
public:

	using OnPrimaryClipChangedListener = ClipboardManager_OnPrimaryClipChangedListener;

	void setPrimaryClip(jni::ref<android::content::ClipData> clip) { return call_method<"setPrimaryClip", void>(clip); }
	void clearPrimaryClip() { return call_method<"clearPrimaryClip", void>(); }
	jni::ref<android::content::ClipData> getPrimaryClip() { return call_method<"getPrimaryClip", jni::ref<android::content::ClipData>>(); }
	jni::ref<android::content::ClipDescription> getPrimaryClipDescription() { return call_method<"getPrimaryClipDescription", jni::ref<android::content::ClipDescription>>(); }
	jboolean hasPrimaryClip() { return call_method<"hasPrimaryClip", jboolean>(); }
	void addPrimaryClipChangedListener(jni::ref<android::content::ClipboardManager_OnPrimaryClipChangedListener> what) { return call_method<"addPrimaryClipChangedListener", void>(what); }
	void removePrimaryClipChangedListener(jni::ref<android::content::ClipboardManager_OnPrimaryClipChangedListener> what) { return call_method<"removePrimaryClipChangedListener", void>(what); }
	jni::ref<java::lang::CharSequence> getText() { return call_method<"getText", jni::ref<java::lang::CharSequence>>(); }
	void setText(jni::ref<java::lang::CharSequence> text) { return call_method<"setText", void>(text); }
	jboolean hasText() { return call_method<"hasText", jboolean>(); }

protected:

	ClipboardManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CLIPBOARDMANAGER
