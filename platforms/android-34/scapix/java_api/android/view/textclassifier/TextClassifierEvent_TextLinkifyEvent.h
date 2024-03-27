// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/textclassifier/TextClassifierEvent.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_TEXTLINKIFYEVENT_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_TEXTLINKIFYEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textclassifier { class TextClassifierEvent_TextLinkifyEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textclassifier::TextClassifierEvent_TextLinkifyEvent>
{
	static constexpr fixed_string class_name = "android/view/textclassifier/TextClassifierEvent$TextLinkifyEvent";
	using base_classes = std::tuple<scapix::java_api::android::view::textclassifier::TextClassifierEvent, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_TEXTLINKIFYEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_TEXTLINKIFYEVENT)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_TEXTLINKIFYEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/textclassifier/TextClassifierEvent_TextLinkifyEvent_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textclassifier::TextClassifierEvent_TextLinkifyEvent : public jni::object_base<"android/view/textclassifier/TextClassifierEvent$TextLinkifyEvent",
	android::view::textclassifier::TextClassifierEvent,
	android::os::Parcelable>
{
public:

	using Builder = TextClassifierEvent_TextLinkifyEvent_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }


protected:

	TextClassifierEvent_TextLinkifyEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_TEXTLINKIFYEVENT